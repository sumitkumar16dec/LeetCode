class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> mnHeap;  // SC: O(k)

        for(int i=0;i<k;i++){
            mnHeap.push(nums[i]);
        }

        for(int i=k;i<nums.size();i++){
            if(mnHeap.top() < nums[i]){
                mnHeap.pop();
                mnHeap.push(nums[i]);
            }
        }
        return mnHeap.top();
    }
};
// TC: O(n logn), SC: O(k)
// https://www.youtube.com/watch?v=_9F2VgZcvdw&t=1189s