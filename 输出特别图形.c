#include <stdio.h>
#define z 42 
#define q 32 
int a,b,c=7,d,e=7;
int main()
{
	for(a=3;a>0;a--)
	{	
        c-=2;
        b=c;
      side();
        middle();
		side();
        printf("\n");
    }
			for (;e>0;e--)//最后一行不在循环范围内
				printf("%c",z);
   return 0;
}
int side()//两边星号
{
    	d=a;
		for(;d<4;d++)
		{
			printf("%c",z);
		}
}
int middle()//中间的空格
{
for(;b>0;b--)
        {
           printf("%c",q);
		}
}
