class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        int fact=1;
        for(int i=1;i<n;i++){
            fact *= i;
            nums.push_back(i);
        }
        nums.push_back(n);

        k= k-1;
        string s;
        while(true){        // O(n)
            s+= to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);    // O(n)

            if(nums.size()==0) break;

            k= k%fact;
            fact= fact/nums.size();
        }
        return s;
    }
};
// TC: O(n^2) , SC: O(n)
// https://youtu.be/wT7gcXLYoao