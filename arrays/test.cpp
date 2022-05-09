#include <iostream> 
using namespace std;

int main (){
    for(int i=0; i<10;){
        if(i==2){
            continue;

        }
        else{
            cout<<i;
        }
        i++;
    }
}