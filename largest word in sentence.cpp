/*
largest word in sentence
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[100];
    int n; cin >> n;
    cin.ignore();
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int curr_len = 0, max_len = 0;
    int maxSt = 0, st = 0;
    while (i < n){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curr_len > max_len){
                maxSt = st;
                max_len = curr_len;
            }
            st = i + 1;
            curr_len = 0;
        }
        else
            curr_len++;
        if(arr[i] == '\0')
            break;

        i++;    
    }
    cout<<max_len<<endl;
    for(int i = 0; i < max_len; i++)
        cout<<arr[maxSt+i];
    cout<<endl;    

    return 0;
}

/*
10
do or die 
3
die
*/
