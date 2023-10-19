class Solution {
public:
    string getPermutation(int n, int k) {
        string ans= "";
        vector<int> num;
        int fact=1;
        for(int i=1;i<n;i++){
            fact= fact * i;
            num.push_back(i);
        }
        num.push_back(n);

        k= k-1;
        while(true){        // O(n)
            ans += to_string(num[k/fact]);
            num.erase(num.begin()+ k/fact); // O(n)

            if(num.size()==0) break;

            k= k%fact;
            fact= fact/num.size();
        }
        return ans;
    }
};
// TC: O(n^2) , SC: O(n)
// https://youtu.be/wT7gcXLYoao