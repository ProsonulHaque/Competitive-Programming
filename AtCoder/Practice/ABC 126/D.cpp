/*
Author: rafa45
Date: 15 Jul 2021
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


vector<int> bfs(vector<vector<pair<int, int>>> adj, int n){
    queue<int> q;
    q.push(1);
    vector<int> colors(n+1, -1);
    colors[1] = 0;

    while(!q.empty()){
        int parentNode = q.front();
        q.pop();
        for(auto childNode : adj[parentNode]){
            if(colors[childNode.first] == -1){
                q.push(childNode.first);
                if(childNode.second%2 == 0)
                    colors[childNode.first] = colors[parentNode];
                else
                    colors[childNode.first] = colors[parentNode]^1;
            }
        }
    }

    return colors;
}


int main()
{
    IOS


    int n; cin >> n;
    
    vector<vector<pair<int, int>>> adj(n+1);
    
    for(int i=0; i<n-1; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> colors = bfs(adj, n);

    for(int i=1; i<colors.size(); i++) cout << colors[i] << endl;


    return 0;
}