#include <bits/stdc++.h>

using namespace std;

int n, m;
long long ans = 0;
int arr[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i > m) {
            sum -= arr[i - m];
        }
        sum += arr[i];
        ans = max(ans,sum);
    }

    cout << ans << "\n";

}