/*
    ***************************
    *    Author: rafa45       *
    *    Date: 07 Aug 2021    *
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


    int tc;
    cin >> tc;


    while(tc--){}


    return 0;
}