#include<bits/stdc++.h>
using namespace std;


void PrintUnion(int arr1[],int n1, int arr2[], int n2 ){
    set<int>unionSet;

    for(int i=0;i<n1;i++){
        unionSet.insert(arr1[i]);
    }

    for(int j=0;j<n2;j++){
        unionSet.insert(arr2[j]);
    }

    cout<<"Union is: "<<endl;
    for(int element: unionSet ){
        cout<<element<<" ";
    }
    cout<<endl;
}

void PrintIntersection(int arr1[],int n1,int arr2[],int n2){
        cout<<endl<<"Intersection is: "<<endl;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            cout<<arr1[i]<<" ";
            i++; j++;
        }
    }
}

int main() {
 
int arr1[]={1,3,-8,5,4,6,14};
int arr2[]={-1,3,-8,5,14,96};
 
int n1=sizeof(arr1) / sizeof(arr1[0]); 
int n2=sizeof(arr2) / sizeof(arr2[0]); 

sort(arr1,arr1+n1);
sort(arr2,arr2+n2);

PrintUnion(arr1,n1,arr2,n2);

PrintIntersection(arr1,n1,arr2,n2);





return 0;
}