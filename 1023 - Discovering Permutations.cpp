#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

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
    file();
    int n; 
    cin >> n; while(n--){
        case;nl;
        solve();
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
