#include<bits/stdc++.h>
using namespace std;
 
void PrintArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Rotate(int arr[],int n){
    int first = arr[0];

    for(int i=0;i<n-1;i++){
    arr[i]= arr[i+1];
}

arr[n-1]=first;
}


int main() {
 
int arr[]= {1,33,4,5,6,7,88,45,-3,2,445};
int n=sizeof(arr) / sizeof(arr[0]);


PrintArray(arr,n);
cout<<endl;
Rotate(arr,n);
PrintArray(arr,n);
 
return 0;
}