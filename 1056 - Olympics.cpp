#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define case                cout << "Case " << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int case_number = 1;



void solve()
{
    double a, b;
    scanf("%lf : %lf",&a,&b);
    // cout << a << ' ' << b;nl;
    double r = sqrt(a*a+b*b)/2.0;
    double theta = acos(((2.0*r*r)-(b*b))/(2.0*r*r));
    double x = 400.0/(a*2+2*r*theta);
    // cout << r<< ' ' << theta << ' ' <<x;nl;
    cout << fixed << setprecision(15) << a*x << ' ' << b*x;
}

int main()
{   
    // fast;
    int n;
    cin >> n; while(n--){case;solve();nl;} // Case 

}