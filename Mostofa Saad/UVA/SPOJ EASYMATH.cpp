/*
Author: rafa45
Date: 10 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=600;

int main()
{
    int t=0;
    cin >> t;

    ll n, m, a, d;
    int i, j, k, l, p;

    while(t--){
        cin >> n >> m >> a >> d;
        ll total_n=0, total_m=0;

        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                for(k=0; k<2; k++){
                    for(l=0; l<2; l++){
                        for(p=0; p<2; p++){
                            int cnt = 0; ll q=1;

                            if(i) {q*=a;       ++cnt;}
                            if(j) {q*=(a+d);   ++cnt;}
                            if(k) {q*=(a+2*d); ++cnt;}
                            if(l) {q*=(a+3*d); ++cnt;}
                            if(p) {q*=(a+4*d); ++cnt;}

                            if(cnt==0) continue;
                            int sign = cnt%2==0 ? -1:1;

                            total_n += sign*((n-1)/q);
                            total_m += sign*(m/q);
                        }
                    }
                }
            }
        }

        cout << "total_n: " << total_n << "  " << "total_m: " << total_m << endl;

        ll ans = (m-n+1)-(total_m - total_n);
        //ll ans = (m-total_m)-((n-1)-total_n);
        cout << ans << endl;
    }

    return 0;
}
