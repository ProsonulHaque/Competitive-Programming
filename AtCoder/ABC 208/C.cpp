/*
Author: rafa45
Date: 04 Jul 2021
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

bool indexSort( const vector<ll>& v1, const vector<ll>& v2 ) {
 return v1[0] < v2[0];
}

bool idSort( const vector<ll>& v1, const vector<ll>& v2 ) {
 return v1[1] < v2[1];
}

int main()
{
    IOS

    ll n, k;
    cin >> n >> k;

    //index-id-sweets
    //  0    7   5
    //  1    33  5 
    vector<vector<ll>> v(n, vector<ll> (3));

    for(int i=0; i<n; i++){
        v[i][0] = i;
        cin >> v[i][1];
    }

    ll sweets = k/n;

    if(k%n == 0){
        while(n--){
            cout << sweets << endl;
        }
        return 0;
    }

    sort(v.begin(), v.end(), idSort);

    if(k<n){
        for(int i=0; i<n; i++){
            if(i+1<=k)
                v[i][2] = 1;
            else
                v[i][2] = 0; 
        }
    }
    else{
        ll smallestIdHolders = k%n;
        for(int i=0; i<n; i++){
            if(i+1<=smallestIdHolders)
                v[i][2] = sweets+1;
            else
                v[i][2] = sweets; 
        }
    }
    
    sort(v.begin(), v.end(), indexSort);

    for(int i=0; i<n; i++)
        cout << v[i][2] << endl;

    return 0;
}
