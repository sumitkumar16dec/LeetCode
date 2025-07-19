class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                nums[i]= n+1;
            }
        }

        for(int i=0;i<n;i++){
            int ind= abs(nums[i])-1;
            if(ind<n && nums[ind]>0) nums[ind] *= -1;
        }

        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/LLdHZI-qC08