class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;       // SC: O(n)
        for(int i: nums){           // O(n)
            s.insert(i);
        }

        int maxi=0;
        for(int i: s){              // O(n+n)
            if(s.find(i-1)==s.end()){
                int c=1, no=i;
                while(s.find(no+1)!=s.end()) {no++; c++;}
                maxi= max(maxi, c);
            }
        }
        return maxi;
    }
};
// TC: O(n+n+n) [considering Avg TC of find in set as O(1)], SC: O(n)
// https://youtu.be/qgizvmgeyUM