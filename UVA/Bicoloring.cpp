/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Nov 2021    *
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
bool bipartite(vector<vector<int>> adj, int n){
    vector<int> color(n, -1);
    queue<int> q;

    q.push(1);
    color[0] = 0;

    while(!q.empty()){
        int currentNode = q.front(); 
        q.pop();
            
        for(int node : adj[currentNode]){
            if(color[node] == -1){
                color[node] = ~color[currentNode];
                q.push(node);
            }
            else if(color[node] == color[currentNode]){
                return false;
            }
        }
    }

    return true;
}
//---------------BFS---------------//


int main()
{
    IOS


    int n, e;

    while(cin >> n){
        if(n==0) break;

        cin >> e;

        vector<vector<int>> adj(n);
        
        for(int i=0; i<e; i++){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        if(bipartite(adj, n)){
            cout << "BICOLORABLE." << endl;
        }
        else{
            cout << "NOT BICOLORABLE." << endl;
        }
    }


    return 0;
}