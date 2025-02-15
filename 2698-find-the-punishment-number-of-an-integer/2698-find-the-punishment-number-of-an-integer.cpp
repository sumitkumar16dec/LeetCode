class Solution {
private:
    bool canPartition(string str, int ind, int target){
        if(ind==str.size()) return target==0;

        int sum=0;
        for(int i=ind;i<str.size();i++){
            sum= sum*10 + (str[i]-'0');
            if(sum>target) break;
            if(canPartition(str, i+1, target-sum)) return true;
        }
        return false;
    }

public:
    int punishmentNumber(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            int sq= i*i;
            string sqStr= to_string(sq);
            if(canPartition(sqStr, 0, i)){
                sum+= sq;
            }
        }
        return sum;
    }
};
// TC: exponential
// https://youtu.be/5MKvkVsTpNA