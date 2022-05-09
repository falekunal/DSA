#include <iostream>
using namespace std;
int main(){
    int n=11;
    int arr[100]= {16,-2,3,-5,4,-55,12,233,-54,-543,64};
    int end=n-1;
    int start=0;
    int i=0;
    int brr[100];
    while(start<=end){
        if(arr[i]<0){
            brr[start]=arr[i];
            start++;

        }
        else{
            brr[end]=arr[i];
            end--;
        }
        i++;
    }
    // printing raw/given array arr;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // printing final array brr;
    cout<<endl;
    for(int i =0; i<n; i++){
        cout<<brr[i]<<" ";
    }
}