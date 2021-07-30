#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int conv(char c){
    if(c=='1') return 1;
    else if(c=='2') return 2;
    else if(c=='3') return 3;
    else return 4;
}

int main(){
    int i=0;
    ll cal=0, a[4];
    string s;

    for(i=0; i<4; i++)
        cin >> a[i];

    cin >> s;

    for(i=0; i<s.size(); i++){
        cal += a[conv(s[i])-1];
    }

    cout << cal << endl;
    return 0;
}
