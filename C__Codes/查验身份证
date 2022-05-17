#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char c[n][18];
    char g=getchar();
    int j,i;
    for(j=0;j<n;j++)
    {
    	gets(c[j]);
	}	
	char a[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
	int m=1;
	for(j=0;j<n;j++)
	{    
	    int s=0;
	    for(i=0;i<17;i++)
	    {
	    	if(c[j][i]=='X')
	    	{
	    		int h=10;
	    		s=s+h*b[i];
	    		continue;
			}		
			s=s+((int)c[j][i]-48)*b[i];	    	
		}
		int t=s%11;		
		char f=a[t];
		int flag=0;		
		if(f==c[j][17])
		{
			flag=1;
		}
		if(flag==0)
		{
			int k;
			for(k=0;k<18;k++)
			{
			printf("%c",c[j][k]);
			}
			printf("\n");
		}
		m=m*flag;
	}
	if(m==1)
	{
		printf("All passed\n");
	}	  
   return 0;
} 
