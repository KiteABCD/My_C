#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//删除数组中的重复项
//int main()
//{
//	int nums[8] = { 0 };
//	int right = 0;
//	int left = 0;
//	int i = 0;
//	int len = sizeof(nums) / sizeof(nums[0]);
//	for (i = 0; i < len; i++)
//	{
//		scanf("%d", &nums[i]);
//	}
//	while (right < len)
//	{
//		if (nums[left] != nums[right])
//		{
//			nums[++left] = nums[right];
//		}
//		right++;
//	}
//	return 0;
//}
//int maxProfit(int* prices, int pricesSize) {
//	assert(prices);
//	int i = 0;
//	int MaxPrices = 0;
//	for (i = 0; i < pricesSize - 1; i++)
//	{
//		if (prices[i] < prices[i + 1])
//		{
//			MaxPrices += (prices[i + 1] - prices[i]);
//		}
//	}
//	return MaxPrices;
//}
//#include<assert.h>
//
//int main()
//{
//	int nums[7] = { 1,2,3,4,5,6,7 };
//	int len = sizeof(nums) / sizeof(nums[0]);
//	int i = 0;
//	int right = len-1;
//	int k = 3;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = nums[right];
//		int j = 0;
//		for (j = right; j > 0; j--)
//		{
//			nums[j] = nums[j - 1];
//		}
//		nums[0] = tmp;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", nums[i]);
//	}
//	return 0;
//}

//#include<assert.h>
//void rotate(int* nums, int numsSize, int k) {
//	assert(nums);
//	if (k > numsSize)
//	{
//		k %= numsSize;
//	}
//	int* num = (int*)malloc(numsSize * sizeof(int));
//	int i = 0;
//	int j = 0;
//	if (num == NULL)
//	{
//		return;
//	}
//	else
//	{
//		for (i = 0; i < numsSize; i++)
//		{
//			if (k)
//			{
//				num[i] = nums[numsSize - k];
//				k--;
//			}
//			else
//			{
//				num[i] = nums[j];
//				j++;
//			}
//		}
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	free(num);
//	num = NULL;
//}
//
//int main()
//{
//	int nums[] = {1,2};
//	int k = 5;
//	int len = sizeof(nums) / sizeof(nums[0]);
//	rotate(nums, len, k);
//	return 0;
//}
//#include<assert.h>
//void rotate(int* nums, int numsSize, int k) {
//	assert(nums);
//	if (k > numsSize)
//	{
//		k %= numsSize;
//	}
//	
//}
//
//int main()
//{
//	int nums[] = {1,2,3,4,5,6,7};
//	int k = 3;
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < (numsSize - k) / 2; i++)
//	{
//		int tmp = nums[i];
//		nums[i] = nums[numsSize - k - 1 - i];
//		nums[numsSize - 1 - i] = tmp;
//	}
//	i = numsSize - k;
//	for (j = 0; j < k / 2; j++)
//	{
//		int tmp = nums[i];
//		nums[i] = nums[numsSize - j - 1];
//		nums[numsSize - j - 1] = tmp;
//		i++;
//	}
//	for (i = 0; i < numsSize / 2; i++)
//	{
//		int tmp = nums[i];
//		nums[i] = nums[numsSize - i - 1];
//		nums[numsSize - i - 1] = tmp;
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}