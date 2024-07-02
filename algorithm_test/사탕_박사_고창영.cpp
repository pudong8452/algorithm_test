#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        char arr[401][401];
        int cnd = 0;
        int count = 0;

        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        // За
        for (int i = 0; i < n; i++) {
            count = 0;
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == '>') {
                    count = 1;
                }
                else if (count == 1 && arr[i][j] == 'o') {
                    count = 2;
                }
                else if (count == 2 && arr[i][j] == '<') {
                    cnd++;
                    count = 0;
                }
                else {
                    count = 0;
                }
            }
        }
        // ї­
        for (int i = 0; i < m; i++) {
            count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j][i] == 'v') {
                    count = 1;
                }
                else if (count == 1 && arr[j][i] == 'o') {
                    count = 2;
                }
                else if (count == 2 && arr[j][i] == '^') {
                    cnd++;
                    count = 0;
                }
                else {
                    count = 0;
                }
            }
        }
        cout << cnd << endl;
    }
    return 0;
}
