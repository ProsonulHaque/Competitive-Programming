/*
Author: rafa45
Date: 14 Jul 2021
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

vector<int> bfs(vector<vector<int>> adj, int n){
    vector<int> distance(n+1, -1);
    queue<int> q;

    q.push(1);
    distance[1] = 0;

    while(!q.empty()){
        int currentNode = q.front(); q.pop();
        for(int node : adj[currentNode]){
            if(distance[node] == -1){
                distance[node] = distance[currentNode]+1;
                q.push(node);
            }
        }
    }

    return distance;
}

int main()
{
    IOS

    int N, Q;
    cin >> N >> Q;
    int a, b, c, d;
    
    vector<vector<int>> adj(N+1);

    for(int i=0; i<N-1; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> distance = bfs(adj, N);

    for(int i=0; i<Q; i++){
        cin >> c >> d;
        if(distance[c]%2 == distance[d]%2)
            cout << "Town" << endl;
        else
            cout << "Road" << endl;
    }

    return 0;
}