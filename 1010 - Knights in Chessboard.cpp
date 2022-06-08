/*

Knights in the board travel in "L" shape.In this problem there are 3 cases mainly considerable.

Case 1: If any of the rows or columns is 1 then there is no "L" shaped formed. So answer is max of row and column.

Case 2: If rows and columns are greater then 2 then just half the total of squares is the answer.

Case 3:(most important case) If either of the row or column is 2 then we just divide the total squares by 8 where 1st 4 blocks can be placed by knights and other 4 blocks are forbidden.The remaining blocks(if any) if less then or equals 4 then remaining blocks are added to the answer and if greater then we add 4 to the answer.

*/




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
    int n , m;
    cin >> n >> m;
    if(n == 1 || m == 1){
        cout << max(n,m);
    }
    else if(n == 2 || m == 2){
        if(((m*n)%8) >=4) cout << ((m*n)/8)*4 +4;
        else cout << ((m*n)/8)*4 +((m*n)%8);
    }
    else cout << (m*n+1)/2;
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

