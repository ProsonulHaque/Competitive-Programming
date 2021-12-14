/*
    ***************************
    *    Author: rafa45       *
    *    Date: 13 Dec 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e9;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


vector<int> bellman_ford(int node, int n, vector<tuple<int, int, int>> edges){
    vector<int> dis(n);

    for(int i=0; i<=n; i++) dis[i] = INF;

    dis[node] = 0;

    for(int i=1; i<=n-1; i++){
        bool unchanged = true;
        for(auto e:edges){
            int a, b, w;
            tie(a, b, w) = e;
            // dis[b] = min(dis[b], dis[a]+w);
            if(dis[a]+w < dis[b]){
                dis[b] = dis[a]+w;
                unchanged = false;
            }
        }
        if(unchanged) break;
    }

    return dis;
}


int main()
{
    IOS


    int nodes;
    cin >> nodes;

    vector<tuple<int, int, int>> edges;
    vector<int> node_distances(nodes);

    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            int w; cin >> w;
            if(i!=j){
                edges.push_back(make_tuple(i, j, w));
            }
        }
    }

    int min_dis = 1e9;

    for(int i=0; i<nodes; i++){
        vector<int> dis = bellman_ford(i, nodes, edges);
        int max_dis = *max_element(all(dis));
        node_distances[i] = max_dis;
        min_dis = min(min_dis, max_dis);
    }

    for(int i=0; i<nodes; i++){
        if(node_distances[i] == min_dis) cout << i+1 << " ";
    }

    return 0;
}