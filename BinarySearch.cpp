/*BINARY SEARCH
Time Complexity = O(log2 n)
*/
#include<bits/stdc++.h>
using namespace std;
//Funtion for Binary Search
int BinarySearch(int arr[], int n, int key){
    int s = 0;  // Start element
    int e = n;  // End element
    while (s <= e){
        int mid = (s+e)/2;  // Mid element
        if(arr[mid] == key){
           return mid;
        }else if(arr[mid] > key){
           e = mid-1;
        }else{
           s = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;cin>>n; // Size of array
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key; cin>>key;  // The element we are looking for
    cout<<BinarySearch(arr, n, key)<<endl;
    return 0;
}

/*
6
10 20 30 40 50 60
40
3
*/
