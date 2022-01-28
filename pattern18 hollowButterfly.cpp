/*
5
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n; cin>>n;
    for(i=1;i<=n;i++){
        int empty_space=2*n-2*i;
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(j=1;j<=empty_space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        int empty_space=2*n-2*i;
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(j=1;j<=empty_space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
