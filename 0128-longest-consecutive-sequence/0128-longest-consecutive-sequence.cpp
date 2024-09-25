class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        unordered_set<int> st;
        for(int i: nums) st.insert(i);
        for(int i: nums){
            if(st.find(i-1)==st.end()){
                int no=i, c=0;
                while(st.find(no)!=st.end()) {c++; no++;}
                maxi= max(maxi, c);
            }
        }
        return maxi;
    }
};
// TC: O(n+n+n) [considering Avg TC of find in set as O(1)], SC: O(n)
// https://youtu.be/qgizvmgeyUM