#include<iostream>
using namespace std;
int main(){
    int i,j;
    int row; cin>>row;
    for ( i = 1; i<=n; i++){
        for ( j = 1; j<=n; j++){
            if(j>=row-(i-1) && j<=row+(i-1))
                cout<<"*";  
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
6
     *     
    ***
   *****
  *******
 *********
***********

*?
