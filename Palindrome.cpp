/*
Palindrome using character array
TIME COMPLEXITY : O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char arr[n+1];
    cin>>arr;
    bool check = true;
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n-1-i]){
            check = false;
            break;
        }
    }
    if (check == true)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";    
    return 0;
}

/*
3
121 
Palindrome

5
nitin
Palindrome

4 
jekg
Not Palindrome

*/
