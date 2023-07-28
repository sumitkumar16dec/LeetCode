//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int,int>> adj[n+1];
        for(auto it: edges){
            adj[it[0]].push_back({it[2],it[1]});
            adj[it[1]].push_back({it[2],it[0]});
        }

        vector<int> dist(n+1, 1e9);        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,1});
        dist[1]= 0;

        vector<int> parent(n+1);
        for(int i=1;i<=n;i++) parent[i]=i;
        
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it: adj[node]){
                int edW= it.first;
                int adjNode= it.second;
                
                if(dis+edW < dist[adjNode]){
                    dist[adjNode] = dis+edW;
                    pq.push({dist[adjNode] , adjNode});
                    parent[adjNode] = node;
                }
            }
        }
        
        if(dist[n]==1e9) return {-1};
        vector<int> ans;
        int node = n;
        // O(n)
        while(parent[node] != node){
            ans.push_back(node);
            node= parent[node];
        }
        ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// TC: O(e logn)+O(n), SC: O(n)
// https://youtu.be/rp1SMw7HSO8


//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends