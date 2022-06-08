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
#define case cout << "Case " << case_number << ": ";\
case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
int case_number = 1;

/*---------------------------------------------------------------------------------------------------*/




void solve()
{
    long long s , x , y;
    cin >> s;
    long long root = ceil(sqrt(s*1.0));
    long long extra = root*root -s;
    if(extra < root){
        y = root;
        x = extra +1;
    }
    else{
        x = root;
        y = s - (root-1)*(root-1);
    }
    if(root% 2 == 0){
        long long t = x;
        x = y;
        y = t;
    }

    cout << x << " " << y;

}

int main()
{
    int n; cin >> n;
    while(n--){
        fast;
        case;
        solve();
        nl;
    }
    return 0;
}

