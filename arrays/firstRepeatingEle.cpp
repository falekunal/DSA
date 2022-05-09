#include <iostream>
#include <unordered_map>
using namespace std;
int firstRepeatingElement(int arr[], int n){
    // unordered_map<int, int> count;
    unordered_map<int, int> count;
    for(int i =0; i<n; i++){
        int currentElement=arr[i];
        count[currentElement]++;
    }
    for(int i=0; i<n; i++){
        int currentElement=arr[i];
        if(count[currentElement]>1){
            return currentElement;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,6,8,88,7};
    int crr[]={0};
    int ind=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]==arr[j]){
    //             crr[ind]=arr[i];
    //             ind++;
                
    //         }
    //     }
    // }
    // cout<<crr[0];
    cout<<firstRepeatingElement(arr,n);
}