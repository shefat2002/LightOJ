#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void file();


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
    if(mark) cout << "Yes";
    else cout << "No";

    
}


int main()
{
    int n; 
    cin >> n; while(n--){case;solve();nl;}

    return 0;
}
