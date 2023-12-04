#include<stdio.h>
int main()
{
    int i,j,r=0;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("
");
    }
}