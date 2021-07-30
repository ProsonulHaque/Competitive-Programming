/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class JoinAClub
{
private:
vector<int> bfs(vector<vector<int>> adj, int n, int f){
    vector<bool> visited(n);
    vector<int> nodes;
    queue<int> q;

    q.push(f);
    visited[f] = true;
    nodes.push_back(f);

    while(!q.empty()){
        int currentNode = q.front(); q.pop();
        for(int node : adj[currentNode]){
            if(!visited[node]){
                visited[node] = true;
                nodes.push_back(node);
                q.push(node);
            }
        }
    }

    return nodes;
}
public:
vector <int> maximumClub(int N, vector <int> X, vector <int> Y){
    vector<vector<int>> adj(N);
    vector<int> ans;

    for(int i=0; i<X.size(); i++){
        adj[X[i]].push_back(Y[i]);
        adj[Y[i]].push_back(X[i]);
    }

    for(int i=0; i<N; i++){
        vector<int> v = bfs(adj, N, i);
        if(v.size() > ans.size())
            ans = v;
    }

    return ans;
}
};


int main()
{
    IOS

    int N = 5;
    vector<int> X = {};
    vector<int> Y = {};

    JoinAClub jac;
    vector<int> ans = jac.maximumClub(N, X, Y);
    for(int val:ans) cout << val << " \n";


    return 0;
}