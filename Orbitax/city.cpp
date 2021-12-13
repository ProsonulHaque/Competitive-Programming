/*
    ***************************
    *    Author: rafa45       *
    *    Date: 13 Dec 2021    *
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


int dfs(int dest, int node, vector<vector<int>>& mat, vector<bool> &vis){
    if(node == dest) return 0;
    vis[node] = true;

    int n = mat.size();
    int distance = 0;

    for(int i=0; i<n; i++){
        if(vis[i] || mat[node][i]==0) continue;
        distance = max(distance, mat[node][i] + dfs(dest, i, mat, vis));
    }

    vis[node] = false;

    return distance;
}


int main()
{
    IOS


    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int> (n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x; cin >> x;
            mat[i][j] = x;
        }
    }

    int mind = 1e9;
    vector<int> dis(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            vector<bool> vis(n);
            int d = dfs(j, i, mat, vis);
            dis[i] = max(dis[i], d);
            mind = min(mind, d);
        }
    }

    for(int i=0; i<n; i++){
        if(dis[i] == mind) cout << i+1 << " ";
    }

    return 0;
}