// [น้มุ] 16953น๘ : a กๆ b [c/c++]
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string a, b;
//    int count = 1;
//    cin >> a >> b;
//
//    while (1) {
//        if (a == b) {
//            cout << count;
//            break;
//        }
//        else if (stoi(a) > stoi(b)) {
//            cout << -1;
//            break;
//        }
//        else {
//            if (b[b.size() - 1] == '1') {
//                b.pop_back();
//                count++;
//            }
//            else {
//                int temp = stoi(b);
//                if (temp % 2 == 0) {
//                    b = to_string(temp / 2);
//                    count++;
//                }
//                else {
//                    cout << -1;
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}