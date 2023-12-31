#include <stdio.h>
int main() {
    int n,count=0,c=0;
    scanf("%d",&n);
    for(int i=35;i<=n;i++) {
    	count=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0) 
            	count++;
        }
        if(count==9) {
            printf("%d ",i);
            c++;
        }
    }
    printf("
Total=%d",c);
    return 0;
}