class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;

        // Store non-zero elements
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Add zeros at the end
        while(temp.size() < nums.size()) {
            temp.push_back(0);
        }

        // Copy back to original array
        nums = temp;
    }
};