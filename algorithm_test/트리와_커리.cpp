// [����] 16953�� : Ʈ���� Ŀ�� [c/c++]
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> node[100001];
vector<int> visit(100001);
int memo[100001];
int cnt, root;

int DFS(int here) {
    // ���� ������ ��ġ�� �ʾҴٸ� DFS����
    if (memo[here] != 0) return memo[here];
    // �湮ó��
    visit[here] = 1;
    // ret�� ����Ʈ�� ������ ����
    int ret = 1;
    for(int i : node[here]){
        // �湮���� ���� ��� ������ �湮
        // DFS�� ���� ���� �������� �����ؼ� ī��Ʈ�� ������ �����̴�
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