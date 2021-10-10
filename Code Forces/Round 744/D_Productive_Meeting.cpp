/*
    ***************************
    *    Author: rafa45       *
    *    Date: 28 Sep 2021    *
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

        priority_queue<pair<int,int>> pq;
        vector<pair<int,int>> res;

        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x>0)
                pq.emplace(x, i+1);
        }

        while(pq.size()>1){
            pair<int, int> p1 = pq.top();
            pq.pop();
            
            pair<int, int> p2 = pq.top();
            pq.pop();
            
            res.emplace_back(p1.second, p2.second);
            
            if(p1.first>1)
                pq.emplace(p1.first-1, p1.second);
            if(p2.first>1)
                pq.emplace(p2.first-1, p2.second);
        }

        cout << res.size() << endl;
        
        for(int i=0; i<res.size(); i++)
            cout << res[i].first << " " << res[i].second << endl;
    }


    return 0;
}