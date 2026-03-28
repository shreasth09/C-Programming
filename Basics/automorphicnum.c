#include <stdio.h>

int main(){
    int n,sq;
    scanf("%d",&n);

    sq = n*n;

    if(sq%10 == n%10) printf("Automorphic");
    else printf("Not Automorphic");
}