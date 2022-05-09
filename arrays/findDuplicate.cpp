#include <iostream>
#include <limits.h>

using namespace std;

void duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[j];
            }
        }
    }
}
int main()
{
    int num[10]={1,2,3,4,5,4,55,555,5555,455};
    int n=sizeof(num)/sizeof(num[0]);
    duplicate(num,n);
}
