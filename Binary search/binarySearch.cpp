#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n , int target){
    int start, end;
    start=0, end=n-1;
    int mid = start+(end-start/2);
    // int mid = (start+end)/2;
    while(start<=end){
        int midele=arr[mid];
        if(midele==target){
            return true;
        }
        if(target<midele){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = (start+end)/2;

    }
    return false;
}

int main(){
    int arr[]={1,5,7,9,12,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target =11;
    if(binarySearch(arr, n, target)){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }

}