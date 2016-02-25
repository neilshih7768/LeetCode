int singleNumber(int* nums, int numsSize) {
	int iResult = 0
	for(int i = 0; i < numsSize; i++) {
		iResult ^= nums[i];
	}
    return iResult;
}