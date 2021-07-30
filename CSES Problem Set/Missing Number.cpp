#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, i=0;
    int val=0;

    cin >> n;

    vector<int> arr(n);

    for (i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    arr[n-1] = 0;

    sort(arr.begin(), arr.end());

    for (i = 1; i <=n; i++){
        if(arr[i]!=i){
            cout << i << "\n";
            break;
        }
    }
}

int main(){

    solve();

    return 0;
}

