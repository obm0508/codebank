#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;


    while (heights.size()>0) {
        int index = heights.size() - 1;
        int cur = heights[index];

        int check = -1;
        for (int i = index-1; i >= 0; i--) {
            if (heights[i] > cur) {
                check = i;
                break;
            }
        }
        if (check == -1) answer.push_back(0);
        else answer.push_back(check+1);


        heights.erase(heights.end() - 1);
    }

    reverse(answer.begin(), answer.end());

    return answer;
}
