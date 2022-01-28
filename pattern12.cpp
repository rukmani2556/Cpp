/*
5
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n; cin>>n;
    int a=1, b=0;
    for ( i = 1; i<=n; i++){
        for ( j = 1; j<=i; j++){    
            if ((i+j)%2==0){
                cout<<a;
            }
            else
                cout<<b;  
        }      
        cout<<endl;
    }
    return 0;
}
