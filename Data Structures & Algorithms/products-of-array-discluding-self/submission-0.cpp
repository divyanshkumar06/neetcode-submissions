class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> r;

        int prefix = 1;
        int suffix = 1;

        for (int i = 0; i < nums.size(); i++) {
            v1.push_back(prefix);
            prefix *= nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            v2.push_back(suffix);
            suffix *= nums[i];
        }

        reverse(v2.begin(), v2.end());

        for (int i = 0; i < nums.size(); i++) {
            r.push_back(v1[i] * v2[i]);
        }

        return r;
    }
};