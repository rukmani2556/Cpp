/*SELECTION SORT   
TIME COMPLEXITY = O(n^2) unsorted array
                  O(n)   sorted array 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){ 
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
7 
3 66 88 33 44 89 23
3 23 33 44 66 88 89 
*/
