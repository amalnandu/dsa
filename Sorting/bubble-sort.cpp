#include <iostream>
using namespace std;

int main() {

int n;

cout<<"Bubble Sort\n\nEnter the size of the array\n";

cin>>n;
int arr[n];

cout<<"Enter the array elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}




for(int i=0;i<n - 1;i++){
    for(int j=0;j<n-i-1;j++){
        if(  arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
}

cout<<"\nSorted array\n\n";

for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}


    return 0;
}