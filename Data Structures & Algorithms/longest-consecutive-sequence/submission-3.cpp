class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int length = 1;
        int count = 0;
        int last_smaller = INT_MIN;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] - 1 == last_smaller) {
                count++;
                last_smaller = nums[i];
            }
            else if (nums[i] != last_smaller) {
                count = 1;
                last_smaller = nums[i];
            }

            length = max(length, count);
        }

        return length;
    }
};