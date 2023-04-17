#include "array_sort.h"



/*
order 为 0 表示升序，1 表示降序
*/
void bubble_sort(int nums[], int n, int order)
{
	// 冒泡排序算法实现

	int i, j, tmp;
	int flag;

	for(i = 0; i < n - 1; i++)
	{
			flag = 1;

			for(j = 0; j < n -i -1; j++)
			{
					if(order ? (nums[j] < nums[j + 1]) : (nums[j] > nums[j + 1]))
					{
							tmp = nums[j];
							nums[j] = nums[j + 1];
							nums[j + 1] = tmp;

							flag = 0;
					}
			}

			if(flag) break;
	}
}


void select_sort(int nums[], int n, int order)
{	
	// 选择排序算法实现

	int i, j, k, tmp;

	for(i = 0; i < n - 1; i++)
	{
			k = i;

			for(j = i + 1; j < n; j++)
			{
					if(order ? (nums[j] > nums[k]) : (nums[j] < nums[k]))
						k = j;
			}

			if(k != i)
			{
				tmp = nums[k];
				nums[k] = nums[i];
				nums[i] = tmp;
			}
	}
}


void insert_sort(int nums[], int n, int order)
{
	// 插入排序算法实现

	/*
	int i, j, k;

	for(i = 1; i < n; i++)
	{
		k = nums[i];

		for(j = i - 1; j >= 0; j--)
		{
			if(order ? (nums[j] >= k) : (nums[j] <= k)) break;

			nums[j + 1] = nums[j];
		}

		nums[j + 1] = k;
	}
	*/

	int i = 1, j, k;

	while(i < n)
	{
		j = i - 1;
		k = nums[i];

		while(j >= 0 && (order ? (nums[j] < k) : (nums[j] > k)))
		{
			nums[j + 1] = nums[j];
			j--;
		}

		nums[j + 1]  = k;
		
		i++;
	}
}

	
void quick_sort(int nums[], int n, int order)
{
	// 快速排序算法实现
	int i, j, k;

	i = 0;
	j = n - 1;
	k = nums[0];

	if(n < 2) return;  // 递归结束条件

	while(i < j)
	{
		while(i < j && (order ? (nums[j] <= k) : (nums[j] >= k)))
			j--;

		nums[i] = nums[j];

		while(i < j && (order ? (nums[i] >= k) : (nums[i] <= k)))
			i++;

		nums[j] = nums[i];
	}
	
	nums[i] = k;

	quick_sort(nums, i, order); // 对左边的部分继续进行快速排序处理
	quick_sort(nums + i + 1, n - i - 1, order); // 对右边的部分继续进行快速排序处理
}

