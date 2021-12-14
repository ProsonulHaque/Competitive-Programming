/*
    ***************************
    *    Author: rafa45       *
    *    Date: 14 Dec 2021    *
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
        for(auto e:edges){
            int a, b, w;
            tie(a, b, w) = e;
            dis[b] = min(dis[b], dis[a]+w);
        }
    }

    return dis;
} 


int main()
{
    IOS

    // Number of nodes 
    int n = 5;

    vector<tuple<int, int, int>> edges = {make_tuple(1, 2, 5), make_tuple(1, 4, 7), make_tuple(1, 3, 3), make_tuple(3, 4, 1), 
                                            make_tuple(2, 4, 3), make_tuple(2, 5, 2), make_tuple(4, 5, 2)};

    // Starting node
    int x = 1;

    vector<int> dis = bellman_ford(x, n, edges);

    for(int i=1; i<=n; i++){
        printf("Shortest Distance from %d to %d is %d\n", x, i, dis[i]);
    }

    return 0;
}