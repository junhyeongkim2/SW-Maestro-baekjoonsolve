#include <bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    vector<pair<int,int>>v(26);

    for(int i = 0 ; i < 52; i++){
        char c;
        cin >> c;
        int now = c - 'A';
        if(v[now].first==0)
            v[now].first = i + 1;
        else
            v[now].second = i + 1;
    }

    int cnt = 0;
    for(int i = 0 ; i < 26; i++){
        for(int j = 0 ; j < 26; j++){
            if (v[i].first < v[j].first && v[j].first < v[i].second && v[i].second < v[j].second)
                cnt++;
        }
    }

    cout << cnt;

}

