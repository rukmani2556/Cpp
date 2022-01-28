/*
5
01010
0101
010
01
0
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n; cin>>n;
    int a=0, b=1;
    for ( i = 1; i<=n; i++){
        for ( j = i; j<=n; j++){    
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
