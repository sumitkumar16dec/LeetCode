typedef pair<int,int> p;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }

        priority_queue<p, vector<p>, greater<p>> pq;
        for(auto i: mp){
            pq.push({i.second, i.first});

            if(pq.size() > k) pq.pop();
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/3YFFqwzxosU