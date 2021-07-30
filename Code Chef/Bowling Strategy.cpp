#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, k=0, l=0;
    int i=0;

    cin >> n >> k >> l;

    if(n==1 && k==1){
        cout << 1 << "\n";
    }
    else if((k*l)>=n && k>1){
        int bowler=1;
        for(i=1; i<=n; i++){
            cout << bowler << " ";
            if(bowler==k){
                bowler = 1;
            }
            else{
                bowler += 1;
            }
        }
        cout << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}

int main(){
    int t=0;

    cin >> t;

    while(t--) solve();

    return 0;
}
