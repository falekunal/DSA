#include <iostream>
using namespace std; 
bool isPalindrome(int arr[], int size){

    int i=0;
    int j=size-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++,j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n=8;
    int arr[100]={1,2,3,4,4,3,2,1};
    if(isPalindrome(arr,n)){
        cout<<"pattern is palindrome";
    }
    else{
        "pattern is not a palindrome";
    }
}