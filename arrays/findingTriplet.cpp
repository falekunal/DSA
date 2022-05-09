// following code gives the triplets such that its sum is equal to given number

#include <iostream>
using namespace std;

void printPairs(int arr[], int size, int sum){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                cout<<" {"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"} "; 
                }
            }
        }
    }
}

int main(){
    int n=10;
    int arr[100]={1,2,3,4,5,6,7,8,9,0};
    int num=21;
    cout<<"Printing the pairs that will give sum "<<num<<endl;
    printPairs(arr, n , num);
}