#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/



void solve()
{
    int n , m , k;
    cin >> n >> m >> k;
    int a[n][k];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j< k; j++){
            cin >> a[i][j];
        }
    }
    int p; cin >> p;
    int x[p];
    for(int i = 0 ; i< p; i++){
        cin >> x[i];
    }
    bool mark = false, yes = false , no = true;
    for(int i = 0 ; i < n ; i++){
        mark = false;
        for(int j = 0 ; j< k; j++){
            yes = false ; no = true;
            for(int l = 0 ; l < p ; l++){
                if(x[l] == abs(a[i][j])){
                    no = false;
                    yes = true;
                }
            }
            if((a[i][j] <0 && no)||(a[i][j] >0 &&yes)){
                mark = true;
            }
        }
        if(mark == false) break;
    }
    if(mark) cout << YES;
    else cout << NO;

    
}


int main()
{
    file();
    int n; 
    //solve();
    //cin >> n; while(n--){solve();nl;}     // CF
    cin >> n; while(n--){case;solve();nl;}  // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
