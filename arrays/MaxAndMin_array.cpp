#include <iostream>
using namespace std; 

int maxOfArray(int arr[], int size){
    int max= INT32_MIN;
    for(int i =0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minOfArray(int arr[], int size){
    int min = INT32_MAX;
    for(int i =0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int brr[100];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin >>brr[i];
    }
    cout<<"maximum value in an array is "<<maxOfArray(brr, n)<<endl;
    cout<<"minimum value in an array is "<<minOfArray(brr, n)<<endl;
}