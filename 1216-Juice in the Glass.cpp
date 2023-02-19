/*
    A         r1        E            G
    O-------------------O------------O
    |                   |     d1    /
    |                   |          /
    |                   |         /
    |                   |M       /
    O-------------------O-------O N
    |         r3        |  d2  /
    |                  h|     /
    |                   |    /
    |p                  |   /
    |                   |a /
    |                   |^/
    |                   |/
    O-------------------O
    B         r2        C


    To solve it, me must know how to calculate the volume of a Conical Frustum.

The volume of a conical frustum, V = (π/3) * height * (radius1² + radius2² + (radius1 * radius2)). So, if we know the 2 values of the radii, we can calculate volume of the juice. The only thing we need to figure out is, what is r3, the radius of glass at point p. Since, already r2 and r1 is given, we can find out the value of r3 by doing some tri-gonometric calculations.

In the figure:

In △EGC, 
    tan(α) = EG/EC
           = (r1-r2)/h ...(i)

In △MNC,
    tan(α) = MN/MC
           = (r3-r2)/p
    => r3 - r2 = p*tan(α)
    => r3 = p*tan(α) + r2 
          = p*(r1-r2)/h + r2 [From, (i)] 
Now we can just simply plugin the value of r3 in our formula, V = (π/3) * p * (r3² + r2² + (r3 * r2)).

*/

//Please try yourself before watch this code

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pi (2*acos(0))

int main()
{
    int n , i = 1; cin >> n;
    while(n--){
        double r1 , r2 , r3 , h , p , V;
        cin >> r1 >> r2 >> h >> p;
        cout << "Case " << i << ": ";
        i++;
        r3 = p*((r1-r2)/h) + r2;
        V = (pi/3)*p*(r3*r3+r2*r2+(r3*r2));
        cout << setprecision(15) << V ;

        cout << nl;
    }
    return 0;
}



