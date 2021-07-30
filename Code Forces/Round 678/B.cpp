/*
Author: rafa45
Date: 24 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
set<int> s;

void SieveOfEratosthenes(int n)
{
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}

	vector<int> v;

	for (int p=2; p<=n; p++)
	if (prime[p])
        s.insert(p);
}

int main()
{
	SieveOfEratosthenes(20000);

    int t, i, j, n, p, q;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n][n];

        for(auto it=s.begin(); it!=s.end(); it++){
            if(*it-(n-1)>0 && s.count(*it-(n-1))==0){
                p=*it-(n-1);
                break;
            }
        }

        for(auto it=s.begin(); it!=s.end(); it++){
            if(*it-(n-1)*p>0 && s.count(*it-(n-1)*p)==0){
                q=*it-(n-1)*p;
                break;
            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==n-1 && j==n-1)
                    a[i][j]=q;
                else if(i==n-1 || j==n-1)
                    a[i][j]=p;
                else a[i][j]=1;
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
	return 0;
}

