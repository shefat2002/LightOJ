#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "Case #" << case_number << ":"; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 100000007
#define YES     cout << "Yes"
#define NO      cout << "No"

int case_number = 1;
//knights move
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

bool is_valid(int a, int b ,int c)
{
    if(a >b&& a>c){
        if(a > b+c) return true;
        return false;
    }
    if(b >a&& b>c){
        if(b > a+c) return true;
        return false;
    }
    if(c >a&& c>a){
        if(c > a+b) return true;
        return false;
    }
}

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
    file();
    int t; 
    //solve();
    //cin >> n; while(n--){solve();nl}       //CF
    cin >> t; while(t--){case;solve();nl;} // Case 
    //cin >> n; while(n--){caseh;solve();nl;} // Case (Case #01: )
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
