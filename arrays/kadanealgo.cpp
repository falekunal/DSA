#include <iostream>
#include <limits.h>
using namespace std;

int maxsub(int arr[],int n){
    int ans=INT_MIN;
    int sum=0;
    for(int i=0; i<n; i++){
        sum=arr[i]+sum;
        ans=max(sum,ans);
        if(sum<0){
            sum=0;
        }
        
    }
    return ans;
}
int main(){
    int n=8;
    int arr[100]={-2,-3,4,-1,-2,1,5,-3};
    
    // int ma= INT_MIN;
    cout<<maxsub(arr,n);
}