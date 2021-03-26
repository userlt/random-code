#include<stdio.h>
void main()
{
    int a,b,c,tmp;
    printf("输入a,b,c的值：（空格隔开）\n");
    scanf("%d%d%d",&a,&b,&c);
if(a>b)
{;}
    else
    {
    tmp=a; a=b; b=tmp;
    }
    if(a>c)
    {;}
        else
        {
            tmp=a; a=c; c=tmp;
        }
        if(b>c)
            {;}
            else
            {
                tmp=b; b=c; c=tmp;
            }
        printf("%d \n%d \n%d \n",a,b,c);
}
