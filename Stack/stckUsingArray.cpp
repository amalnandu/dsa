#include <bits/stdc++.h>
using namespace std;
#define size 10

int arr[10];
int top = -1;


void pop(){
    if(top==-1){
        cout<<"Stack underflow";

    }else{
        cout<<"Popped element is: "<<arr[top];
       
        top--;
    }
}

void push(){



    if(top==size-1){
        cout<<"Stack overflow ";
    }else{
int num;
cout<<"Enter the element to push ";
cin>>num;

        top++;
        arr[top] = num;
    }
}

void printArray(){

    if(top==-1){
        cout<<"Array empty";
    }else{
        for(int i=0;i<=top;i++){
        cout<<arr[top]<<"  ";
    }
    }
    cout<<endl;
    
}

int main() {

int val=0;
while(val!=3){

cout<<endl<<"Enter your input  ";
cin>>val;

    switch (val){
        case 1:
                 push();
                 break;
         case 2:
                pop();
                break;
         case 3:
            break;
         case 4:
            printArray();
            break;
         default:
            cout<<"invalid input  ";
            break;
    }

}


return 0;
}