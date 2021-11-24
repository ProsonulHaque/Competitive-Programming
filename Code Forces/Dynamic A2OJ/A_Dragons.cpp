/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Nov 2021    *
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


    int s, n;
    cin >> s >> n;

    vector<vector<int>> v(n, vector<int>(2));

    for(int i=0; i<n; i++) 
        cin >> v[i][0] >> v[i][1]; 
    
    sort(all(v));

    string ans = "YES";

    for(int i=0; i<n; i++){
        if(s<=v[i][0]){
            ans = "NO";
            break;
        }

        s += v[i][1];
    }

    cout << ans;


    return 0;
}