/*
    ***************************
    *    Author: rafa45       *
    *    Date: 06 Sep 2021    *
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


int main()
{
    IOS


    int n; cin >> n;

    vector<pair<int, int>> points(n);

    for(int i=0; i<n; i++){
        int x, y; cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    int cnt = 0;

    for(int i=0; i<n; i++){
        int x = points[i].first;
        int y = points[i].second;
        
        bool left = false, right=false;
        bool up=false, down=false;

        for(int j=0; j<n; j++){
            int xp = points[j].first;
            int yp = points[j].second;

            if(xp<x && yp==y) left = true;
            if(xp>x && yp==y) right = true;
            if(xp==x && yp>y) up = true;
            if(xp==x && yp<y) down = true;
        }

        if(left && right && up && down) cnt++;
    }

    cout << cnt;


    return 0;
}