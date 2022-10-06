class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        
        // step 1: sort
        sort(nums.begin(), nums.end());                         // O(nlogn)
        
        // step 2: find quadruplets
        for(int i=0;i<n;i++){                                   // O(n)
            for(int j=i+1;j<n;j++){                             // O(n)
                long long target_2 = (long long)(target)-nums[i]-nums[j];
                int front = j+1;
                int back = n-1;
                
                while(front<back){                              // O(n)
                    long long two_sum = nums[front] + nums[back];
                    if(two_sum<target_2) front++;
                    else if(two_sum>target_2) back--;
                    else {
                        vector<int> quadruplet(4,0);
                        quadruplet[0]=nums[i];
                        quadruplet[1]=nums[j];
                        quadruplet[2]=nums[front];
                        quadruplet[3]=nums[back];
                        res.push_back(quadruplet);
                        
                        // handling duplicates for 3rd no.
                        while(front<back && nums[front]==quadruplet[2]) front++;
                        
                        // handling duplicates for 4th no.
                        while(front<back && nums[back]==quadruplet[3]) back--;
                    }
                }
                
                // handling duplicates for 2nd no.
                while(j+1<n && nums[j+1]==nums[j]) j++;
                
                // handling duplicates for 1st no.
                while(i+1<n && nums[i+1]==nums[i]) i++;
            }
        }
        
        return res;
    }
};
// TC: O(nlogn + n^3) , SC: O(1)
// https://youtu.be/xmguZ6GbatA