class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int maxi=0;
        for(int i: nums){
            s.insert(i);
        }

        for(int i: s){
            if(s.find(i-1)==s.end()){
                int c=1, no=i;
                while(s.find(no+1)!=s.end()) {c++; no++;}
                maxi= max(maxi, c);
            }
        }
        return maxi;
    }
};
// TC: O(n+n+n) [considering Avg TC of find in set as O(1)], SC: O(n)
// https://youtu.be/qgizvmgeyUM