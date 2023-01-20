#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (input == 0) {
			if (pq.empty())
				cout << 0 << '\n';
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else 
			pq.push(input);
	}
}