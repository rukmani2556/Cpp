/*
5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n; cin>>n;
    for ( i = 1; i<=n; i++){
        for ( j = 1; j<=n-i; j++){    
           cout<<" ";
        }
        for ( j = 1 ; j <= 2*i-1; j++){
            cout<<"*";
        }                    
        cout<<endl;
    }
    for ( i = n; i>=1; i--){
        for ( j = 1; j<=n-i; j++){    
           cout<<" ";
        }
        for ( j = 1 ; j <= 2*i-1; j++){
            cout<<"*";
        }                    
        cout<<endl;
    }
    return 0;
}
