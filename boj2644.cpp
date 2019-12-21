#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N; //전체 사람 수

int a, b;
vector<vector<int>> list; //인접 리스트
vector<bool> visit; //방문배열

int answer = -1;

//BFS 너비 우선 탐색 함수
void bfs(int person) {
	queue<int> q;

	q.push(person);
	visit[person] = true;

	//탐색 시작
	int level = 0; //촌수
	while (!q.empty()) {
		int qSize = q.size();

		for (int i = 0; i < qSize; i++) {
			int curr = q.front();
			q.pop();
			if (curr == b) answer = level;

			for (int next : list[curr]) {
				if (visit[next] == false) {
					visit[next] = true;
					q.push(next);
				}
			}
		}
		level++;
	}
}


int main()
{
	//첫째 줄 - 전체 사람의 수 n
	cin >> N;

	//List 사이즈 정의 - 1부터 사용할 것이라 N + 1
	list.resize(N + 1);
	visit.resize(N + 1, false);

	//둘째 줄 - 촌수를 계산해야 하는 서로 다른 두 사람의 번호
	cin >> a >> b;

	//셋째 줄 - 부모 자식들 간의 관계의 개수 m
	int t = 0;
	cin >> t;

	//친척관계를 표현하는 인접리스트 생성
	for (int i = 0; i < t; i++)
	{
		int x, y;
		cin >> x >> y;
		//간선 추가
		list[x].push_back(y);
		list[y].push_back(x);
	}
	//BFS함수 실행
	bfs(a);

	//정답 출력
	cout << answer << endl;

}
