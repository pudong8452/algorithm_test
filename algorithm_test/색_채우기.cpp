//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> node(1001);
//vector<int> color(1001);
//vector<int> visit(1001);
//
//bool DFS(int here, int color_1) {
//    // �湮ó��, �� ĥ�ϱ�
//    visit[here] = 1;
//    color[here] = color_1;
//
//    // �� �� �ִ� ��� ��� �湮
//    for (int i : node[here]) {
//        // �湮���� �ʾ��� ��
//        if (!visit[i]) {
//            // ���� ��� �湮 -> ��ġ�� �� ���� ��
//            if (!DFS(i, -color_1)) {
//                return false;
//            }
//        }
//        // (-1 -1), (1 1)�� ���� ��
//        else if (color[i] == color[here]) {
//            return false;
//        }
//    }
//    // ��� ������ ��
//    return true;
//}
//
//int main() {
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N, M;
//        cin >> N >> M;
//
//        for (int i = 0; i < N + 1; ++i) {
//            node[i].clear();
//            visit[i] = 0;
//            color[i] = 0;
//        }
//
//        for (int i = 0; i < M; ++i) {
//            int x, y;
//            cin >> x >> y;
//            node[x].push_back(y);
//            node[y].push_back(x); // ����� �׷����̹Ƿ� �ݴ� ���⵵ �߰�
//        }
//
//        bool isPossible = true;
//        for (int i = 1; i <= N; ++i) {
//            // ��� �������� �� ���� ����
//            if (!visit[i]) {
//                if (!DFS(i, 1)) {
//                    isPossible = false;
//                    break;
//                }
//            }
//        }
//
//        if (isPossible) {
//            cout << "possible\n";
//        }
//        else {
//            cout << "impossible\n";
//        }
//    }
//    return 0;
//}
