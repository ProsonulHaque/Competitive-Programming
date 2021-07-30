#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int i=0, j=0;
    int n=0, cnt=0;
    cin >> n;

    int city[n][2];

    for(i=0; i<n; i++){
        cin >> city[i][0] >> city[i][1];
    }

    for(i=0; i<n; i++){
        cnt = 1;
        for(j=0; j<n; j++){
            if((city[i][0]>city[j][0] && city[i][1]>city[j][1]) || (city[i][0]<city[j][0] && city[i][1]<city[j][1])){
                cnt += 1;
            }
        }
        cout << cnt << "\n";
    }
}

int main(){

    solve();

    return 0;
}
