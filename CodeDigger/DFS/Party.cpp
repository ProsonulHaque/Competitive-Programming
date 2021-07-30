/*
Author: rafa45
Date: 8 Nov 2020
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
int arr[2020]={0};

void dfs(vector<int> adj[], int indx, int depth){
    for(auto u:adj[indx]){
        arr[u] = depth;
        dfs(adj, u, depth+1);
    }
}

int main()
{
    IOS

    int n, p, i, x;

    cin >> n;

    vector<int> v[n+1];

    for(i=1; i<=n; i++){
        cin >> x;
        if(x==-1) v[0].push_back(i);
        else v[x].push_back(i);
    }

    dfs(v, 0, 1);

    cout << *max_element(arr, arr+2020);

    return 0;
}
