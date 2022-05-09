#include <iostream>
using namespace std;

int main(){
    int n=3;
    int count=2;
    cout<<"1"<<endl;
    for(int i=2; i<=n+1; i++){
        for(int j=1; j<=i-1; j++){
            cout<<count;
            cout<<"*";
            count++;
        }
        for(int k=1; k<=1;k++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}