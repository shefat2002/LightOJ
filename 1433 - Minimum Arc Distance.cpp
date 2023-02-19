#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": ";\
case_number++;
int case_number = 1;

double theta(double a , double b , double c)
{
    return acos((b*b+c*c-a*a)/(2*b*c));
}

double R(double x1 , double y1 , double x2 , double y2)
{
    return sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
}

void solve()
{
    double ox , oy , ax , ay , bx , by;
    cin >> ox >> oy >> ax >> ay >> bx >> by;
    double OA = R(ax , ay , ox , oy);
    double OB = R(bx , by , ox , oy);
    double AB = R(ax , ay , bx , by);
    double c = theta(AB , OA , OB);
    double S = OA*c;
    cout <<fixed << setprecision(10) <<  S;

}

int main()
{
    int n; cin >> n;
    while(n--){
        case;
        solve();
        nl;
    }
    return 0;
}

