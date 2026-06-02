class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxAvg = -1e9;

        for(int i = 0; i <= n - k; i++) {
            long long sum = 0;

            for(int j = i; j < i + k; j++) {
                sum += nums[j];
            }

            maxAvg = max(maxAvg, (double)sum / k);
        }

        return maxAvg;
    }
};