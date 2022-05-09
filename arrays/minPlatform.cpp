#include <iostream>
using namespace std; 
int minimumPlatform(int arr[], int dep[], int n){
    int platform=1;
    int ans=1;
    for(int i=1; i<n; i++){
        platform=1;
        for(int j=i+1; j<n; j++){
            if(max(arr[i],arr[j])<=min(dep[i],dep[j])){
                platform++;
            }
        }
        ans=max(ans,platform);
    }
    return ans;
}
int main(){
    int arr[] = { 2, 4,9,16};
    int dep[] = { 4,5,10,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minimumPlatform(arr,dep,n);

}