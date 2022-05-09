#include <iostream>
using namespace std; 
// following function searches for the element in given array
bool searchElement(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

// following function gives intersection of two array
void arrIntersection(int arr[],int brr[],int size1,int size2){
    int i,j;
    i=0,j=0;
    while(i < size1 && j < size2){
        if (arr[i]<brr[j]){
            i++;
        }
        else if (arr[i]> brr[j]){
            j++;
        }

        else if(arr[i]==brr[j]){
            cout<< arr[i]<<" ";
            i++,j++;
        }
    }
}

// following function gives union of two array
void arrUnion(int arr[],int brr[],int size1,int size2){
    int i,j;
    i=j=0;
    while(i<size1 && j<size2){
        if (arr[i]<brr[j]){
            cout<<arr[i++]<<" ";
        }
        else if(arr[i]>brr[j]){
            cout<<brr[j++]<<" ";
        }
        else{
            cout<<brr[j++]<<" ";
            i++;
        }
    }
    while(i<size1){
        cout<<arr[i++];
    }
    while(j<size2){
        cout<<arr[j++];
    }
}

// void printUnion(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j])
//             cout << arr1[i++] << " ";
 
//         else if (arr2[j] < arr1[i])
//             cout << arr2[j++] << " ";
 
//         else {
//             cout << arr2[j++] << " ";
//             i++;
//         }
//     }

int main(){
    int n1=16;
    int arr[100]={1,2,3,3,3,4,5,12,23,34,45,50};
    int n2=10;
    int brr[100]={1,2,2,2,3,3,3,3,55,56,67,87,97};
    // cout<<"Intersection of given array is ";
    // arrIntersection(arr,brr,n1,n2);
    cout<<endl;
    cout<<"Union of given array is ";
    // arrUnion(arr,brr,n1,n2);
    arrIntersection(arr,brr,n1,n2);
}