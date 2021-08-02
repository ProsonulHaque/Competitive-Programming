/*
    ***************************
    *    Author: rafa45       *
    *    Date: 01 Aug 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n; cin >> n;
        vector<int> a(n), b(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int mini = n;
        vector<int> best;

        for(int i=0; i<n; i++){
            int val = (a[0]+b[i])%n;
            if(val < mini){
                mini = val;
                best.clear();
            }
            if(val == mini) best.push_back(i);
        }

        vector<vector<int>> v;
        for(int i:best){
            vector<int> temp(n);
            for(int j=0; j<n; j++) temp[j] = (a[j]+b[(i+j)%n])%n;
            v.push_back(temp); 
        }

        vector<int> ans = *min_element(v.begin(), v.end());

        for(int x:ans) cout << x << " ";
        cout << endl;
    }


    return 0;
}