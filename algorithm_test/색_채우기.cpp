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
//    // 방문처리, 색 칠하기
//    visit[here] = 1;
//    color[here] = color_1;
//
//    // 갈 수 있는 노드 모두 방문
//    for (int i : node[here]) {
//        // 방문하지 않았을 때
//        if (!visit[i]) {
//            // 다음 노드 방문 -> 겹치는 게 나올 때
//            if (!DFS(i, -color_1)) {
//                return false;
//            }
//        }
//        // (-1 -1), (1 1)이 나올 때
//        else if (color[i] == color[here]) {
//            return false;
//        }
//    }
//    // 모두 만족할 때
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
//            node[y].push_back(x); // 양방향 그래프이므로 반대 방향도 추가
//        }
//
//        bool isPossible = true;
//        for (int i = 1; i <= N; ++i) {
//            // 모든 정점에서 한 번씩 돌기
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
