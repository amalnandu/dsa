#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    int temp;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}


void PrintArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
 
int array[] = {1,3,55,67,890,434};
int n = sizeof(array)/sizeof(array[0]);

ReverseArray(array,n);
PrintArray(array,n);

return 0;
}