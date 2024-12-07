class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        
        for(int i: nums){
            s.insert(i);
        }

        int maxi=0;
        for(int i: nums){
            if(s.find(i-1)==s.end()){
                int no=i, c=1;
                while(s.find(no+1)!=s.end()) {c++; no++;}
                maxi= max(maxi, c);
            }
        }
        return maxi;
    }
};
// TC: O(n+n+n) [considering Avg TC of find in set as O(1)], SC: O(n)
// https://youtu.be/qgizvmgeyUM