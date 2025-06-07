class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;      // O(k)
        for(int i=0;i<nums.size();i++){     // O(n+n)
            if(!dq.empty() && dq.front()<=i-k) dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();
            
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
// TC: O(2n), SC: O(k)
// https://www.youtube.com/watch?v=NwBvene4Imo