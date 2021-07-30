#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, s=0, d=0;

    cin >> n;

    int arr[n];

    int i=0, p=0, q=n-1;

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n; i++){
        if(i%2==0){
            if(arr[p]>arr[q]){
                s += arr[p];
                p++;
            }
            else{
                s += arr[q];
                q--;
            }

        }
        else{
            if(arr[p]>arr[q]){
                d += arr[p];
                p++;
            }
            else{
                d += arr[q];
                q--;
            }
        }
    }

    cout << s << " " << d;
}

int main(){

    solve();

    return 0;
}
