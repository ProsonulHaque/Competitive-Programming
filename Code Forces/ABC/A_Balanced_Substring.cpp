/*
    ***************************
    *    Author: rafa45       *
    *    Date: 14 Sep 2021    *
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
        int n; cin >> n;

        string s; cin >> s;

        bool ok = false;
        int l, r;

        for(int i=0; i<n-1; i++){
            if(s[i] != s[i+1]){
                ok = true;
                l = i+1;
                r = i+2;
                break;
            }
        }

        if(ok){
            cout << l << " " << r << endl;
        }
        else cout << -1 << " " << -1 << endl;
    }


    return 0;
}