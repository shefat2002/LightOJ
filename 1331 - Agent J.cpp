#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cctype>
#include <limits>
using namespace std;

#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << i+1 << ": ";\
i++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define max 1000002

double CircleArea(double r , double a)
{
    return 0.5*r*r*a;
}
double theta(double A , double B , double C)
{
    return acos((B*B + C*C - A*A)/(2*B*C));
}

void solve()
{
    double r1 , r2 , r3;
    cin >> r1 >> r2 >> r3;
    double a = r2+r3, b = r1+r3 , c = r1+r2;
    double s= (a+b+c)/2;
    double A = sqrt(s*(s-a)*(s-b)*(s-c));
    //cout << A << endl;
    double C = CircleArea(r1 , theta(a , b , c));
    C += CircleArea(r2 , theta(b , c , a));
    C += CircleArea(r3 , theta(c , a , b));
    //cout << C << endl;
    cout << fixed << setprecision(10) << (A-C);
}

int main()
{
    int n ,i =0; cin >> n;
    while(n--){
        case;
        solve();
        nl;
    }
    return 0;
}

