#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i=0;
    string s;

    cin >> s;

    int cnt = 1, largest = 1;

    for (i = 0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            cnt += 1;
            if(cnt>largest){
                largest = cnt;
            }
        }
        else{
            cnt = 1;
        }
    }

    cout << largest << "\n";
}

int main(){

    solve();

    return 0;
}
