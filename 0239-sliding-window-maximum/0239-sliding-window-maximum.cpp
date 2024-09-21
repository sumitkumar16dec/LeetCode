class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;      // SC: O(k)
        for(int i=0;i<nums.size();i++){     // O(n+n)
            // out of bound wale ko hatana
            if(!dq.empty() && dq.front()==(i-k)) dq.pop_front();

            // lesser than/ equal to elements ho hatana
            while(!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();

            dq.push_back(i);

            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};
// TC: O(n+n), SC: O(k)
// https://youtu.be/CZQGRp93K4k