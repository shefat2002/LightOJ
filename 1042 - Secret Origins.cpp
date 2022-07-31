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

string dec_to_bin(int a)
{
    string s;
    while(a){
        if(a%2==1) s.push_back('1');
        else s.push_back('0');
        a /=2;
    }
    s.push_back('0');
    reverse(s.begin(), s.end());
    return s;
}

int bin_to_dec(string a)
{
    int d = 0, n = 1;
    for(int i = a.length() -1 ; i >= 0 ; i--){
        if(a[i] == '1') d+= n;
        n *=2;
    }
    return d;
}

void solve()
{
    int n; cin >> n;
    //cout << dec_to_bin(n) << ' ';
    string binary = dec_to_bin(n);
    next_permutation(binary.begin(), binary.end());
    cout << bin_to_dec(binary); 
}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        //fast;
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
