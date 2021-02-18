#include<stdio.h>
int per(int);
int main()
{
    int n,sum=0,x,r;
    printf("Enter Any Number :\n");
    scanf("%d",&n);
    x=per(n);
    if(x==1)
        printf("%d is a Perfect Number",n);
    else
        printf("%d is not a Perfect Number",n);
    return 0;
}
int per(int a)
{
    int p,i,s=0;
    for(i=1;i<=a/2;i++)
        if(a%i==0)
            s+=i;
    if(s==a)
        p=1;
    else
        p=0;
    return p;
}

