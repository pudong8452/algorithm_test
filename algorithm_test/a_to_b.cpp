// [น้มุ] 16953น๘ : A กๆ B [C/C++]
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    int count = 1;
    cin >> A >> B;

    while (1) {
        if (A == B) {
            cout << count;
            break;
        }
        else if (stoi(A) > stoi(B)) {
            cout << -1;
            break;
        }
        else {
            if (B[B.size() - 1] == '1') {
                B.pop_back();
                count++;
            }
            else {
                int temp = stoi(B);
                if (temp % 2 == 0) {
                    B = to_string(temp / 2);
                    count++;
                }
                else {
                    cout << -1;
                    break;
                }
            }
        }
    }
    return 0;
}