class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;  // SC: O(n)
        for(int i: nums) st.insert(i);  // O(n)

        int maxi=0;
        for(int i: nums){       // O(2n)
            if(st.find(i-1)==st.end()){
                int no= i, cnt=1;
                while(st.find(no+1)!=st.end()){
                    cnt++;
                    no++;
                }
                maxi= max(maxi, cnt);
            }
        }
        return maxi;
    }
};
// TC: O(n+n+n), SC: O(n)
// https://youtu.be/qgizvmgeyUM