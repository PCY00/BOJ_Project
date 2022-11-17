#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, M;											//N = 정점 갯수, M = 간선 갯수
int s, e;											//s = 시작정점, e = 끝정점
vector<vector<int>> adjArray;						
vector<int> visited_DFS;							//DFS 방문한곳 저장
vector<int> visited_BFS;							//BFS 방문한곳 저장

void AddEdge(int start, int end);
void DFS(int start);
void aDFS(int v);
void BFS(int start);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V;											//V = 탐색을 시작할 정점의 번호

	cin >> N >> M >> V;

	adjArray.resize(N + 1);
	visited_BFS.resize(N + 1);
	visited_DFS.resize(N + 1);

	for (int i = 0; i < M; i++) {
		cin >> s >> e;
		AddEdge(s, e);
	}

	for (int i = 1; i <= N; i++) {								//작은거 부터 방문을 위한 정렬
		sort(adjArray[i].begin(), adjArray[i].end());
	}

	DFS(V);
	cout << '\n';
	BFS(V);

	return 0;
}

void AddEdge(int start, int end) {
	adjArray[start].push_back(end);
	adjArray[end].push_back(start);
}

void DFS(int start) {
	for (int v = 1; v <= N; v++) {
		visited_DFS[v] = 0;
	}
	for (int v = 1; v <= N; v++) {
		if (visited_DFS[start] == 0) {
			aDFS(start);
		}
	}
}

void aDFS(int v) {
	visited_DFS[v] = 1;
	cout << v << " ";
	for (int i = 0; i < adjArray[v].size(); i++) {
		int x = adjArray[v][i];
		if (visited_DFS[x] == 0) {
			aDFS(x);
		}
	}
}

void BFS(int start) {
	queue<int> bfs;
	visited_BFS[start] = 1;
	cout << start << " ";
	bfs.push(start);

	while (!bfs.empty()) {
		int save = bfs.front();
		bfs.pop();
		for (int i = 0; i < adjArray[save].size(); i++) {
			if (visited_BFS[adjArray[save][i]] == 0) {
				visited_BFS[adjArray[save][i]] = 1;
				cout << adjArray[save][i] << " ";
				bfs.push(adjArray[save][i]);
			}
		}
	}
}