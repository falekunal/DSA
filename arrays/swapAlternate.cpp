// Reversing an given array;

#include <iostream>
using namespace std;

// reversing array
void reverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start+=2; //adding two as we need to skip alternate index
        end-=2; //subtracting two as we need to skip alternate index
        
    }
}

// printing array
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[100]={};
    cout<<"Enter the element of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // revesing array arr
    reverseArray(arr,n);
    // now array is reversed, for printing the array we need to call another function
    printArray(arr, n);
}


// 2nd apporach
#include <iostream>
using namespace std; 
void swapAlternate(int arr[], int size){
    for(int i=0; i+1<size; i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int n=10;
    int arr[100]={1,2,3,4,5,6,7,8,9,0};
    swapAlternate(arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}