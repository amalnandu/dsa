#include<bits/stdc++.h>
using namespace std;


int  Min_in_Array(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;
}

int  Max_in_Array(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}



int main() {
 
int arr[] = {3,44,22,34564,5,0,454,-7};
int n = sizeof(arr) / sizeof(arr[0]);
int min= Min_in_Array(arr,n);
int max = Max_in_Array(arr,n);
cout<<"Minimum element is: "<< min <<endl;
cout<<"Maximum element is: "<< max <<endl;
 
return 0;
}