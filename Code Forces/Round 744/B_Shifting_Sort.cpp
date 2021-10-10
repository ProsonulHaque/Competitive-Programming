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


void cyclicSort(vector<int> &v, int left, int right, int offset){
    int d = right-left+1;
    vector<int> vs(d);

    int indx = 0;

    for(int i=left; i<=right; i++){
        vs[(indx-offset+d)%d] = v[i];
        indx++;
    }

    indx = 0;

    for(int i=left; i<=right; i++){
        v[i] = vs[indx++];
    }
}


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        vector<tuple<int, int, int>> ans;

        for(int i=0; i<n; i++)
            cin >> a[i];

        b = a;

        sort(all(b));

        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                int j;

                for(j=i+1; j<n; j++){
                    if(a[j] == b[i]){
                        break;
                    }
                }

                cyclicSort(a, i, j, j-i);
                
                ans.push_back(make_tuple(i+1, j+1, j-i));
            }
        }

        cout << ans.size() << endl;

        for(int i=0; i<ans.size(); i++){
            cout << get<0>(ans[i]) << " " << get<1>(ans[i]) << " " << get<2>(ans[i]) << endl;
        }
    }


    return 0;
}