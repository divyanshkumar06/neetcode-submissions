class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int count = 0;
        int maxi = 0;

        unordered_set<char> st;

        while (j < s.length()) {

            if (st.count(s[j]) == 0) {
                st.insert(s[j]);
                j++;
                count++;

                maxi = max(maxi, count);
            } 
            else {
                st.erase(s[i]);
                i++;
                count--;
            }
        }

        return maxi;
    }
};