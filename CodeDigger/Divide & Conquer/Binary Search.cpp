/*
Author: rafa45
Date: 31 Oct 2020
*/

#include<bits/stdc++.h>
using namespace std;

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

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

//#define NCR
#define PRIME	M

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

int bs(vector<int> &v, int l, int r, int x){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==x)
            return mid+1;
        if(v[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    return 0;
}

int main()
{
    IOS

	#ifdef SIEVE
		sieve();
	#endif

	#ifdef NCR
		init();
	#endif

    vector<int> v = {1, 2, 3, 5, 5, 7, 9};
    int x = 5, n = 7;

    //Inbuilt function
    cout << binary_search(v.begin(), v.end(), x) << endl;
    cout << upper_bound(v.begin(), v.end(), x)-lower_bound(v.begin(), v.end(), x) << endl;
    //Custom function
    cout << bs(v, 0, n-1, x) << endl;

    return 0;
}
