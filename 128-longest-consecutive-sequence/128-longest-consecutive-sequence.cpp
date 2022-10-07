class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;                       // SC: O(n)
        int longestCount=0;
        for(int i=0;i<nums.size();i++){             // O(n)
            s.insert(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){             // O(n+n)
            if(s.count(nums[i]-1)==0){
                int currentNum=nums[i];
                int currentCount=1;
                
                while(s.count(currentNum+1)==1){
                    currentCount++;
                    currentNum++;
                }
                longestCount = max(longestCount, currentCount);
            }
        }
        
        return longestCount;
    }
};
// TC: O(n+n+n) , SC: O(n)
// https://youtu.be/qgizvmgeyUM