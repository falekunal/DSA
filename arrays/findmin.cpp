#include <iostream>
using namespace std;
int minOfArray(int arr[] int n){
    int ans= INT32_MIN;
    for(int i=0; i<n; i++){
        ans=max(ans,arr[0]);
    }
    return ans;
}
int main(){
    int n=10;
    int arr[100]={1,2,3,4,5,6,7,8,11,22};
    cout<<minOfArray(arr,n;);   
}   