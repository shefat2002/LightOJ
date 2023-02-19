#include <bits/stdc++.h>
using namespace std;
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number= 1;

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
