#include <iostream>
using namespace std;

void printarr(int arr,int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void sortArr(int arr[], int size){
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0; i<size; i++){
        switch(arr[i]){
            case 0: {
                c0++;
                break;
            }
            case 1:{
                c1++;
                break;
            }
            case 2: {
                c2++;
                break;
            }
        }
    }
    int i=0;
    while(c0>0){
        arr[i++]=0;
        c0--;
    }
    while(c1>0){
        arr[i++]=1;
        c1--;
    }
    while(c2>0){
        arr[i++]=2;
        c2--;
    }
    // printarr(int arr,size);

}


int main(){
    int n=17;
    int arr[100]={1,0,1,1,1,2,2,2,0,0,0,2,1,0,2,1,1};
    sortArr(arr,n);
    printarr(arr,n);

}