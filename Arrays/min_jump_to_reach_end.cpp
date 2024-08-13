#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump=1;
        int i=0;
        int step=arr[0];
        int maxR = i + arr[i];
        
        
        if(n==1){
            return 0;
        }else if(arr[0]==0){
            return -1;
        }else {
            for(i=1;i<n;i++){
                if(i==n-1){
                    return jump;
                } 
                
                
                maxR= max(maxR,i+arr[i]);
                step--;
                if(step==0){
                    jump++;
                    if(i>=maxR){
                        return -1;
                    }
                    step = maxR-i;
                }
            }
        }
        
        
      return jump;  
    }
};



int main() {
 
int arr[]={1,2,3,6,8,4,5};
int n= sizeof(arr)/sizeof(arr[0]);

Solution solution;
cout<<solution.minJumps(arr,n);

 
return 0;
}