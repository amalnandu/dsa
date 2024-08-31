#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
int len;
int ht;
cin>>len;
cin>>ht;

for(int i=0;i<ht;i++){
    for(int j=0;j<len;j++){
        if(i==0||i==ht-1){
                cout<<"* ";
        }else if(j==0){
cout<<"* ";
        }else if(j==len-1){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
    }cout<<endl;
}
 
return 0;
}