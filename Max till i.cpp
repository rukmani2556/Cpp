/*Max till i
TIME COMPLEXITY = O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++ ) {
        cin>>arr[i];
    }
    int mx = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<" ";

    }
    return 0;
}

/*
6
9 7 5 3 20 2
9 9 9 9 20 20 
*/
