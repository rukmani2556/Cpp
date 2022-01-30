/*SUM OF ALL SUB ARRAYS
TIME COMPLEXITY = O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++ ) {
        cin>>arr[i];
    }
    int curr; 
    for(int i = 0; i < n; i++){
        curr = 0;
        for(int j = i; j < n; j++){
            curr += arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}

/*
4
1 2 3 4  
1
3
6
10
2
5
9
3
7
4
*/
