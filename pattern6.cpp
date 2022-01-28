/*
5
1
23
456
78910
1112131415
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n; cin>>n;
    int count=0;
    for ( i = 1; i<=n; i++){
        for ( j = 1; j<=i; j++)
        {   
            count++;
            cout<<count;      
        }
        cout<<endl;
    }
    return 0;
}
