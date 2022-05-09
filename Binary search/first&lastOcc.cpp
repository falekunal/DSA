#include <iostream>
using namespace std;
int firstOcc(int arr[], int n , int target){
    int start=0;
    int end=n-1;
    int mid = start + (end-start)/2;
    int ans= -1;
    while(start <= end){
        int midele = arr[mid];
        if(midele == target){
            ans= mid;
            end= mid-1;
        }
        else if(target<midele){
            end= mid-1;
        }
        else{
            start= mid+1;
        }
        mid = (start + end)/2;

    }
    return ans;
}

int lastOcc(int arr[], int n , int target){
    int start=0, end=n-1;
    int ans= -1;
    int mid = start + (end-start)/2;
    while(start <= end){
        int midele = arr[mid];
        if(midele == target){
            ans= mid;
            start= mid+1;
        }
        else if(target<midele){
            end= mid - 1;
        }
        else{
            start= mid + 1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}


int main(){
    int arr[]={1,5,5,5,5,5,7,9,12,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target =5;
    cout<<firstOcc(arr, n, target)<<" ";
    cout<<lastOcc(arr, n, target);

}
