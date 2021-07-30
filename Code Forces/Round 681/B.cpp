/*
Author: rafa45
Date: 2 Nov 2020
*/

#include<bits/stdc++.h>
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define endl              "\n"
#define PRIME	          M
#define mod               M
#define ll                long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

int main()
{
    IOS

    int t, a, p;
    cin >> t;

    while(t--){
        cin >> a >> p;
        string s;
        cin >> s;

        int i=0;
        ll ans=0;
        bool first=true;

        while(i<s.size()){

            if(s[i]=='1'){

                if(first){
                    first=false;
                    ans+=a;
                }

                int gap=0;

                while(s[i]=='1' && i<s.size()) i++;

                while(s[i]=='0' && i<s.size()){
                    gap++;
                    i++;
                }

                if(i==s.size() && s[i-1]=='0') break;

                if(gap*p > a) ans+=a;
                else ans+=gap*p;
            }

            else i++;
        }

        cout << ans << endl;
    }

    return 0;
}
