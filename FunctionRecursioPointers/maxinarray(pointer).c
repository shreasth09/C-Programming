#include <stdio.h>

int max(int *arr,int n){
    int m=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>m) m=arr[i];
    return m;
}

int main(){
    int arr[]={3,7,2};
    printf("%d", max(arr,3));
}
