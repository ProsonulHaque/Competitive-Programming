/*
Author: rafa45
Date: 24 Jul 2021
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int N=5000;

#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M;
vector<vector<int>> adj(N+1);
vector<bool> visited(N+1);
vector<int> pathDistance(N+1), ans;

void dfs(int node){
    for(int adjNode:adj[node]){
        pathDistance[adjNode] = pathDistance[node]+1;
        if(adjNode == N){
            ans.push_back(pathDistance[adjNode]);
            continue;
        }
        dfs(adjNode);
    }
}


int main()
{
    IOS

    cin >> N >> M;
    
    // vector<vector<int>> adj(N+1);

    for(int i=0; i<M; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    pathDistance[1] = 0;
    dfs(1);
    int minDistance = *min(pathDistance.begin(), pathDistance.end());
    int count = 0;
    for(int val:pathDistance){
        if(val == minDistance) count = (count+1)%PRIME;
    }

    cout << count << endl;

    return 0;
}