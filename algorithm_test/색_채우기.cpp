#include <iostream>
#include <vector>

using namespace std;

// �׷��� �׸���
// 1. ����� �׷����� �׷����ϰ�, ��带 ǥ���ϱ� ���� vector ���
// 2. DFS_visit�� �湮ǥ�� �� �������� 0, 1 ����ֱ� 
// 2-1. ��� �׷����� �̾������������Ƿ� for������ visit���Ѱ� �ٽ� �湮
// ( 0�̸� ù��° ��, 1�̸� �ι�° �� )
// 3. �����ִ� ������ ��� �ǳʸ� �� ������ ���� ������ ���� ��
// 0 0�̸� impossible
// 1 1�̸� impossible
// else�� possible�� ����


// DFSŽ�� �� 0101�� ����� �ߴµ�
// -> Ʈ��������� �˻��� 
//    0
//   1
//  0 1
// �̷��� ���ͼ� ����� ����
// ����

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
        // ���̽� ���� �迭 �ʱ�ȭ
        for (int i = 0; i < n; i++) {
            visit[i] = 0;
            map[i] = 0;
            color[i] = 0;
        }
        // ����� �׷��� ����
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
