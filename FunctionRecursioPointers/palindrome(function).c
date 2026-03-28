#include <stdio.h>

int pal(int n){
    int rev=0,temp=n;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return temp==rev;
}

int main(){
    printf("%d", pal(121));
}