class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=-1){        // O(n)
            int pos= s.find(part);
            s.erase(pos,part.length()); // O(m)
        }
        return s;
    }
};
// TC: O(n*m), SC: O(1)