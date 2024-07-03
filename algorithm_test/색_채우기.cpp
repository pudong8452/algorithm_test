#include <iostream>
#include <vector>

using namespace std;

// 그래프 그리기
// 1. 양방향 그래프로 그려야하고, 노드를 표현하기 위해 vector 사용
// 2. DFS_visit로 방문표시 후 정점마다 0, 1 찍어주기 
// 2-1. 모든 그래프가 이어져있지않으므로 for문으로 visit안한곳 다시 방문
// ( 0이면 첫번째 색, 1이면 두번째 색 )
// 3. 갈수있는 노드들을 모두 건너며 전 정점과 지금 정점의 색을 비교
// 0 0이면 impossible
// 1 1이면 impossible
// else면 possible을 띄운다


// DFS탐색 시 0101을 남긴다 했는데
// -> 트리모양으로 검색시 
//    0
//   1
//  0 1
// 이렇게 나와서 모순이 있음
// 포기

vector<int> nodes[100000];
int visit[1001];
int map[1001];
int color[1001];

int DFS_visit(int T) {

}

int main() {
    int n, m, T;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        // 케이스 마다 배열 초기화
        for (int i = 0; i < n; i++) {
            visit[i] = 0;
            map[i] = 0;
            color[i] = 0;
        }
        // 양방향 그래프 설정
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            nodes[x].push_back(y);
            nodes[y].push_back(x);
        }
        for (int i = 0; i < n; i++) {



        }
    }


    return 0;
}
