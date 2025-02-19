#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> a) {
    int answer = 0;
    int len = a.size();
    vector<int> left(len);
    vector<int> right(len);

    int MIN = a[0];
    for (int i = 0; i < len; i++) {
        if (MIN > a[i]) MIN = a[i];
        left[i] = MIN;
    }

    MIN = a[len - 1];
    for (int i = len - 1; i >= 0; i--) {
        if (MIN > a[i]) MIN = a[i];
        right[i] = MIN;
    }
    
    cout << a[0] << " " << left[0] << " " << right[0] << '\n';
    cout << a[len-1] << " " << left[len-1] << " " << right[len-1] << "\n";

    for (int i = 0; i < len; i++) {
        if (a[i] <= left[i] || a[i] <= right[i]) answer++;
    }
    return answer;
}
