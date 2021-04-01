#include<stdio.h>
int main()
{
	float a, b, c;
	char s;
  begin:
	printf("输入简易表达式（数字a+(-,*,/)数字b：\n");
	scanf("%f%c%f", &a, &s, &b);
	switch (s)
	
	case '+':
{		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	 case '*':
		c = a * b;
		break;
	case '/':
		if (b != 0)
			c = a / b;
		else
		{
			printf("error!\n");
			goto begin;
		}
		break;}
		printf ("%f %s %f = %f\n",a,s,b,c);
	
} 
