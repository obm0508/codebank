// 프로그래머스 - 예산 Level 1
//https://programmers.co.kr/learn/courses/30/lessons/12982
//
#include <iostream>
#include <vector>

#include <algorithm> //sort를 위한

using namespace std;
int compare(int a, int b) {
	return a > b;
}

int solution(vector<int> d, int budget) {
	int answer = 0;
	sort(d.begin(), d.end());
	
	for (int i : d) {
		if (budget - i >= 0) {
			answer++;
			budget -= i;
		}
		else {
			break; // 코드실행시간 단축
		}
	}

	return answer;
}

int main() {

	vector<int> d = {1,3,2,5,4};
	
	int budget = 9;
	
	//내림차순
	sort(d.begin(), d.end());

	for (int a : d) {
		cout << a << endl;
	}
	cout << endl;
	//오름차순 정렬
	sort(d.begin(), d.end(),compare);

	for (int a : d) {
		cout << a << endl;
	}
	cout << solution(d, budget);




	return 0;
}
