#include <iostream>
using namespace std;
void firstNonRepeatingElement(int A[],int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n; j++){
            if (j == n){
                cout << "First non-repeating element is: " << A[i] << endl;
                return;
            }
            if (j != i and A[i] == A[j]){
                break;
            }
        }
    }
    cout << "All the elements are repeating." << endl;
}
int main(){
    int A[]={2,1,2,1,3,4};
    int n =sizeof(A)/sizeof(A[0]);

    firstNonRepeatingElement   (A,n);
}