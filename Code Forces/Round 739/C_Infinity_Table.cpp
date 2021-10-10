/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Aug 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int k; cin >> k;
        int r, c, i=1, cnt = 1, x=1, y=1;
        bool ok=true;

        while(ok){
            if(k>=x && k<=y){
                if(k<=x+cnt-1) r=k-x+1, c=cnt;
                else r=cnt, c=y-k+1;
                ok = false;
            }
            x += i;
            y += i+2;
            i += 2;
            cnt++;
        }

        cout << r << " " << c << endl;
    }


    return 0;
}