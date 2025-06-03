class Solution {
public:
    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }

        priority_queue<p, vector<p>, greater<p>> minHeap;
        for(auto i: mp){
            minHeap.push({i.second, i.first});
            if(minHeap.size()>k) minHeap.pop();
        }

        vector<int> ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/3YFFqwzxosU