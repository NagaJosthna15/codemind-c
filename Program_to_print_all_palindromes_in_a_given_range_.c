#include <stdio.h>
int isPalindrome(int n) {
    int temp=0,rem=0,reversed=0;
    temp=n;
    while(temp!=0) {
        rem = temp%10;
        reversed = reversed*10+rem;
        temp/=10;
    }
    if(reversed==n)
        return n;
    else
        return -1;
}
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int r;
    for(int i=a;i<=b;i++) {
        r=isPalindrome(i);
        if(r!=-1) 
            printf("%d ",r);
    }
    return 0;
}