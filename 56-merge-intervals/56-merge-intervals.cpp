class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end());   // O(nlogn)
        vector<int> v = intervals[0];
        
        for(int i=1;i<n;i++){                       // O(n)
            vector<int> part = intervals[i];    // SC: O(n)
            if(v[1]>=part[0]){
                v[1]=max(v[1], part[1]);
            }
            else{
                ans.push_back(v);
                v=part;
            }
        }
        ans.push_back(v);
        
        return ans;
    }
};
// TC: O(nlogn + n) , SC: O(n)
// https://youtu.be/2JzRBPFYbKE