#include <iostream>
using namespace std;

// int fixedPoint(int arr[], int n){
//     int ans = -1;
//     for(int i =0; i < n; i++){
//         if(arr[i]==i){
//             ans= i;
//         }
//     }
//     return ans;
// }

int fixedPointBS(int arr[], int n){
    int start = 0, end= n - 1;
    
    while(start <= end){
        int mid  = start + (end - start)/2;
        int midEle = arr[mid];
        if(midEle == mid){
            return mid;
        }
        else if(midEle < mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[]={4,3,2,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<fixedPoint(arr,n);
    cout<<fixedPointBS(arr,n);

}