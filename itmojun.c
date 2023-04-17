#include "itmojun.h"


/*

函数功能：判断当前系统的存储模式（大端或小端）

参数描述：无

返回值：小端返回 1，大端返回 0

调用示例：

if(judge_storage_mode())
{
	printf("Little-Endian!\n");
}
else
{
	printf("Big-Endian!\n");
}

*/

int judge_storage_mode(void)  // 蛇形命名风格
//int judgeStorageMode  // 驼峰式命名风格
{
	short n = 1;

	return *(char*)&n;
}

