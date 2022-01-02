/*
    ***************************
    *    Author: rafa45       *
    *    Date: 28 Dec 2021    *
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

        vector<vector<int>> v(n, vector<int> (3));
        unordered_set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i][0] >> v[i][1];
        }

        sort(all(v), [](vector<int> v1, vector<int> v2){
            return (v1[1] - v1[0]) < (v2[1] - v2[0]);
        });

        for (int i = 0; i < n; i++)
        {
            vector<int> row = v[i];

            for(int j=row[0]; j<=row[1]; j++){
                if(s.count(j) == 0){
                    s.insert(j);
                    v[i][2] = j;
                    break;
                }
            }
        }
        
        for(int i=0; i<n; i++)
        {
            cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;
        }
        cout << endl;
    }


    return 0;
}