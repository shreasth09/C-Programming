#include <stdio.h>

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int main(){
    int n,temp,sum=0;
    scanf("%d",&n);
    temp=n;

    while(n){
        sum += fact(n%10);
        n/=10;
    }

    if(sum==temp) printf("Strong Number");
    else printf("Not Strong");
}