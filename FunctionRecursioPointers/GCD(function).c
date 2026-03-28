#include <stdio.h>

int gcd(int a,int b){
    while(b){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main(){
    printf("%d", gcd(12,18));
}