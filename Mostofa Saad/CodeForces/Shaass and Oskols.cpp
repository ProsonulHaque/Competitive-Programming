/*
Author: rafa45
Date: 24 Sep 2020
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0, m=0, i=0;
    cin >> n;
    int birds[n];

    for(i=0; i<n; i++){
        cin >> birds[i];
    }

    cin >> m;

    int pos[m][2];

    for(i=0; i<m; i++){
        cin >> pos[i][0] >> pos[i][1];
    }

    for(i=0; i<m; i++){
        //Current Position: pos[i][0]-1
        if(pos[i][0]-2>=0){
            birds[pos[i][0]-2] += pos[i][1]-1;
        }
        if(pos[i][0]<n){
            birds[pos[i][0]] += birds[pos[i][0]-1]-pos[i][1];
        }
        birds[pos[i][0]-1] = 0;
    }

    for(i=0; i<n; i++){
        cout << birds[i] << endl;
    }

    return 0;
}
