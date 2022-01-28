/*
5
    1
   212
  32123
 4321234
543212345
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
        int start=i;
        for ( ; j <= n; j++){
            cout<<start--;
        }
        start=2;
        for ( ; j <= n+i-1; j++){
            cout<<start++;
        }                     
        cout<<endl;
    }
    return 0;
}
