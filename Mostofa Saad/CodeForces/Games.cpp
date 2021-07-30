#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int i=0, j=0, cnt=0;
    int t=0;

    cin >> t;

    int uni[t][2];

    for(i=0; i<t; i++){
        cin >> uni[i][0] >> uni[i][1];
    }

    for(i=0; i<t-1; i++){
        for(j=i+1; j<t; j++){
            if(uni[i][0]==uni[j][1]) cnt += 1;
            if(uni[i][1]==uni[j][0]) cnt += 1;
        }
    }

    cout << cnt << endl;

    return 0;
}
