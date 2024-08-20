class Solution {
private:
    int cntPairs(vector<int> &nums, int low, int mid, int high){
        int cnt=0;
        int left= low, right=mid+1;
        for(int i=left;i<=mid;i++){
            while(right<=high && nums[i]>2LL*nums[right]) right++;
            cnt+= right-(mid+1);
        }
        return cnt;
    }

    void merge(vector<int> &nums, int low, int mid, int high){
        int start= low, end= mid+1;
        vector<int> temp;
        while(start<=mid && end<=high){
            if(nums[start]<=nums[end]){
                temp.push_back(nums[start]);
                start++;
            }
            else{
                temp.push_back(nums[end]);
                end++;
            }
        }

        while(start<=mid) {temp.push_back(nums[start]); start++;}
        while(end<=high) {temp.push_back(nums[end]); end++;}

        for(int i=low;i<=high;i++) nums[i]=temp[i-low];
    }

    int mergeSort(vector<int> &nums, int low, int high){
        int cnt=0;
        if(low>=high) return cnt;
        int mid= (low+high)>>1;
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid+1, high);
        cnt += cntPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return cnt;
    }

public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};
// TC: O(2nlogn), SC: O(n) [temp vector]
// https://youtu.be/0e4bZaP3MDI