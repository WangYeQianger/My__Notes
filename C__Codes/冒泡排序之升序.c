#include<stdio.h>
extern void bubble_sort(int arr[],int sz);

  //冒泡排序例子
  int main()
  {
	int arr[] = { 9,5,7,6,2,3,1,4,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i=0;i<sz;i++)
    { 
        printf("%d ", arr[i]);
    }
 return 0;
 }
 
 
 void bubble_sort(int arr[],int sz)   //冒泡排序之升序
{
	for (int i = 0;i < sz - 1;i++)    //比较元素趟数=比较元素个数-1，8 2 3 比较两趟
	{
		int flag = 1;                 //假设该趟是升序
		for (int j = 0;j < sz - 1 - i;j++)  //第0趟需要比较n-1次，第1趟需要比较n-2次，第i趟需要比较 n-1-i次
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;           //交换了，所以该趟不是升序 
			}
		}
		if (flag == 1)              //这趟比较完了，发现确实是升序
		{
			break;                  //不弄了，已经升序了
		}
	}
}
