/*
    ***************************
    *    Author: rafa45       *
    *    Date: 03 Dec 2021    *
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


void dfs(vector<vector<int>>& adj, vector<bool>& visited, int node){
    if(visited[node]) return;

    visited[node] = true;

    //process node

    for(int childNode:adj[node]){
        dfs(adj, visited, childNode);
    }
}


int main()
{
    IOS


    int nodes, edges;
    
    cout << "Enter no. of nodes & edges: ";
    cin >> nodes >> edges;

    vector<vector<int>> adj(nodes);
    vector<bool> visited(nodes);

    int a, b;

    cout << "Enter the edges: " << endl;
    
    for(int i=0; i<edges; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(adj, visited, 0);

    
    return 0;
}