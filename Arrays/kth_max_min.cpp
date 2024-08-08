#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
int arr[] = {3,44,22,34564,5,0,454,-7};
int n = sizeof(arr) / sizeof(arr[0]);
int k;
cout<<"Enter k";
sort(arr,arr+n);
cin>>k;

cout<<"kth minimm is: "<<arr[k];

 
return 0;
}