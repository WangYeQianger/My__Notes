//任意一个大于2的偶数都可以拆解为2个素数之和
#include <stdio.h>
#include <math.h>

int prime(int n)				//定义函数判断素数
{
	if(n==2)
		return 1;
		
	for(int i=2; i<=sqrt(n); i++)	//将i的取值缩小到2~√n,提高代码运行效率
	{
 		if(n%i==0)
 			return 0;
	}
	return 1;
}

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=2; i<=N/2; i++)		//取i<=N/2可有效减少循环次数
	{
 		if(prime(i) && prime(N-i))
 		{
 			printf("%d = %d + %d\n",N,i,N-i);
 			return 0;
 		}
	}
	
	return 0;
}
