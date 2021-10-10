/*
    ***************************
    *    Author: rafa45       *
    *    Date: 14 Sep 2021    *
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


    int tc;
    cin >> tc;


    while(tc--){
        int n; 
        string s;
        cin >> n >> s;

        vector<int> id;

        for(int i=0; i<n; i++)
            if(s[i] == '2') id.push_back(i);

        int k = id.size();

        if(k == 1 || k == 2){
            cout << "NO\n";
            continue;
        }

        vector<string> v(n, string(n, '='));

        for(int i=0; i<n; i++) v[i][i] = 'X';

        for(int i=0; i<k; i++){
            int x = id[i];
            int y = id[(i+1)%k];
            v[x][y] = '+'; 
            v[y][x] = '-'; 
        }

        cout << "YES\n";

        for(int i=0; i<n; i++)
            cout << v[i] << endl; 
    }


    return 0;
}