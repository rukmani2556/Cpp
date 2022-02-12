/*
Spiral Order Matrix
Time complexity
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=0,j=0;
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    int row_start = 0, row_end = n - 1;
    int col_start = 0, col_end = m - 1;
    while( row_start <= row_end && col_start <= col_end ){
        for( int col = col_start; col <= col_end ; col++ ){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int row = row_start; row <= row_end; row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        for(int col = col_end; col >= col_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        for(int row = row_end; row >= row_start; row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}

/*
4 4 
1 2 3 4 
5 6 7 8
9 10 11 12 
13 14 15 16
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/
