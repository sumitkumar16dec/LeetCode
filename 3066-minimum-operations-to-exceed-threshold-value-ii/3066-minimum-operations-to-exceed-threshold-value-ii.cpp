class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> minHeap(nums.begin(), nums.end());     // SC: O(n)

        int cnt=0;
        while(!minHeap.empty()){    // O(n)
            long long min1= minHeap.top();
            minHeap.pop();          // O(logn)

            if(min1>=k) break;
            long long min2= minHeap.top();
            minHeap.pop();

            minHeap.push(2*min(min1,min2)+max(min1,min2));
            cnt++;
        }
        return cnt;
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/TPYCNzPnLbU?si=-QHpYlYCq4R-zN3R