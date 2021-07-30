/*
    ***************************
    *    Author: rafa45       *
    *    Date: 27 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n=0, d=0;
        cin >> n >> d;
        vector<int> p(n), s(n), q(n);

        for(int i=0; i<n; i++) cin >> p[i]; 
        for(int i=0; i<n; i++) cin >> s[i];

        iota(q.begin(), q.end(), 0);
        sort(q.begin(), q.end(), [&](int i, int j){return p[i]<p[j];});        

        int ptr = 0; ll ans = 0;

        multiset<int> ms;

        for(int i=n-1; i>=0; i--){
            if(p[q[i]]>d) continue;

            while(ptr<i && p[q[ptr]]<=(d-p[q[i]])){
                ms.insert(s[q[ptr]]);
                ptr++;
            }

            auto it = ms.find(s[q[i]]);

            if(i<=ptr-1 && it!=ms.end()){
                ms.erase(it);
            }
            
            ll sum = s[q[i]] + (ms.empty()? 0:*ms.rbegin());
            ans = max(sum, ans);
        }

        cout << ans << endl;
    }


    return 0;
}   