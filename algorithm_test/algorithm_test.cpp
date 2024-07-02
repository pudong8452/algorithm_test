#include <iostream>
#include <vector>
#include <cstring> // For memset

using namespace std;

struct V {
    int a;
    int b;
    int c;
};
V v[300000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i].a >> v[i].b >> v[i].c;
    }

    vector<int> able(n, 0);
    // 인접한 화분끼리 겹치는 숫자가 있는지 확인하여 able 배열 갱신
    for (int i = 0; i < n - 1; i++) {
        if (v[i].a == v[i + 1].a || v[i].a == v[i + 1].b || v[i].a == v[i + 1].c ||
            v[i].b == v[i + 1].a || v[i].b == v[i + 1].b || v[i].b == v[i + 1].c ||
            v[i].c == v[i + 1].a || v[i].c == v[i + 1].b || v[i].c == v[i + 1].c) {
            able[i + 1] = 1;
        }
    }

    vector<int> counts;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (able[i] == 1) {
            count++;
        }
        else if (count > 0) {
            counts.push_back(count);
            count = 0;
        }
    }
    if (count > 0) {
        counts.push_back(count);
    }

    int total_breaks = 0;
    for (int i = 0; i < counts.size(); i++) {
        total_breaks += counts[i];
    }

    int total_count = counts.size() - 1 + n - total_breaks;

    cout << total_count << endl;
    return 0;
}
