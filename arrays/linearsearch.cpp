// following code is a linear seaching of element in an array;
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size,int target){
        for(int i=0; i<size; i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main(){
    int n=5;
    int arr[10]={1,2,3,4,5};
    int target;
    cout<<"Enter number to find"<<endl;
    cin>>target;
    if(linearSearch(arr, n, target)){
        cout<<target<<" is present";
    }
    else{
        cout<<target<<" is not present";
    }
}