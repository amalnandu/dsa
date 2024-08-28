#include<bits/stdc++.h>
using namespace std;


bool checkPrime(int n){
    if(n==1){
        return true;
    }else if(n==2){
        return true;
    }else{
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                return false;
            }
        }


        return true;
    }
}


int main() {
 cout<<"Enter the number";
int n;
cin>>n;

bool ans=checkPrime(n);
cout<<ans;
 
return 0;
}