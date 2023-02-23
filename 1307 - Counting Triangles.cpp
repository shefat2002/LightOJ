#include <bits/stdc++.h>
using namespace std;
#define ll      long long
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void solve()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++) cin >> a[i];
    int cnt = 0;
    sort(a, a+n);
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1; j < n ; j++){
            int l = a[i], r = a[j];
            int mid = (l+r)-1;
            int ar = upper_bound(a, a+n, mid)-a;
            if(ar -1> j) cnt += ar-1-j;

        }
    }
    cout << cnt;
}

int main()
{
    int t; 
    cin >> t; while(t--){case;solve();nl;} // Case 
    return 0;
}

