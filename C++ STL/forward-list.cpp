#include <bits/stdc++.h>
using namespace std;

int main() {

    forward_list<int> ls1,ls2,ls3;
    ls1.assign(5,77);
    ls2.assign({4,55,67});



        // Methods:

        //     push front
        //     pop front
        //     assign
        //     insert after
        //     erase after
        //     emplace after
        //     splice after
        //     max size
        //     resize
        //     unique
        //     reverse


    for(auto it:ls1){
        cout<<it<<"  ";
    }


    cout<<endl;

    for(auto it:ls2){
        cout<<it<<"  ";
    }


    for(int& a: ls2){
        cout<<a<<" ";

    }

cout<<endl;


   ls1.unique();  
//    remove duplct

    for(auto it:ls1){
        cout<<it<<"  ";
    }

cout<<"Now   ";    ls2.resize(67); 

cout<<"  --"<<ls2.max_size();


return 0;
}