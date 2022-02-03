/*SUBARRAY WITH GIVEN SUM
TIME COMPLEXITY = O(n^2)
*/

#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n,s;cin>>n>>s;
    int A[n];
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    int i = 0, j = 0;
    int end = -1, start = -1;
    int cur_sum = 0;
    while (j < n && cur_sum + A[j] <= s){
        cur_sum += A[j];
        j++;        
    }
    if(cur_sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j < n){
        cur_sum += A[j];
        while(cur_sum > s){
           cur_sum -= A[i];
           i++;
        }
        if (cur_sum == s){
            start = i;
            end = j;
            break;
        }
        j++;
    }
    cout<<start<<" "<<end;
    return 0;
}
/*
7
12
1 2 3 4 5 6 7  
2 4
*/
