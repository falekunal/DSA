#include <iostream>
using namespace std;

int main(){
    int arr[100]={1, 12, 10, 3, 14, 10, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]<=k){
            count++;
        }
    }
    int bad=0;
    for(int i=0; i<count; i++){
        
        if(arr[i]>k){
            bad++;
        }
    }
    int ans=bad;
    int j=n-1;
    for(int i=0,j=count; j<n; i++,j++){
        if(arr[i]>k){
            bad--;
        }
        if(arr[j]>k){
            bad++;
        }
        ans=min(ans,bad);        
    }
    cout<<ans;



}


