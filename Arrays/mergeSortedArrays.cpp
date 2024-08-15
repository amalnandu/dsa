#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
int arr1[]={2,5,6,8,33,4,56,9};
int arr2[]={-6,66,56,78,44,52,3,4,2};

int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);

sort(arr1,arr1+n1);
sort(arr2,arr2+n2);



return 0;
}