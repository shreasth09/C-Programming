#include <stdio.h>

int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++) s+=arr[i];
    return s;
}

int main(){
    int arr[]={1,2,3};
    printf("%d", sum(arr,3));
}