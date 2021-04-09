 
#include <stdio.h>

// powered by GodTao 2021/4/8

int main()
{
int i,j=10000,k=0;
	
long num;
printf("输入一个不多于5位的正整数:\n");
scanf("%ld",&num);
	
int a[5],c[5];
	a[0]=0;
	printf("每一位数字：\n");

	
	for(i=1;i<6;i++)
	{
		a[i]=num/j;
		c[i]=a[i]-10*a[i-1];
		
	 j/=10;
	 
if(a[i])
{
	k++;

	printf("%d\t",c[i]);
}		
	}
printf("共%d位数\n",k);
	printf("逆序输出：\n");
	for(i=5;i>0;i--)
	{if(a[i])	
	printf("%d",c[i]);
	}
	

   return 0;
}
