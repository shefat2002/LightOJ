#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void permute(string s , int n)
{
    do{
        cout << s;nl;
        n--;
    }while(next_permutation(s.begin(), s.end()) && n);
}

void solve()
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, k;
    cin >> n >> k;
    string per;
    for(int i = 0 ; i < n ; i++){
        per.push_back(s[i]);
    }
    permute(per, k);
}

int main()
{
    int n; 
    cin >> n; while(n--){
        case;nl;
        solve();
    }

    return 0;
}

