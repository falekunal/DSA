/*
// #pattern printing;
// png 1.1
#include <iostream> 
using namespace std;

int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// png 1.2

#include <iostream>
using namespace std;

int main(){
    int n=5;

    for(int row=1; row<=n; row++){
        for (int col=1; col<=(n-row+1); col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

#include <iostream>
using namespace std;

int main(){
    int n=4;
    int count=n;
    for(int row=1; row<=n; row++){

        for(int col=1; col<=count; col++){
            cout<<"* ";
        }
        count--;
        cout<<endl;
    }
}

//     *
//    **
//   ***
//  ****
// *****
#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int sp=1; sp<=(n-row); sp++){
            cout<<" ";
        }
        for(int st=1; st<=row; st++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// png 1.5
#include <iostream> 
using namespace std;

int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int sp=1; sp<=row-1; sp++){
            cout<<" ";

        }
        for(int st=1; st<=(n-row+1); st++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// png 1.4
#include <iostream>
using namespace std;

int main(){
    int n=6;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=(n-row); col++){
            cout<<" ";

        }
        for(int col =1; col<=row; col++){
            cout<<"* ";

        }

        
        cout<<endl;
    }
}

// png 1.5
#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int row=1; row<=n; row++){

        for(int col=1; col<=row-1; col++){
            cout<<" ";
        }
        for(int col=1; col<=n-row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// png 1.3
#include <iostream>
using namespace std;

int main(){
    int n=6;
    int a=0;
    for(int row=1; row<=n; row++){
        
        if( row ==1 || row==n){
            for(int col =1; col<=n-row+1; col++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{

        cout<<"*";
        for(int col=1; col<n-row; col++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        }
        
    
    }
    

}
// png 1.4
#include <iostream>
using namespace std;

int main(){
    int n = 6;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }

        for(int col =1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}



// png 1.6
#include <iostream>
using namespace std;
int main(){
    int n =6;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        if(row==1||row==n){
            for(int col=1; col<=row; col++){
                cout<<"* ";
            }

        }
        else{
            cout<<"* ";
            for(int col=1; col<=row-2; col++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}

// png 2.1
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<col<<" ";
        }
        cout<<endl; 
    }

}

// png 2.2
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row+1; col++){
            cout<<col<<" ";
        }
        cout<<endl; 
    }

}

// png 2.3
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        if(row==1||row==2||row==n){
            for(int col=1; col<=row; col++){
                cout<<col<<" ";
            }
        }
        else{
            for(int col=1; col<=1; col++){
                cout<<col<<" ";
            }
            for(int col=1; col<=row-2; col++){
                cout<<"  ";
            }
            for(int col=1; col<=1; col++){    
                cout<<row<<" ";
            }
            
        }
        cout<<endl;
    }
}
 
// png 6
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int count=1;
    for(int row =1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
}

// png 2.5
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        if(row==1||row==2||row==n){
            for(int col=1; col<=row; col++){
                cout<<col<<" ";
            }
        }
        else{
            for(int col=1; col<=1; col++){
                cout<<col<<" ";
            }
            for(int col=1; col<=row-2; col++){
                cout<<"  ";
            }
            for(int col=1; col<=1; col++){    
                cout<<row<<" ";
            }
            
        }
        cout<<endl;
    }
}

// png 2.6
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        if(row==1){
            for(int col=1; col<=n-row+1; col++){
                cout<<col<<" ";
            }
        }
        else if(row==n){
            cout<<n;
        }
        else{
            cout<<row<<" ";
            for(int col= 1; col<=n-row-1; col++){
                cout<<"  ";
            }
            cout<<n;
        }
    
        cout<<endl;
    }
}

// png 2.4
#include <iostream>
using namespace std; 
int main(){
    int n=5;
    for(int row =1 ; row<=n; row++){
        for(int sp=1; sp<=n-row; sp++){
            cout<<"  ";
        }
        for(int col=1; col<=row; col++){
            cout<<row+(col-1)<<" ";
        }
        for(int col=1; col<=row-1; col++){
            cout<<(row*2)-col-1<<" ";
        }
        
        cout<<endl;
    }
}

// png 4.1
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row-1; col++){
            cout<<" ";
        }
        for(int co=1; co<=n-row+1; co++){
            cout<<"* ";
        }
        cout<<endl;

    }

}


// png 4.2
#include <iostream> 
using namespace std;
int main(){
    int n=5; 
    for(int row=1; row<=n; row++){
        if(row==1){
            for(int col=1; col<=n-row;col++){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
        else{
            for(int col=1; col<=n-row;col++){
                cout<<" ";
            }
            for(int col=1; col<=1; col++){
                cout<<"*";
            }
            for(int col=1; col<=row-1;col++){
                cout<<"  ";
            }

            for(int col=1; col<=1; col++){
                cout<<"*";
            }
            cout<<endl;
        }

        
    }
    for(int row=1; row<=n; row++){
        if(row==n){
            for(int col=1; col<=n-1;col++){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
        else{
            for(int col=1; col<=row-1;col++){
                cout<<" ";
            }
            for(int col=1; col<=1; col++){
                cout<<"*";
            }
            for(int col=1; col<=n-row;col++){
                cout<<"  ";
            }

            for(int col=1; col<=1; col++){
                cout<<"*";
            }
            cout<<endl;
        }
        

    }
}

// png 4.3

#include <iostream>
using namespace std; 
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

#include <iostream> 
using namespace std;
int main(){
    int n=7;
    int count =1;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
} 

// png 8

#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row+1;col++){
            cout<<"*";
        }
        for(int col=1; col<=row; col++){
            cout<<"  ";
        }
        for(int col=1; col<=n-row+1;col++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        for(int co=1; co<=n-row+1; co++){
            cout<<"  ";
        }
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
    

    
        cout<<endl;

    }

}

// png 9

#include <iostream>
using namespace std; 
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        for(int col=1; col<n-row+2; col++){
            cout<<"  ";
        }
        for(int col=1; col<=row;col++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row+1;col++){
            cout<<"*";
        }
        for(int col=1; col<=row; col++){
            cout<<"  ";
        }
        for(int col=1; col<=n-row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }


}



// png 3.1
#include <iostream>
using namespace std; 
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row;col++){
            cout<<col;
        }
        for(int col=1; col<=row-1; col++){
            cout<<row-col;
        }
        cout<<endl;
    }
}

// png 3.2
#include <iostream>
using namespace std; 
int main(){
    int n=5;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=row;col++){
            char ch='A'+col-1;
            cout<<ch<<" ";

            
        }
        for(int col=1; col<=row-1; col++){
            char ch='A'+row-col-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// png 3.3

#include <iostream>
using namespace std; 
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<"  ";
        }
        for(int col=1; col<=row;col++){
            cout<<col<<" ";
        }
        for(int col=1; col<=row-1; col++){
            cout<<row-col<<" ";
        }
        cout<<endl;
    }
}

// png 3.4
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=(n+(n-2))-row+1;col++){
            cout<<"*";
        }
        for(int col=1; col<=row; col++){
            cout<<row;
            cout<<"*";
        }

        for(int col=1; col<=(n+(n-2))-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// png 5.1
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<row+2;
        }
        cout<<endl;
    }
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<(n+2)-row;
        }
        cout<<endl;
    }
}
// png 5.3
#include <iostream>
using namespace std; 
int main(){
    int n=5;
    cout<<"*"<<endl;
    for(int row=1; row<=n; row++){
        cout<<"* ";
        for(int col=1; col<=row;col++){
            cout<<col<<" ";
        }
        for(int col=1; col<=row-1; col++){
            cout<<row-col<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int row=1; row<=n-1; row++){
        cout<<"* ";
        for(int col=1; col<=n-row;col++){
            cout<<col<<" ";
        }
        for(int col=1; col<=n-row-1; col++){
            cout<<n-row-col<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    cout<<"*";
}

// png 5.2
#include <iostream>
using namespace std;

int main(){
    int n=6;
    cout<<"1"<<endl;
    for(int i=2; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<i;
            cout<<"*";
        }
        for(int k=1; k<=1;k++){
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<n-i+2;
            cout<<"*";
        }
        for(int j=1; j<=1; j++){
            cout<<n-i+2;
        }
        cout<<endl;
    }
    cout<<"1"<<endl;
    
}
// png 7 pascals triangle
#include<iostream>
using namespace std;
 
int main()
{
    int n=7;
 
    for (int i = 0; i < n; i++){
        int val = 1;//val get reset here to 1
        for (int j = 0; j <= i; j++){
            cout << " " << val;
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    int n=4;
    // int count=2;
    // cout<<"1"<<endl;
    // for(int i=2; i<=n; i++){
    //     for(int j=1; j<=i-1; j++){
    //         cout<<count;
    //         cout<<"*";
    //         count++;
    //     }
    //     for(int k=1; k<=1;k++){
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }



    int count=10;
    // int c= 10;
    for(int i=2; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<count-(n-j);
            cout<<"*";
            
        }
        count=count-(n-1);
        cout<<count;
        // for(int j=1; j<=1; j++){
        //     cout<<c;
        //     c=c-count;
        //     // count=count-(n-j);
        // }
        cout<<endl;
    }
    // cout<<"1"<<endl;
    
}