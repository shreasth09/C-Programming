#include <stdio.h>

int main(){
    int n,sq,sum=0;
    scanf("%d",&n);

    sq = n*n;

    while(sq){
        sum += sq%10;
        sq/=10;
    }

    if(sum==n) printf("Neon Number");
    else printf("Not Neon");
}