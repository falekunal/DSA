#include <iostream>

using namespace std;
int getMajorityElement(int arr[], int n){
    for(int i=0; i<n; i++){
        int majority=1;
        for(int j=i+1;  j<n; j++){
            if(arr[i]==arr[j]){
                majority++;
            }
        }
        if(majority > n/2){
            return arr[i];
        }
    }
    return 0;
    
}

int main(){
    int arr[]={4,3,4,4,5,4,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getMajorityElement(arr,n);
}