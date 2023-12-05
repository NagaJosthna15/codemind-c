#include<stdio.h>
int main()
{
	int i,N;
	float sum;
	scanf("%d",&N);
	sum=0.0f;
	for(i=1;i<=N;i++)
		sum = sum + ((float)1/(float)i);
	printf("%.2f
",sum);
	
	return 0;
}
