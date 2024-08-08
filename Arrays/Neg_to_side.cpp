#include<bits/stdc++.h>
using namespace std;


void PrintArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
 
int arr[] = {-45,-5,-3,-6,77,90,-8,0,567,32,1};
int n = sizeof(arr) / sizeof(arr[0]);
int neg_length=0;
int i=0,j=0,k=0;

vector<int> neg,pos;
for(;i<n;i++){
    if(arr[i]<0){
        neg.push_back(arr[i]);
        j++;
 
    }else{
        pos.push_back(arr[i]);
        k++;
    }
}
i=0; j=0; k=0;
while(j<neg.size()){
    arr[i]=neg[j];
    i++; j++;
}

while(k<pos.size()){
    arr[i]=pos[k];
    i++; k++;
}

PrintArray(arr,n);

return 0;
}