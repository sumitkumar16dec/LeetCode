class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp= a;
        int c=1;
        while(temp.size()<b.size()){    // O(m)
            temp+=a;                    // O(n)
            c++;
        }
        if(temp.find(b)!=-1) return c;  // O(n)

        temp+=a;
        c++;
        if(temp.find(b)!=-1) return c;
        else return -1;
    }
};
// TC: O(m*n), SC: O(1)
// https://youtu.be/j_om6ex1fJw