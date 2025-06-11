class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> nge;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i] >= st.top()) st.pop();
            nge[nums2[i]] = st.empty() ? -1 : st.top();

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