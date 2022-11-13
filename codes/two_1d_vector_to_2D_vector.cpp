#include <iostream> // for input output function
#include<vector> // for creating vector
#include <algorithm> //for sorting

using namespace std;

int main() {
    // declaring size of 2d vector
    int num_row = 4;
    int num_col = 2;
    
    // declaring first one dimesional vector
    vector<int>vect1 {3,4,5,6};
    
    // declaring second one dimesional vector
    vector<int> vect2{7,8,9,2};
    
    // Initializing a single row
	vector<int> row(num_col, 0);
	
	// Initializing 2d vector with all elements zero
	vector<vector<int>> v(num_row, row);
    
    for(int i=0; i<num_row; i++){
        v[i][0] = vect1[i];
        v[i][1] = vect2[i];
    }
    
    // following line will sort the 2d vector
    sort(v.begin(), v.end());
    
    // will print the 2d vector
    for(int i=0; i<num_row; i++){
        cout<<"{ ";
        for(int j=0; j<num_col; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"},";
        cout<<endl;
    }
}
