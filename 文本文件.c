 
#include<stdio.h>

int main()
{
	int i;
   char a[5]="China";
	
	for (i=1;i<=5;i++)
		a[i]+=4;
        printf("%s",a);
   return 0;
}
