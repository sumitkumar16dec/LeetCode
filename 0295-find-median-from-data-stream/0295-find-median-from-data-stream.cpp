class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    MedianFinder() {
        while(!maxHeap.empty()) maxHeap.pop();
        while(!minHeap.empty()) minHeap.pop();
    }
    
    void addNum(int num) {
        minHeap.push(num);
        maxHeap.push(minHeap.top());
        minHeap.pop();

        if(maxHeap.size()>minHeap.size()){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
    }
    
    double findMedian() {
        if(minHeap.size()>maxHeap.size()) return minHeap.top();
        else return (double)(maxHeap.top()+minHeap.top())/2.0;
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