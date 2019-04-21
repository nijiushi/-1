#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define  size sizeof(arr)/sizeof(arr[0])
int main()
{
	int i = 0;
	int tmp = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int j = size - 1;
	while (arr[i++] % 2 && i <size);
	while (arr[j--] % 2 == 0 && j >= 0);//可能出现全为奇数或偶数的极端情况
	while (i <= j)
	{
		tmp = arr[i - 1];
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
		while (arr[i++] % 2);
		while (arr[j--] % 2 == 0);
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}


//第二种
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void reverse_shu(int a[], int left, int right)
{
	int tmp = 0;
	while (left <= right)
	{
		if (a[left] % 2 == 1 && a[right] % 2 == 0)
		{
			left++;
			right--;
		}
		else if (a[left] % 2 == 1 && a[right] % 2 == 1)
		{
			left++;
		}
		else if (a[left] % 2 == 0 && a[right] % 2 == 1)
		{
			int tmp = a[left];
			a[left] = a[right];
			a[right] = tmp;
			left++;
			right--;
		}
		else if (a[left] % 2 == 0 && a[right] % 2 == 0)
		{
			right--;
		}
	}
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int left = 0;
	int right = sizeof(a) / sizeof(a[0]) - 1;
	reverse_shu(a, left, right);
	for (int i = 0; i <= sizeof(a) / sizeof(a[i]) - 1; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
	system("pause");
	return 0;
}
