#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
#define MAX_INT 1000002

int case_number = 1;
double mem[MAX_INT];
void fact()
{
    mem[0] = 0;
    for(int i = 1 ; i < MAX_INT ; i++){
        mem[i] = mem[i-1] + log(i);
    }
}

void solve()
{
    int n , b; cin >> n >> b;

    ll a = mem[n]/log(b) +1;
    cout << a;
    
}

int main()
{
    fact();
    int n; cin >> n;
    while(n--){
        case;
        solve();
        nl;
    }
    return 0;
}

