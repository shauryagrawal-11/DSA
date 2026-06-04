// LeetCode 26 - Remove Duplicates from Sorted Array

int removeDuplicates(int* nums, int n) {
    if (n == 0) 
    return 0;

    int i = 0;
    for (int j = 1; j < n; j++) {
        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
