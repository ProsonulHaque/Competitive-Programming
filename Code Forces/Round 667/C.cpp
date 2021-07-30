/*
Author: rafa45
Date: 24 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
const int MXN=200002;
const ll maxll = (ll) 1e18;

int main()
{
    int t, x, y, n;
    cin >> t;

    while(t--){
        cin >> n >> x >> y;

        bool found = false;
        int d = 1;

        while(!found){
            vector<int> v;
            int i, val;

            for(i=0; i<n; i++){
                val = y-i*d;
                if(val==x) found=true;
                if(val>0) v.push_back(val);
                else break;
            }

            if(found){
                for(i=1; v.size()<n; i++){
                    v.push_back(y+i*d);
                }
                for(auto var:v){
                    printf("%d ", var);
                }
                printf("\n");
            }

            d++;
        }
    }

    return 0;
}
