class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());   // O(nlogn)
        vector<vector<int>> ans;        // SC: O(n)
        vector<int> temp= intervals[0];
        for(auto i: intervals){         // O(n)
            if(i[0]<=temp[1]) temp[1]= max(temp[1],i[1]);
            else{
                ans.push_back(temp);
                temp= i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
// TC: O(nlogn + n) , SC: O(n)
// https://youtu.be/2JzRBPFYbKE