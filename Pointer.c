#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = arr;
	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p += 1;
	}*/
	/*for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p += 2;
	}*/
	int* p = &arr[9];//!!!!注意指针初始化位置
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p -= 2;
	}
	return 0;
}