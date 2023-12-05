#include<stdio.h>
int main()
{
	int first=0,second=1,third,i,n,flag=0;
	scanf("%d",&n);//13
	third=first+second;//1
	while(third<=n)//5<=13
	{
		if(third==n)//5==13
		{
			flag=1;
			break;
		}
		//13
		first=second;//
		second=third;//5
		third=first+second;
	}
	if(flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}