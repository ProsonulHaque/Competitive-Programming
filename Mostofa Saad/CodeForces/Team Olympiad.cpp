/*
Author: rafa45
Date: 4 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);

    int i=0, n=0, x=0;
    vector<int> t1, t2, t3;

    cin >> n;

    for(i=1; i<=n; i++){
        cin >> x;
        if(x==1){
            t1.push_back(i);
        }
        else if(x==2){
            t2.push_back(i);
        }
        else{
            t3.push_back(i);
        }
    }

    int w = min(t1.size(), min(t2.size(), t3.size()));

    cout << w << endl;

    if(w){
        for(i=0; i<w; i++){
            printf("%d %d %d\n", t1[i], t2[i], t3[i]);
        }
    }

    return 0;
}
