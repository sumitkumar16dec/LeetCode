class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int i=0;i<k;i++){
            minHeap.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            minHeap.push(nums[i]);
            minHeap.pop();
        }
        return minHeap.top();
    }
};
// TC: O(nlogn), SC: O(k)
// https://www.youtube.com/watch?v=_9F2VgZcvdw&t=1189s