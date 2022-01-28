/*
5 4
****
*  *
*  *
*  *
****
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int row; cin>>row;
    int col; cin>>col;
    for ( i = 1; i<=row; i++){
        for ( j = 1; j<=col; j++)
        {
            if(i==row || j==col || i==1 || j==1)
                cout<<"*";  
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
