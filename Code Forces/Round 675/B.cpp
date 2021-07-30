/*
Author: rafa45
Date: 4 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a=0, b=0, c=0, d=0, cnt=0, ops=0;
    int t=0, n=0, m=0, i=0, j=0;

    cin >> t;

    while(t--){
        cin >> n >> m;
        ll mat[n][m];

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }

        cnt=0;

        for(i=0; i<(n+1)/2; i++){
            for(j=0; j<(m+1)/2; j++){
                a = mat[i][j];
                b = mat[i][m-j-1];
                c = mat[n-i-1][j];
                d = mat[n-i-1][m-j-1];
                ops = min({abs(a-b)+abs(a-c)+abs(a-d),
                           abs(b-a)+abs(b-c)+abs(b-d),
                           abs(c-a)+abs(c-b)+abs(c-d),
                           abs(d-a)+abs(d-b)+abs(d-c)});
                if(i==n-i-1) ops /= 2;
                if(j==m-j-1) ops /= 2;
                cnt += ops;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
