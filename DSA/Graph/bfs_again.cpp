/*
    ***************************
    *    Author: rafa45       *
    *    Date: 22 Nov 2021    *
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


vector<int> bfs(vector<vector<int>> adjList, int nodes){
    vector<int> levels(nodes+1, -1);
    queue<int> q;

    q.push(1);
    levels[1] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int adj:adjList[node]){
            if(levels[adj] == -1){
                levels[adj] = levels[node] + 1;
                q.push(adj);
            }
        }
    }

    return levels;
}


int main()
{
    int n=0, e=0;
    
    cout << "Enter no. of nodes & edges: ";
    cin >> n >> e;

    vector<vector<int>> adjList(n+1);

    cout << "Enter the edges: " << endl;

    for(int i=0; i<e; i++){
        int a, b;
        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    vector<int> levels = bfs(adjList, n);

    int node;
    cout << "Enter node: ";
    cin >> node;

    cout << "Level of the node: " << levels[node];

    return 0;
}