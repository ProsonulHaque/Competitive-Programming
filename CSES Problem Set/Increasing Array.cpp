#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, i=0;
    long long cnt=0;

    cin >> n;

    vector<long long> arr(n);

    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (i = 0; i < n-1; i++){
        while(arr[i+1]<arr[i]){
            arr[i+1] += 1;
            cnt += 1;
        }
    }

    cout << cnt;
}

int main(){

    solve();

    return 0;
}

