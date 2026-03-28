#include <stdio.h>

int arm(int n){
    int sum=0,temp=n;
    while(n){
        int d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    return sum==temp;
}

int main(){
    printf("%d", arm(153));
}