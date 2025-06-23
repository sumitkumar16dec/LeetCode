class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(int i: nums){
            minHeap.push(i);
            if(minHeap.size()>k) minHeap.pop();
        }
        this->k= k;
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size()>k) minHeap.pop();
        return minHeap.top();
    }
};
// TC: O(nlogk), SC: O(k)
// https://youtu.be/0tFmP1Eiilg

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */