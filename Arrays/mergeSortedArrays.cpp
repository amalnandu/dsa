#include<bits/stdc++.h>
using namespace std;



void merge(int arr1[],int n1, int arr2[],int n2 ){
    int left = n1-1;
    int right = 0;

    while(left >=0 && right < n2 ){
        if(arr1[left] >= arr2[right]){
            int temp = arr1[left];
            arr1[left] = arr2[right];
            arr2[right] = temp;
        }

        left--;  right++;
    }

    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);


}

void PrintArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main() {
 
int arr1[]={2,5,6,8,33,4,56,9};
int arr2[]={-6,66,56,78,44,52,3,4,2};

int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);

sort(arr1,arr1+n1);
sort(arr2,arr2+n2);

merge(arr1,n1,arr2,n2);
PrintArray(arr1,n1);
cout<<endl;
PrintArray(arr2,n2);

return 0;
}