#include<bits/stdc++.h>
using namespace std;


int maxSumSubarray(int arr[],int n){
    int current_sum = arr[0];
    int max_sum = INT_MIN;

    for(int i=1;i<n;i++){
        current_sum = max(arr[i],current_sum + arr[i]);
        max_sum = max(max_sum,current_sum);
    }

    return max_sum;

}

int main() {
 
int arr[] = {1,3,5,77,-4,6,-32,-89};
int n= sizeof(arr)/sizeof(arr[0]);
 
cout<<"Maximum sum of subarray is:"<<endl;
cout<<maxSumSubarray(arr,n);




return 0;
}