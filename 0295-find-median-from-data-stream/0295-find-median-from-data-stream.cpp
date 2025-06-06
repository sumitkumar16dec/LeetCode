class MedianFinder {
public:
    priority_queue<int> minHeap;
    priority_queue<int, vector<int>, greater<int>> maxHeap;

    MedianFinder() {
    }
    
    void addNum(int num) {
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if(maxHeap.size()>minHeap.size()) return maxHeap.top();
        else return (minHeap.top()+maxHeap.top())/2.0;
    }
};
// TC: O(logn), SC: O(n)
// Leetcode 3rd most voted solution

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */