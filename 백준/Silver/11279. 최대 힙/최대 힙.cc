#include <bits/stdc++.h>
using namespace std;




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int>pq;

    for (int i = 0; i <n ; ++i) {
        int a;
        cin >> a;
        if( a==0){
            if(pq.size()==0){
                cout << "0"<<"\n";
            }else{
                cout << pq.top()<<"\n";
                pq.pop();
            }
        }else{
            pq.push(a);
        }
        
    }



}
