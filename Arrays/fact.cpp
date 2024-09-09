#include <bits/stdc++.h>
using namespace std;

 int factUsingRecursion( int num){
   int fact;
    if(num ==1 || num==0){
        return 1;
    }else{
        fact = num * factUsingRecursion( num -1);
        return fact;

    }
}



int main() {

int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"Factorial is: ";
cout<<factUsingRecursion(num);



return 0;
}