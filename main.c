#include <stdio.h>
#include "array_sort.h"
#include "itmojun.h"

// test 

int main()
{
	int nums[] = {5, 3, 4, 1, 2};

	quick_sort(nums, 5, 1);

	for(int i = 0; i < 5; i++)
	{
		printf("%d ", nums[i]);
	}

	printf("\n");

	if(judge_storage_mode())
	{
		printf("Little-Endian!\n");
	}
	else
	{
		printf("Big-Endian!\n");
	}

	return 0;
}
