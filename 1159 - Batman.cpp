#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ld                  long double
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define case                cout << "Case " << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int case_number = 1;

string s1,s2,s3;
int dp[60][60][60];

int lcs(int i,int j , int k)
{
    if(i==-1 || j==-1 || k==-1) return 0;
    if(dp[i][j][k] !=-1) return dp[i][j][k];
    if(s1[i] == s2[j] && s1[i] == s3[k]) return dp[i][j][k] = 1+lcs(i-1,j-1,k-1);
    return dp[i][j][k] = max(lcs(i-1,j,k), max(lcs(i,j-1,k), lcs(i,j,k-1))) ;
}

void solve()
{
    memset(dp,-1,sizeof(dp));
    cin >>s1 >>s2>> s3;
    cout << lcs(s1.size(), s2.size(), s3.size()) -1;
}

int main()
{   
    fast;
    int n; 
    cin >> n; while(n--){case;solve();nl;} // Case 
}
