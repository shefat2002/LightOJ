#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;

int case_number = 1;

void solve()
{
    string s1 , s2;
    
    getline(cin , s1);
    getline(cin , s2);

    int cnt[30] = {0};

    for(int i = 0; i < s1.size() ; i++){
        if(s1[i] != ' '){
            char c = tolower(s1[i]);
            int m =c-'a';
            cnt[m]++;
        }
    }
    for(int i = 0; i < s2.size() ; i++){
        if(s2[i] != ' '){
            char c = tolower(s2[i]);
            int m =c-'a';
            cnt[m]--;
        }
    }
    bool istrue = true;
    for(int i = 0 ; i < 26; i++){
        if(cnt[i] != 0){
            istrue = false;
            break;

        }
    }
    if(istrue) cout << "Yes";
    else cout << "No";

}

int main()
{
    int n; cin >> n;
    cin.ignore();
    while(n--){
        //fast;
        case;
        solve();
        nl;
    }
    return 0;
}
