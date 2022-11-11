//code for calculating the product of frequency of string
// e.g. string s= "abbccc"
// a=1;
// b=2;
// c=3;
// ans = 1*2*3=6;
// string must be sorted in ascending order


#include <iostream>
using namespace std;


int main() {
    // initiating string 
    string s;
    
    // taking input string
    cin>>s;
    
    //length of string s
    int n= s.length();
    
    //cnt to count the repeating alaphabets 
    int cnt=1;
    int ans=1;
    int j=1;
    for(int i=0; i<n;){
        if(s[i]==s[i+1] &&  i<n){
            cnt++;
            i++;
        }
        else{
            ans= ans*cnt;
            cnt =1;
            i++;
        }
    }
    cout<<"ans = "<<ans;

    return 0;
}
