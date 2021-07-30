/*
Author: rafa45
Date: 21 Jul 2021
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

    string line;

    while(true){
        if(!getline(cin, line) || line.empty()) break;
        
        vector<vector<int>> bins(3, vector<int>(3));
        vector<vector<int>> glass(3, vector<int>(3));
        vector<int> s(3, 0);

        istringstream iss(line);
        vector<int> inputs;
        int n = 0, c = 0;

        while(iss >> n) inputs.push_back(n);

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                bins[i][j] = inputs[c++];
                s[j] += bins[i][j]; 
            }
        }

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                glass[j][i] = s[j] - bins[i][j]; 
            }
        }

        ll minCost = 1e18;
        string color = "XYZ";

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(j == i) continue;
                for(int k = 0; k<3; k++){
                    if(k == i || k == j) continue;
                    ll cost = glass[0][i] + glass[1][j] + glass[2][k];
                    if(cost < minCost){
                        minCost = cost;
                        color[i] = 'B';
                        color[j] = 'G';
                        color[k] = 'C'; 
                    }
                    else if(cost == minCost){
                        string testColor = "XYZ";
                        testColor[i] = 'B';
                        testColor[j] = 'G';
                        testColor[k] = 'C';
                        if((color[0] > testColor[0]) 
                        || (color[0] == testColor[0] && color[1] > testColor[1]) 
                        || (color[0] == testColor[0] && color[1] == testColor[1] && color[2] > testColor[2]))
                            color = testColor;
                    } 
                }
            }
        }

        cout << color << " " << minCost << endl;
    }

    return 0;
}