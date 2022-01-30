/*INSERTION SORT
ITME COMPLEXITY = O(n^2)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i < n ; i++){  // For iterating over the entire array 
        int curr = arr[i];  // For the current variable 
        int j = i-1;  // The variable before the current variable
        while(arr[j] > curr && j >= 0){   // For shifting the element to next position
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;  // since j was decremented, add 1 to j to bring it to correct place
    }

    for(int i = 0; i < n; i++){ 
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
6
47 29 31 93 11 84
11 29 31 47 84 93 
*/
