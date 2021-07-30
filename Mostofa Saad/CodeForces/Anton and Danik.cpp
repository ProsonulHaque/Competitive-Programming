#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int n, ant=0, dan=0;
    cin >> n;
    cin >> s;

    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            ant += 1;
        }
        else{
            dan += 1;
        }
    }
    if(ant>dan){
        cout << "Anton";
    }
    else if(dan>ant){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    cout << "\n";
}

int main(){

    solve();

    return 0;
}
