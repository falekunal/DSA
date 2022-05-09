#include <iostream>
using namespace std;

void rotate(int arr[], int size){
    int x = arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i]=arr[i-1];    
    }
    arr[0]=x;
}
int main(){
    int n=9; 
    int arr[100]={2,3,4,5,6,66,77,55,44};
    // int r=1;
    rotate(arr,n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
