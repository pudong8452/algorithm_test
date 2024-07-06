// [백준] 16953번 : 트리와 커리 [c/c++]
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> node[100001];
vector<int> visit(100001);
int memo[100001];
int cnt, root;

int DFS(int here) {
    // 현재 정점을 거치지 않았다면 DFS실행
    if (memo[here] != 0) return memo[here];
    // 방문처리
    visit[here] = 1;
    // ret은 서브트리 개수를 뜻함
    int ret = 1;
    for(int i : node[here]){
        // 방문하지 않은 모든 정점를 방문
        // DFS의 리턴 값은 리프부터 시작해서 카운트한 정점의 개수이다
        if (!visit[i]) ret = DFS(i) + ret;
    }
    return memo[here] = ret;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n, q;
    cin >> n >> root >> q;
    

    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
            node[u].push_back(v);
            node[v].push_back(u);
    }
    
    DFS(root);
    for (int i = 0; i < q; i++) {
        int qr;
        cin >> qr;
        cout << memo[qr] << '\n';
    }
    return 0;
}