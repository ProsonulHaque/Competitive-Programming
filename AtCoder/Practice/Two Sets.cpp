#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int n=0, i=0;
    cin >> n;

    if(n*(n+1)/2%2){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    vector<int> v1, v2;

    if(n%2){
        //Odd n
        v2.push_back(n);
        for(i=1; i<=(n-1)/2; i++){
            if(i%2){
                v1.push_back(i);
                v1.push_back(n-i);
            }
            else{
                v2.push_back(i);
                v2.push_back(n-i);
            }
        }
    }
    else{
        //Even n
        for(i=1; i<=n/2; i++){
            if(i%2){
                v1.push_back(i);
                v1.push_back(n+1-i);
            }
            else{
                v2.push_back(i);
                v2.push_back(n+1-i);
            }
        }
    }

    cout << v1.size() << endl;
    for(i=0; i<v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    cout << v2.size() << endl;
    for(i=0; i<v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}
