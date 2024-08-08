#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[],int n,int k){

    sort(arr,arr+n);
    int diff=arr[n-1]-arr[0];

    int maximum, minimum;
    for(int i=1;i<n;i++){
        if(arr[i-k]<0){
            continue;
        }else{
            maximum = max(arr[i-1]+k,arr[n-1]-k);
            minimum = min(arr[0]+k,arr[i]-k);
            diff = min(diff, maximum - minimum);
        }

    }

    return diff;
}


int main() {
int arr[] = {1,45,-7,99,43,4,11,23}; 
int n = sizeof(arr)/ sizeof(arr[0]);
int k=3;

cout<<" Minimum height is: ";
int ans =getMinDiff(arr,n,k);
cout<<ans;

return 0;
}