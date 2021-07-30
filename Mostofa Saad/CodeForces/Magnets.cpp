#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, cnt=1;
    int i=0;

    cin >> n;

    int arr[n];

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n-1; i++){
        if(arr[i]!=arr[i+1]){
            cnt += 1;
        }
    }

    cout << cnt;
}

int main(){

    solve();

    return 0;
}
