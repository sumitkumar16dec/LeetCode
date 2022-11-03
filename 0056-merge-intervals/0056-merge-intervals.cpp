class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;                // SC: O(n)
        
        if(intervals.size()==0) return ans;
        
        sort(intervals.begin(), intervals.end());   // O(nlogn)
        
        vector<int> temp= intervals[0];
        
        for(auto it: intervals){                // O(n)
            if(it[0]<= temp[1]){
                temp[1]= max(temp[1], it[1]);
            }
            else{
                ans.push_back(temp);
                temp= it;
            }
        }
        ans.push_back(temp);
        
        return ans;
    }
};
// TC: O(nlogn + n) , SC: O(n)
// https://youtu.be/2JzRBPFYbKE