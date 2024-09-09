#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> ls;

    // list means doubly linked list
   
ls.push_back(552);
ls.push_front(12);
ls.push_back(150);

int x= ls.front();
cout<<x<<endl;




for(auto it: ls){
    cout<<it<<" ";
}


ls.reverse();
cout<<endl;

for(auto it: ls){
    cout<<it<<" ";
}


ls.sort();
cout<<endl;

for(auto it: ls){
    cout<<it<<" ";
}


ls.remove(552);

list<int> ls2{1,2,3,4,5};

ls2.merge(ls);
cout<<endl;
for(auto it: ls2){
    cout<<it<<" ";
}





return 0;
}