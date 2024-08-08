#include<bits/stdc++.h>
using namespace std;


void Sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
}

void PrintArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
 
int arr[]={1,44,3,5,78,45,-89,34};
int n= sizeof(arr) / sizeof(arr[0]);

Sort(arr,n);
PrintArray(arr,n);
 
return 0;
}