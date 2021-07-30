#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size()==1) cout << 0;

    else{
        int i=0;

        for(i=0; i<s.size()-1; i++){
            if(s[i]=='V' && s[i+1]=='V'){
                s[i+1]='K';
                break;
            }
            if(s[i]=='K' && s[i+1]=='K' && s[i-1]!='V'){
                s[i]='V';
                break;
            }
        }

        int cnt = 0;
        for(i=0; i<s.size()-1; i++){
            if(s[i]=='V'&&s[i+1]=='K'){
                cnt++;
            }
        }
        cout << cnt;
    }

    return 0;
}
