#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int i=0, cnt=1;
    cin >> s;

    sort(s.begin(), s.end());

    for(i=0; i<s.size()-1; i++){
        if(s[i+1]!=s[i]){
            cnt += 1;
        }
    }

    if(cnt%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

int main(){

    solve();

    return 0;
}
