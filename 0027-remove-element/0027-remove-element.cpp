class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x = 0;
        int y = nums.size();

        for (int i = 0; i < y; i++) {
            if (nums[i] != val) {
                nums[x] = nums[i];
                x++;
            }
        }

        return x;
    }
};