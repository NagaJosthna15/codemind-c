#include<stdio.h>
#include<math.h>
int Length(int no)
{
    int c=no;
    int l=0;
    while(c!=0)
    {
        l++;
        c/=10;
    }
    return l;
    
}
int D(int no,int l)
{
    int sum=0;
    int c=no;
    int lD;
    while(c>0)
    {
        lD=c%10;
        sum +=(int)pow(lD,l);
        c/=10;
        l--;
        
    }
    return sum==no;
}
int main()
{
    int no;
    scanf("%d",&no);
    int l=Length(no);
    if(D(no,l)==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}