/*
    ***************************
    *    Author: rafa45       *
    *    Date: 25 Aug 2021    *
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


//---------------BFS---------------//
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
//---------------BFS---------------//


int main()
{
    IOS

    int N;
    int a, b;
    cin >> N;
    
    vector<vector<int>> adj(N+1);

    for(int i=0; i<N-1; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> distance = bfs(adj, N);

    return 0;
}