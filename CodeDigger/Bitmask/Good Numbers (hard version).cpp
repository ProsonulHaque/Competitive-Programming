/*
Author: rafa45
Date: 25 Oct 2020
*/

#include<bits/stdc++.h>
using namespace std;

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

typedef long long ll;

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

////////----------------------------------Real Code Starts from Here----------------------------------////////

int main()
{
    IOS

	#ifdef SIEVE
		sieve();
	#endif

	#ifdef NCR
		init();
	#endif

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        int i, pos2=-1;

        vector<int> base3;

        while(n>0){
            base3.pb(n%3);
            if(n%3==2) pos2=base3.size()-1;
            n /= 3;
        }
        base3.pb(0);

        if(pos2!=-1){
            int pos0 = find(base3.begin()+pos2, base3.end(), 0) - base3.begin();
            base3[pos0]=1;
            for(i=pos0-1; i>=0; i--) base3[i]=0;
        }

        ll ans=0, pw=1;

        for(i=0; i<base3.size(); i++){
            ans += base3[i]*pw;
            pw*=3;
        }

        cout << ans << endl;
    }

    return 0;
}
