#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i=0, j=0, n=0;
    string k;

    cin >> k;

    vector<int> a;
    vector<int> b;

    for(i=0; i<k.size(); i++)
    {
        if(k[i]=='0'){
            a.push_back(0);
            b.push_back(0);
        }
        if(k[i]=='1'){
            a.push_back(1);
            b.push_back(0);
        }
        if(k[i]=='2'){
            a.push_back(1);
            b.push_back(1);
        }
        if(k[i]=='3'){
            a.push_back(2);
            b.push_back(1);
        }
        if(k[i]=='4'){
            a.push_back(2);
            b.push_back(2);
        }
        if(k[i]=='5'){
            a.push_back(3);
            b.push_back(2);
        }
        if(k[i]=='6'){
            a.push_back(3);
            b.push_back(3);
        }
        if(k[i]=='7'){
            a.push_back(4);
            b.push_back(3);
        }
        if(k[i]=='8'){
            a.push_back(4);
            b.push_back(4);
        }
        if(k[i]=='9'){
            a.push_back(6);
            b.push_back(3);
        }
    }

    for(i=0; i<a.size(); i++)
    {
        cout << a[i];
    }

    cout << " ";

    for(i=0; i<b.size(); i++)
    {
        cout << b[i];
    }

    cout << "\n";
}

int main()
{
    int t=0;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
