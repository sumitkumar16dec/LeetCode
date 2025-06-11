class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;        // SC: O(n-k)
        int n= nums.size();
        deque<int> dq;          // SC: O(k)
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()<=i-k) dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
// TC: O(2n) (n for for-loop & n for push-pop for n-elements), SC: O(n)
// https://www.youtube.com/watch?v=NwBvene4Imo