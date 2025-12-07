#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll m,n,k;
int main(){
    cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n>>k;
    vector<vector<ll>>a(m+1,vector<ll>(n+1,0)),U(m+1,vector<ll>(n+1,0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int j=1;j<=n;j++){
        for(int i=1;i<=m;i++){
            U[i][j] = U[i-1][j] + a[i][j];
        }
    }

    // prefCols[p][j] = prefix over columns of U[p][*]
    vector<vector<ll>> prefCols(m+1, vector<ll>(n+1, 0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            prefCols[i][j] = prefCols[i][j-1] + U[i][j];
        }
    }

    // diagPrefU for down-right diagonals: diagPrefU[i][j] = U[i][j] + diagPrefU[i-1][j-1]
    vector<vector<ll>> diagPrefU(m+1, vector<ll>(n+1, 0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            diagPrefU[i][j] = U[i][j] + diagPrefU[i-1][j-1];
        }
    }

    ll answer = LLONG_MIN;
    for(int r=1; r<=m-k+1; ++r){
        for(int c=1; c<=n-k+1; ++c){
            int rowU = r + k - 1;
            ll first = prefCols[rowU][c + k - 1] - prefCols[rowU][c - 1];
            int x1 = r - 1, y1 = c;
            int x2 = r + k - 2, y2 = c + k - 1;
            ll second = 0;
            if(x2 >= x1 && y2 >= y1){
                ll s2 = diagPrefU[x2][y2];
                ll s1 = 0;
                if(x1-1 >= 0 && y1-1 >= 0) s1 = diagPrefU[x1-1][y1-1];
                second = s2 - s1;
            }

            ll total = first - second;
            answer = max(answer, total);
        }
    }

    cout << answer << '\n';
    return 0;
}

