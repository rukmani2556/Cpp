/*All Subarray*/
#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n;cin>>n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }int k=0;
    for(int i=0;i<n;i++){
        for(int j = i; j<n;j++){
            for(int k = i;k<=j;k++){
                cout<<A[k]<<" ";
            }
            cout<<endl;
        }
    }   
    return 0;
}

/*
4
1 2 3 4
1 
1 2
1 2 3
1 2 3 4
2
2 3
2 3 4
3
3 4
4
*/
