/*
Author: rafa45
Date: 25 Oct 2020
*/

#include<bits/stdc++.h>
using namespace std;
#define int               long long
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

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;

#define NCR
#define PRIME	M

int pw(int a,int p=M-2,int MOD=M){
	int result = 1;
	while (p > 0) {
		if (p & 1)
			result = a * result % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return result;
}

int fact[N],invfact[N];

void init(){
	int p=PRIME;
	fact[0]=1;
	int i;
	for(i=1;i<N;i++){
		fact[i]=i*fact[i-1]%p;
	}
	i--;
	invfact[i]=pw(fact[i],p-2,p);
	for(i--;i>=0;i--){
		invfact[i]=invfact[i+1]*(i+1)%p;
	}
}

int ncr(int n,int r){
	if(r > n || n < 0 || r < 0)return 0;
	return fact[n]*invfact[r]%PRIME*invfact[n-r]%PRIME;
}

int npr(int n,int r){
	if(r > n || n < 0 || r < 0)return 0;
	return fact[n]*invfact[n-r]%PRIME;
}

////////----------------------------------Real Code Starts from Here----------------------------------////////

signed main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	#ifdef SIEVE
		sieve();
	#endif

	#ifdef NCR
		init();
	#endif

    int n, x, p;
    cin >> n >> x >> p;

    int low=0, high=n;
    int below=0, above=0;

    while(low<high){
        int mid = (low+high)/2;

        if(mid==p) low = mid+1;

        else if(mid<p){
            below++;
            low=mid+1;
        }

        else{
            above++;
            high=mid;
        }
    }

    int ans = npr(x-1, below)*npr(n-x, above)%M*fact[(n-(below+above)-1)]%M;

    cout << ans << endl;

    return 0;
}
