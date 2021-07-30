#include<bits/stdc++.h>
using namespace std;

int conv(char c){
    if (c=='1') return 1;
    else return 0;
}

void solve(){
    int n=0, k=0;
    int i=0, ans=0;
    string s;

    cin >> n >> k;
    cin >> s;

    int bulb[n];

    for(i=0; i<n; i++){
        bulb[i]=0;
    }

    //step 1
    int cut = 0;
    for(i=0; i<n; i++){
        if(s[i]=='0' && cut<k){
            bulb[i]=-1;
            cut++;
        }
    }

    //step 2
    for(i=0; i<n; i++){
        if(s[i]=='1'){
            bulb[i]=1;
        }
    }
    i=0;
    while(i<n){
        if(bulb[i]==1){
            if(i==0){
                if(bulb[i+1]!=-1){
                    bulb[i+1]=1;
                    i+=2;
                }
            }
            else if(i==n-1){
                if(bulb[i-1]!=-1){
                    bulb[i-1]=1;
                    i+=1;
                }
            }
            else{
                if(bulb[i-1]!=-1){
                    bulb[i-1]=1;
                }
                if(bulb[i+1]!=-1){
                    bulb[i+1]=1;
                }
                i+=2;
            }
        }
        else{
            i++;
        }
    }

    //step 3
    for(i=0; i<n; i++){
        if(conv(s[i])!=bulb[i] && bulb[i]!=-1){
            //bulb[i]=0;
            ans+=1;
        }
    }

    cout << ans << "\n";
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t=0;

    cin >> t;

    while(t--) solve();

    return 0;
}
