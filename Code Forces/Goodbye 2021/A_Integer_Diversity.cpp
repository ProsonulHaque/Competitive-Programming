/*
    ***************************
    *    Author: rafa45       *
    *    Date: 29 Dec 2021    *
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
        cin >> n;

        unordered_map<int, int> umap;

        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            umap[abs(x)]++;
        }

        int cnt = 0;

        for (auto elem:umap)
        {
            int key = elem.first;
            int val = elem.second;

            if(key == 0 || val < 2) cnt++;
            else cnt += 2;
        }

        cout << cnt << endl;
    }


    return 0;
}