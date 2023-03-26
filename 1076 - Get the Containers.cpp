#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long
#define nl                  cout << "\n";
#define case                cout << "Case " << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int case_number = 1;
int n,k;

bool ok(int a[], int x)
{
    int p = 1,s=0;
    for(int i= 0; i < n ; i++){
        
        s+=a[i];
        if(s>x){
            p++;
            s = a[i];
        }
    }
    // cout << p;nl;
    if(p<=k) return true;
    return false;
}

int binary_search(int a[], int l, int r)
{
    int ans=0;
    while(l<=r){
        int mid = (l+r)/2;
        if(ok(a,mid)){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return ans;
}

void solve()
{
    cin >> n>> k;
    int a[n];
    int mx = 0, sum =0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mx = max(mx,a[i]);
        sum+=a[i];
    }
    cout << binary_search(a,mx,sum);
    
}

int main()
{   
    int n; 
    cin >> n; while(n--){case;solve();nl;} // Case 

}