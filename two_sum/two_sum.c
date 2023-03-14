/******************************************
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
**********************************************/
#include<stdio.h>
#include<stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	// lay tung so trong mang ra roi so sanh voi target, neu nho hon thi thuc hien phep tru va so sanh voi cac so trong mang
	int num_compare;
	int *p_return ;
	p_return = malloc(2*sizeof(int));
	for(int i = 0; i < numsSize; i++)
	{
		if(*(nums + i) < target)
		{
			printf("enter set num_compare\n");
			num_compare = target - *(nums + i);
		}
		if(num_compare != *(nums + i))
		{
			for(int j = 0; j < numsSize; j ++)
			{
				if(num_compare == *(nums + j))
				{
					*p_return = num_compare;
					*(p_return + 1) = *(nums + i);
					printf("check---- *(num + i) = %d,*(nums + j) = %d , num_compare = %d\n",*(nums+ i), *(nums + j), num_compare);
					return p_return;
				}
			}
		}

	}

return p_return;

}

int main()
{
	int numsSize;
	int *p_arr;
	int target;
	int *p_ans;
	int returnSize;

	printf("Nhap so phan tu cua mang");
	scanf("%d", &numsSize);
	p_arr = malloc(numsSize * sizeof(int));
	for(int i = 0; i < numsSize; i ++)
	{
		printf("Nhap phan tu %d cua mang : \n",i);
		scanf("%d", p_arr + i);
	}
	printf("Nhap returnSize\n");
	scanf("%d",&returnSize);
	printf("Nhap target : \n");
	scanf("%d", &target);
	p_ans = malloc(returnSize * sizeof(int));
	p_ans = twoSum(p_arr, numsSize, target, &returnSize);
	for(int i = 0; i < 2; i ++)
	{
		printf(" %d", *(p_ans + i));
	}
	return 0;
}