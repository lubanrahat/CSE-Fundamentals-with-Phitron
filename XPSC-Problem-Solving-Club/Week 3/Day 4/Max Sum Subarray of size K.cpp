#include <vector>
#include <algorithm>
#include <climits>  

class Solution {
public:
    long long maximumSumSubarray(int K, const std::vector<int>& arr) {
        if (K > arr.size()) {
            return 0;
        }
        long long maxSum = LLONG_MIN;

        long long windowSum = 0;
        for (int i = 0; i < K; i++) {
            windowSum += arr[i];
        }
        maxSum = windowSum;

        for (int i = K; i < arr.size(); i++) {
            windowSum += arr[i] - arr[i - K];
            if (windowSum > maxSum) {
                maxSum = windowSum;
            }
        }
        return maxSum;
    }
};