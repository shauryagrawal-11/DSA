// Problem: Two Sum
// Platform: LeetCode
// Difficulty: Easy
// Time Complexity: O(n^2)
// Space Complexity: O(1)


int* twoSum(int* nums, int n, int target, int* returnSize) {
    *returnSize = 2;
    int *ans = malloc(*returnSize * sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return 0;
}
