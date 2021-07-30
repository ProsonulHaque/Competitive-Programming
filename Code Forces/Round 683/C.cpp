/*
Author: rafa45
Date: 15 Nov 2020
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

    int t, i;
    cin >> t;

    while(t--){
        int n=0;
        ll w=0;
        ll sum=0;

        cin >> n >> w;
        vector<pii> v;

        for(i=1; i<=n; i++){
            int x;
            cin >> x;
            if(x>w) continue;
            sum += x;
            v.push_back(make_pair(x,i));
        }

        if(v.empty()){
            cout << -1 << endl;
            continue;
        }

        sort(v.begin(), v.end());

        int s=v.size();

        while(s--){
            if(sum>=(w+1)/2 && sum<=w){
                cout << v.size() << endl;
                for(auto u:v){
                    cout << u.second << " ";
                }
                cout << endl;
                break;
            }

            if(sum<(w+1)/2){
                cout << -1 << endl;
                break;
            }

            if(sum-v.back().first>=(w+1)/2){
                sum -= v.back().first;
                v.pop_back();
            }
            else{
                sum -= v.front().first;
                v.erase(v.begin());
            }
        }
    }

    return 0;
}
