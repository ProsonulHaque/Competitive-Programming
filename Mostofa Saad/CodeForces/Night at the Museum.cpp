#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int i=0, d=0, cnt=0;
    string s;

    cin >> s;

    d = abs('a'-s[i]);
    cnt = min(d, 26-d);

    for(i=0; i<s.size()-1; i++){
        d = abs(s[i]-s[i+1]);
        cnt += min(d, 26-d);
    }

    cout << cnt << endl;

    return 0;
}
