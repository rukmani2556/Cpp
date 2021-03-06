/*BUBBLE SORT
TIME COMPLEXITY = O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 1;  // Intialising the no. of iteration
    while (count < n-1){    // For iterating over the entire array
        for(int i = 0; i < n-count; i++){   // For swapping the elements
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    for(int i = 0; i < n; i++){ 
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
5
75 69 12 90 21
12 21 69 75 90 
*/
