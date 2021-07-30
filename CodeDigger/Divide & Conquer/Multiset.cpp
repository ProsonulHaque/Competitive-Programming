/*
Author: rafa45
Date: (Started) 1 Nov 2020
      (Solved)  5 Nov 2020
*/

#include<bits/stdc++.h>
using namespace std;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define ll                long long
#define endl              "\n"
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

vector<int> v,k;

bool can(int x){
    int rnk = 0;

    for(auto i:v){
        if(i<=x) rnk++;
    }

    for(auto i:k){
        if(i>0 && i<=x) rnk++;
        else if(i<0 && abs(i)<=rnk) rnk--;
    }

    if(rnk) return true;
    else return false;
}

int main()
{
    IOS

	int n, q;
	cin >> n >> q;

    v.assign(n, 0);
    k.assign(q, 0);

    for(auto &x:v) cin >> x;

    int add=n, rmv=0;

    for(auto &x:k){
        cin >> x;

        if(x>0) add++;
        else rmv++;
    }

    if(add==rmv){
        cout << 0;
        return 0;
    }

    int ans=0, l=1, r=1e6;

    while(l<=r){
        int mid = l+(r-l)/2;

        if(can(mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }

    cout << ans;

    return 0;
}
