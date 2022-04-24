// Reversing an given array;

#include <iostream>
using namespace std;

// reversing array
void reverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
        
    }
}

// printing array
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n =5;
    int arr[10]={1,2,3,4,5};
    // revesing array arr
    reverseArray(arr,n);
    // now array is reversed, for printing the array we need to call another function
    printArray(arr, n);

}
