/*
MATRIX MULTIPLICATION
ITM COMLEXITY : O(n^3)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int arr1[n1][n2], arr2[n2][n3];
    for(i = 0; i < n1; i++){
        for(j = 0; j < n2; j++){
            cin>>arr1[i][j];
        }
    }
    for(i = 0; i < n2; i++){
        for(j = 0; j < n3; j++){
            cin>>arr2[i][j];
        }
    }
    int ans[n1][n3];
    for(i = 0; i < n1; i++){
        for(j = 0; j < n3; j++){
            ans[i][j] = 0;
        }
    }

    for(i = 0; i < n1; i++){
        for(j = 0; j < n3; j++){
            for(int k = 0; k < n2; k++){
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }        
        }
    }
    
    for(i = 0; i < n1; i++){
        for(j = 0; j < n3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
3 4 3
2 4 1 2
8 4 3 6
1 7 9 5
1 2 3 
4 5 6 
7 8 9 
4 5 6
33 42 51 
69 90 111
112 134 156
*/
