#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i=0, w=0;
    int n=0, h=0;

    cin >> n >> h;

    int arr[n];

    for (i = 0; i<n; i++){
        cin >> arr[i];
    }

    for (i = 0; i<n; i++){
        if(arr[i]>h){
            w += 2;
        }
        else{
            w += 1;
        }
    }

    cout << w << "\n";
}

int main(){

    solve();

    return 0;
}
