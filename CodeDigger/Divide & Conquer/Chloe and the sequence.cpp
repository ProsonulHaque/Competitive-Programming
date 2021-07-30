/*
Author: rafa45
Date: 6 Nov 2020
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

//Don't forget to update N and PRIME
//#define NCR

ll power(ll a,ll p=M-2,ll MOD=M){
	ll result = 1;
	while (p > 0) {
		if (p & 1)
			result = a * result % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return result;
}

ll fact[N],invfact[N];

void init(){
	ll p=PRIME;
	fact[0]=1;
	int i;
	for(i=1;i<N;i++){
		fact[i]=i*fact[i-1]%p;
	}
	i--;
	invfact[i]=power(fact[i],p-2,p);
	for(i--;i>=0;i--){
		invfact[i]=invfact[i+1]*(i+1)%p;
	}
}

ll ncr(int n,int r){
	if(r > n || n < 0 || r < 0)return 0;
	return fact[n]*invfact[r]%PRIME*invfact[n-r]%PRIME;
}

ll npr(int n,int r){
	if(r > n || n < 0 || r < 0)return 0;
	return fact[n]*invfact[n-r]%PRIME;
}

////////----------------------------------Code Starts from Here----------------------------------////////

int ans(ll l, ll r, ll indx, int n){
    ll mid = l+(r-l)/2;

    if(mid==indx)
        return n;
    if(mid<indx)
        return ans(mid+1, r, indx, n-1);
    if(mid>indx)
        return ans(l, mid-1, indx, n-1);
}

int main()
{
    IOS

    int n;
    ll k, sz=1;

    cin >> n >> k;

    for(int i=1; i<n; i++){
        sz = sz*2+1;
    }

    cout << ans(1, sz, k, n);

    return 0;
}
