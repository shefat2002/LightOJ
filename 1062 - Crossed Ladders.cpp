#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define nl                  cout << "\n";
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define case                cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;
void file()
{
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}



void solve()
{
    double x,y,h;
    cin >> x >> y >> h;

    double l =0, r = min(x,y);
    int prec = 1e6;
    while(prec--){
        double mid = (l+r)/2;
        double h1 = sqrt((y*y) - (mid*mid));
        double h2 = sqrt((x*x) - (mid*mid));
        double hh = 1/((1/h1) + (1/h2));
        if(hh<=h) r = mid;
        else l = mid;
    }
    cout << setprecision(15) <<  l;

}


int main()
{       
    file();
    //fast;
    int n; 
    //solve();
    //cin >> n; while(n--){solve();}
    cin >> n; while(n--){case;solve();nl;} // Case 

}
