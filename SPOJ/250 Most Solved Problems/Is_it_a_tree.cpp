/*
    ***************************
    *    Author: rafa45       *
    *    Date: 26 Aug 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int cnt = -1;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited){
    if(visited[node]) return;
    visited[node] = true;
    cnt++;
    for(int neighbor:adj[node])    
        dfs(neighbor, adj, visited);
}


int main()
{
    IOS


    int n, m; cin >> n >> m;

    vector<vector<int>> adj(n+1);
    vector<bool> visited(n+1);

    for(int i=1; i<=n; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, adj, visited);

    string ans = "YES";
    if(m!=n-1 || cnt!=m) ans = "NO";
    
    cout << ans << endl;

    return 0;
}