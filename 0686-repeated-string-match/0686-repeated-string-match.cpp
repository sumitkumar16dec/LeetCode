class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int c=1;
        string temp= a;
        while(temp.size()<b.size()){
            c++;
            temp+=a;
        }
        if(temp.find(b)!=-1) return c;

        temp+=a;
        if(temp.find(b)!=-1) return c+1;

        return -1;
    }
};
// TC: O(m*n), SC: O(1)
// https://youtu.be/j_om6ex1fJw