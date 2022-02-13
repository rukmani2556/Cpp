/*
MATRIX SEARCH
TIME COMPLEXITY : O(n + m) 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int m, n; cin >> m >> n;
    int target; cin >> target;
    int arr[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    bool flag = false;
    int r = 0, c = n - 1;
    while(r < m && c >= 0){
        if(arr[r][c] == target){
            flag = true;
        }    
        arr[r][c] > target ? c-- : r++;
    }
    if(flag == true)
        cout<<"Found";
    else
        cout<<"Not found";    
    
    return 0;
}

/*
3 3
4
1 2 3
4 5 6
7 8 9
*/
