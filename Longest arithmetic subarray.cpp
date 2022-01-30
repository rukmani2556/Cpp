/* LONGEST ARITHMETIC SUBARRAY
TIME COMPLEXITY = O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;;cin>>N;
    int A[N];
    for (int i = 0; i < N; i++ ) {
        cin>>A[i];
    }
    int length = 2; 
    int curr = 2 ;
    int i = 2;
    int d = A[1] - A[0];

    while(i < N){
        if(A[i] - A[i-1] == d){
            curr++;
        }else {
            d = A[i] - A[i-1];
            curr+2;
        }
        length = max(curr, length);
        i++;
    }
    cout<<length;
    return 0;
}

/*
5
1 3 2 4 6
3
*/
