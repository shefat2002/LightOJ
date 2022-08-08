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

int arr[1011];
vector<pair<int, int >>a;

bool compare(pair<int,int> a, pair<int,int> b)
{
    if(a.second != b.second){
        return a.second < b.second;
    }
    else{
        return a.first >  b.first;
    }
}

void precompute()
{
    for(int i = 1 ; i <= 1010 ; i++){
        for(int j = i ; j <= 1010; j+=i){
            arr[j]++;
        }
    }
    for(int i = 1 ; i <=1000 ; i++){
        a.push_back(make_pair(i, arr[i]));
    }
    sort(a.begin(), a.end(), compare);
}

void solve()
{
    int n; cin >> n;
    cout << a[n-1].first;
    
}


int main()
{
    file();
    int n; cin >> n;
    precompute();
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
