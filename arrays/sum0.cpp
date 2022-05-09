#include <iostream>
using namespace std;

int main(){
    int arr[]={1,1,-2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if((arr[i]+arr[j])==0){
                cout<<"yes";
            }
        }
    }
}
