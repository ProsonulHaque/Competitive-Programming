/*
Author: rafa45
Date: 10 Jul 2021
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


int main()
{
    IOS


    int n;
    cin >> n;

    unordered_map<string, int> m;

    for(int i=0; i<n; i++){
        string team;
        cin >> team;
        m[team]++;
    }

    int maxGoal = 0;
    string winner;

    for(auto team : m){
        if(team.second > maxGoal){
            maxGoal = team.second;
            winner = team.first;
        }
    }

    cout << winner << endl;
    
    return 0;
}