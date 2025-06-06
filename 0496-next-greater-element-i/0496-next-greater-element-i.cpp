class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> nge;
        int n= nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(st.empty()) nge[nums2[i]]=-1;
            else nge[nums2[i]]=st.top();
            st.push(nums2[i]);
        }

        vector<int> ans;
        for(int i: nums1){
            ans.push_back(nge[i]);
        }
        return ans;
    }
};
// TC: O(2n), SC: O(2n)
// https://youtu.be/e7XQLtOQM3I