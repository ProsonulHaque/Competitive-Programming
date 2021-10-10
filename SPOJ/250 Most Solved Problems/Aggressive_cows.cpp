/*
    ***************************
    *    Author: rafa45       *
    *    Date: 21 Aug 2021    *
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


bool ok(int c, int dis, vector<int> &v){
    int cows = 1, pos = v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i]-pos>=dis){
            pos = v[i];
            cows++;
            if(cows == c) return true;
        }
    } 
    return false;
}


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n, c; cin >> n >> c;
        vector<int> s(n);

        for(auto &x:s) cin >> x;

        sort(s.begin(), s.end());

        int l=0, r=s[n-1], m=0, ans=0;

        while(l<=r){
            m = (l+r)/2;
            if(ok(c, m, s)){
                l = m+1;
                ans = max(ans, m);
            }
            else r = m-1;
        }

        cout << ans << endl;
    }


    return 0;
}