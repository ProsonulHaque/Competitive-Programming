#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int i=0, up_cnt=0, low_cnt=0;

    cin >> s;



    for(i=0; i<s.size(); i++){
        if(isupper(s[i])){
            up_cnt += 1;
        }
        else{
            low_cnt += 1;
        }
    }

    if(up_cnt<= low_cnt){
        for(i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else{
        for(i=0; i<s.size(); i++){
            s[i] = toupper(s[i]);
        }
        cout << s;
    }
}

int main(){

    solve();

    return 0;
}
