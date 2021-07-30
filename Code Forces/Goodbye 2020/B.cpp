/*
Author: rafa45
Date: 30 Dec 2020
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

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int arr[n];
        set<int> s;

        rep(i, 0, n)
            cin >> arr[i];

        rep(i, 0, n){
            if(s.count(arr[i])){
                if(s.count(arr[i]+1)){
                    continue;
                }
                s.insert(arr[i]+1);
            }
            else{
                s.insert(arr[i]);
            }
        }

        cout << s.size() << endl;
    }

    return 0;
}














