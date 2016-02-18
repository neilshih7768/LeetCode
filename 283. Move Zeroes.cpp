void moveZeroes(int* nums, int numsSize) {
    for(int j = 0; j < numsSize; j++) {
        for(int i = 0; i < numsSize; i++) {
            if(0 == nums[i] && i < numsSize-1) {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
    }
}