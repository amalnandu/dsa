#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
int n=7
;

for(int i=0;i<n;i++){

for(int k=n-1;k>=i;k--){
    cout<<" ";
}

    for(int j=0;j<n;j++){
            cout<<"*";
    }cout<<endl;
}
 
return 0;
}