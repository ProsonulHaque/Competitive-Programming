#include<bits/stdc++.h>
using namespace std;

string ssort(string s, int n, int m){
    int i, j, tmp, largest;

    for (i=n; i<m; i++){
        largest = s[i];
        tmp = -1;

        for(j=i+1; j<=m; j++){
            if (s[j]>largest) {
                largest = s[j];
                tmp = j;
            }
        }

        if (tmp!=-1){
            s[tmp] = s[i];
            s[i] = largest;
        }
    }

    return s;
}

int main(){
	int t, n, m;
	cin >> t;
	while(t--){
        string s;
        cin >> s >> n >> m;
        s = ssort(s, n, m);
        cout << s << endl;
	}
	return 0;
}
