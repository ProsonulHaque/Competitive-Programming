/*
    ***************************
    *    Author: rafa45       *
    *    Date: 27 Dec 2021    *
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

bool compare(const int a, const int b){
    return a<b;
}

int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int> (3));
        vector<int> ans(n);
        string s;

        for(int i=0; i<n; i++) cin >> v[i][0];
        cin >> s;
        for(int i=0; i<n; i++) v[i][1] = s[i]-'0';
        for(int i=0; i<n; i++) v[i][2] = i;

        sort(all(v), [](vector<int> v1, vector<int> v2){return (v1[1]==v2[1] ? v1[0]<v2[0] : v1[1]<v2[1]);});

        for(int i=0; i<n; i++){
            int indx = v[i][2];
            ans[indx] = i+1;
        }

        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }


    return 0;
}