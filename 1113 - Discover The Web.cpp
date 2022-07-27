#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    string s , in;
    stack <string> visit, history;
    visit.push("http://www.lightoj.com/");

    while(cin >> s && s !="QUIT"){
        if(s == "VISIT"){
            cin >> in;
            if(visit.empty()) cout << "Ignored" ;
            else{
                history.push(visit.top());
                visit.pop();
                while(!visit.empty()) visit.pop();
                visit.push(in);
            }
            cout << visit.top();
        }
        else if(s == "BACK"){
            if(history.empty()){
                cout << "Ignored" ;
            }
            else{
                visit.push(history.top());
                history.pop();
                cout << visit.top();
            }
        }
        else if(s == "FORWARD"){
            if(visit.size() < 2){
                cout << "Ignored";
            }
            else{
                history.push(visit.top());
                visit.pop();
                cout << visit.top();
            }
        }
        cout << endl;
    }


}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        case;
        nl;
        solve();
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
