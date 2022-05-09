#include <iostream>
using namespace std;
bool searchEle(int arr[], int n, int ele){
    for(int i=0 ; i<n; i++){
        if(arr[i]==ele){
            return true;
        }
    }
    return false;
}


int count(int arr[], int n, int tgt){
    int count=0;
    for(int i=0; i<n; i++){
        if (arr[i]==tgt){
            count++;
        }
    }
    return count;
}


bool uniqueOccurrences(int arr[], int n){
    int index=0;
    int crr[100]={0};
    for(int i=0 ; i<n; i++){
        if (i==0){
            int a= count(arr, n, arr[i]);
            int cn=sizeof(crr)/sizeof(crr[0]);
            if(searchEle(crr, cn,a)){
                return false;
                break;
            }
            else{
                crr[index]=a;
                index++;
            }
        }
        else{
            if(arr[i]==arr[i-1]){
                continue;
            }
            else{
                int a= count(arr, n, arr[i]);
                int cn=sizeof(crr)/sizeof(crr[0]);
                if(searchEle(crr, cn,a)){
                    return false;
                }
                else{
                    crr[index]=a;      
                    index++;                            
                }
            }

            
        }
        
    }
    return true;
}

int main(){

    int arr[100]={-3,-3,-3,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int n =10;
    // int arr[100]={1,2,3,4,4,3,3,2,2,2};
    if(uniqueOccurrences(arr, n)){
        cout<<"yes array have unique occurence";
    }
    else{
        cout<<"no array don't have unique occurence";
    }
    
    
    // cout<<count(arr, n, 3);
    // cout<<searchEle(arr, n, 3);
}

