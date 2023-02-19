#include <bits/stdc++.h>
using namespace std;
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;

int case_number = 1;

void solve()
{
    string s;
    int a;
    cin >> s >> a;
    long long div = 0;
    a = abs(a);

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '-') ++i;
        div = div*10 + (s[i] - '0');
        div %= a;
    }
    if(div == 0) cout << "divisible";
    else cout << "not divisible";
}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        case;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
