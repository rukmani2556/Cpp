#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n; cin>>n;
    for ( i = 1; i<=n; i++){
        for ( j = 1; j<=n; j++)
        {
            if(j<=n-i)
                cout<<" ";  
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//PS C:\Users\Rukmani\Desktop\New folder> cd "c:\Users\Rukmani\Desktop\New folder\" ; if ($?) { g++ pattern.cpp -o pattern } ; if ($?) { .\pattern }
//3
//  *
// **
//***
