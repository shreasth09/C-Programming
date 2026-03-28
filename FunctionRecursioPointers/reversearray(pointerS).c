#include <stdio.h>

void rev(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
}

int main(){
    int arr[]={1,2,3};
    rev(arr,3);
    for(int i=0;i<3;i++) printf("%d ",arr[i]);
}