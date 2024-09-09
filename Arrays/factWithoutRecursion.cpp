#include <bits/stdc++.h>
using namespace std;

int factWithoutRecur(int num){
    int fact=1;
    if(num==1 || num==0){
        return 1;
    }else{
        while(num!=1){
        fact = fact*num;
        num--; 
    }
    }

    return fact;
    
}


int main() {

int num;
cin>>num;

cout<<factWithoutRecur(num);

return 0;
}