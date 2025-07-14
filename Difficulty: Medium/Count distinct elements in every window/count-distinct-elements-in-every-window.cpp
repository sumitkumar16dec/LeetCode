class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int n= arr.size();
        vector<int> res;
        unordered_map<int,int> freq;
        for(int i=0;i<k;i++){
            freq[arr[i]]++;
        }
        res.push_back(freq.size());
        
        for(int i=k;i<n;i++){
            freq[arr[i]]++;
            freq[arr[i-k]]--;
            
            if(freq[arr[i-k]]==0) freq.erase(arr[i-k]);
            res.push_back(freq.size());
        }
        return res;
    }
};
// O(n), SC: O(k)
// gfg article video