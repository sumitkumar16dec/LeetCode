class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int c=1;
        string temp=a;
        while(a.size()<b.size()){       // O(m)
            a+=temp;        // O(n)
            c++;
        }

        if(a.find(b) != -1) return c;   // O(n)
        a+=temp; c++;
        if(a.find(b) != -1) return c;
        return -1;
    }
};
// TC: O(m*n), SC: O(1)
// https://youtu.be/j_om6ex1fJw