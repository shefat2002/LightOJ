#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n , m; cin >> n >> m;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    for(int i = 0 ; i < m ; i++){
        char c;
        cin >> c;
        if(c == 'S'){
            int d; cin >> d;
            for(int i = 0; i < v.size()  ;i++){
                v[i] += d;
            }
        }
        else if(c == 'M'){
            int d; cin >> d;
            for(int i = 0; i < v.size()  ;i++){
                v[i] *= d;
            }
        }
        else if(c == 'D'){
            int d; cin >> d;
           for(int i = 0; i < v.size()  ;i++){
                v[i] /= d;
            }
        }
        else if(c == 'P'){
            int x , y; cin >> x >> y;
            swap(v[x] , v[y]);
        }
        else if(c == 'R'){
            reverse(v.begin() , v.end());
        }
    }
    for(auto it: v){
        cout << it << ' ';
    }
}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        case;
        nl;
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
