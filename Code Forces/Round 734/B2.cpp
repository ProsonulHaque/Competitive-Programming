/*
    ***************************
    *    Author: rafa45       *
    *    Date: 23 Jul 2021    *
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
        int n, k; cin >> n >> k;
        
        vector<int> seq(n), res(n);

        unordered_map<int, int> appearance;
        
        for(int i=0; i<n; i++){
            cin >> seq[i];
            appearance[seq[i]]++;
        } 

        int extra = 0;

        for(auto elem:appearance){
            if(elem.second > k) extra += elem.second-k;
        }

        int each = (n - extra)/k;

        for(int color=1; color<=k; color++){
            set<int> s;
            int count=0; 
            for(int i=0; i<n; i++){
                if(count == each) break;
                int element = seq[i];
                if(res[i] == 0 && s.count(element) == 0){
                    res[i] = color;
                    s.insert(element);
                    count++;
                }
            }
        }

        for(int elem:res) cout << elem << " ";
        cout << endl;
    }


    return 0;
}