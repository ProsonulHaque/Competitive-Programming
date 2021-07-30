#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=0, i=0, j=0;
    int flag=1, cnt=0;

    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);

    for (i = 0; i < n; i++){
        cin >> a[i];
        d[i] = a[i];
    }
    for (i = 0; i < n; i++){
        cin >> b[i];
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if(a[j]!=0 && a[j]!=b[i]){
                c[j] = b[i];
                a[j] = 0;
                cnt += 1;
                break;
            }
        }
    }

    if(cnt==n){
        cout << "Yes" << "\n";
        for (i = 0; i < n; i++){
            cout << c[i] << " ";
        }
    }
    else{
        cout << "No" << "\n";
    }
    /*
    for (i = 0; i < n; i++){
        if(d[i]==c[i]){
            cout << "No" << "\n";
            flag = 0;
            break;
        }
    }

    if(flag==1){
        cout << "Yes" << "\n";
        for (i = 0; i < n; i++){
            cout << c[i] << " ";
        }
    }
    */
}

int main(){

    solve();

    return 0;
}

