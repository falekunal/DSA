// creation of 2d array

#include <iostream>
using namespace std;
// void prnting2dArray(int arr[][], int size){
//     for(int i =0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<arr[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// }

bool search(int arr[3][3], int n, int tgt){
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(tgt==arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

void colViseSum(int arr[4][2], int row, int col){
    int sum=0;
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){

            sum=sum + arr[j][i];
            
        }
        
        cout<<sum<<"  ";
        
    }
    cout<<endl;
}


void rowSum(int arr[4][2], int row, int col){
    int sum=0;
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){

            sum=sum + arr[i][j];
            
        }
        
        cout<<sum<<"  ";
        
    }
    cout<<endl;
}


// int maxColViseSum()

int main(){
    // crating 2d array
    // int n=3;

    int arr [4] [2]={1,2,2,3,3,4,4,5};
    // taking input values for 2d array
    // for(int i =0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j]<< " ";
    //     }
    // }

    int t=2;
    

    int n= sizeof(arr)/sizeof(arr[0][0]);
    // prnting2dArray(arr,n);
    // if(search(arr,n,t)){
    //     cout<<t<<" is present";
    // }
    // else{
    //     cout<<t<<" is not present";
    // }
    colViseSum(arr,4,2);
    rowSum(arr,4,2);

}