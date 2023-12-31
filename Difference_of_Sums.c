#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0,temp=0,sq=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
       temp = pow(i,2);
       sum+=temp;
       sq = sq+i;
    }
    int r=0;
    r=abs(sum-(pow(sq,2)));
    printf("%d",r);
    return 0;
}