#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define case                cout << "Case " << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int case_number = 1;
int lowerbound(int a[], int n, int x)
{
    int l =0 , r = n-1;
    while(l<r){
        
        int mid = l+(r-l)/2;
        if(a[mid]>=x){
            r = mid;
        }
        else l = mid+1;
    }
    if(l <n && a[l] < x){
        l++;
    }
    return l;
}

int upperbound(int a[], int n, int x)
{
    int l =0 , r = n-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(a[mid]<=x){
            l = mid+1;
        }
        else r = mid;
    }
    if(l <n && a[l] <= x){
        l++;
    }
    return l;
}

void solve()
{
    int n,q;
    cin >> n>>q;
    int a[n];
    for(int i = 0; i < n ; i++)cin >> a[i];
    for(int i = 0 ; i < q ;i++){
        nl;
        int x,y;cin >> x >> y;
        int l =lowerbound(a,n,x);
        int u =upperbound(a,n,y);
        cout << u-l;
    }
}

int main()
{   
    fast;
    int n;
    cin >> n; while(n--){case;solve();nl;} // Case 

}