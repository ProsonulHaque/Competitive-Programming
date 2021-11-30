/*
    ***************************
    *    Author: rafa45       *
    *    Date: 29 Nov 2021    *
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
int bfs(unordered_map<int, vector<int>> adj, int node, int ttl, int totalNodes){
    unordered_map<int, int> level;
    queue<int> q;
    
    q.push(node);
    level[node] = 0;

    int count = 0;

    while(!q.empty()){
        int currentNode = q.front(); 
        q.pop();
            
        for(int adjNode : adj[currentNode]){
            if(level.count(adjNode) == 0){
                level[adjNode] = level[currentNode] + 1;
                q.push(adjNode);
                if(level[adjNode] > ttl) count++;
            }
        }
    }

    return count + totalNodes - level.size();
}
//---------------BFS---------------//


int main()
{
    IOS


    int e, count = 1;

    while(cin >> e){
        if(e==0) break;

        unordered_map<int, vector<int>> adj;
        unordered_set<int> nodes;

        int a, b;
        
        for(int i=0; i<e; i++){
            cin >> a >> b;
            
            nodes.insert(a);
            nodes.insert(b);

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int node, ttl;

        while(cin >> node >> ttl){
            if(node == 0 && ttl == 0) break;

            int n = bfs(adj, node, ttl, nodes.size());

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", count, n, node, ttl);
            count++;
        }
    }


    return 0;
}