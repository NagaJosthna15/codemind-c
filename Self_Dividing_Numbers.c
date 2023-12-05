#include<stdio.h>

int self_div(int);

int main()

{

	int a,b,i;

	scanf("%d%d",&a,&b);//1  22

	for(i=a;i<=b;i++)//i=2 1<=22

	{

		if(self_div(i))//self_div(2)//function call

	   { 

		printf("%d ",i);//1 2

	   }

	}


}

int self_div(int n)

{

	int r,flag=1,t=n;//t=120 flag=0 

	while(n!=0)//120

	{

		r=n%10;//120%10=0

		if(r==0 || t%r!=0)

		{

			flag=0;

			break;

	   }

		n=n/10;

	}

	if(flag==0)

	{

		return 0;

	}

	else

	{

		return 1;

	}

}