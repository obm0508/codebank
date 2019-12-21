// 킹 - baekjoon 1063
// 8*8체스판 킹과 돌, 입력으로 킹이 움직이고, 킹과 돌의 마지막 위치를 리턴한다.
// 문제링크 : https://www.acmicpc.net/problem/1063

#include<iostream>
#include<string>

using namespace std;

#define MAX 8

string king, stone;
int N; //움직이는 횟수

// R, L, B, T, RT, LT, RB, LB
int dx[MAX] = { 0, 0, 1, -1, -1, -1, 1, 1 };
int dy[MAX] = { 1, -1, 0, 0, 1, -1, 1, -1 };

//범위체크
bool rangeCheck(int x, int y) {
    if (x < 0 || x >= MAX || y < 0 || y >= MAX) return true;
    return false;
}

int main(void)
{
    cin >> king >> stone >> N;

    int kx, ky, sx, sy;
    
    //주의 : 열은 A~H 이나, 행은 8~1 이다.
    ky = king[0] - 'A';
    kx = '8' - king[1];

    sy = stone[0] - 'A';
    sx = '8' - stone[1];
    
    
    int dir = 0;
    string input;

    while (N--) {
        cin >> input;

        //비교
        if (input.compare("R") == 0) dir = 0;
        else if (input.compare("L") == 0) dir = 1;
        else if (input.compare("B") == 0) dir = 2;
        else if (input.compare("T") == 0) dir = 3;
        else if (input.compare("RT") == 0) dir = 4;
        else if (input.compare("LT") == 0) dir = 5;
        else if (input.compare("RB") == 0) dir = 6;
        else if (input.compare("LB") == 0) dir = 7;

        int knx = kx + dx[dir];
        int kny = ky + dy[dir];

        if (rangeCheck(knx, kny)) {//체스판 밖으로 갈시 이동무시
            continue;
        }

        //돌과 같은 곳으로 이동할 때는, 돌을 킹이 움직인 방향과 같은 방향으로 한 칸 이동
        if (knx == sx && kny == sy){
            int snx = sx + dx[dir];
            int sny = sy + dy[dir];

            if (rangeCheck(snx, sny)) {//체스판 밖으로 갈시 이동무시
                continue;
            }

            //이동가능할 경우 위치 갱신
            sx = snx; sy = sny;
        }
        //이동가능할 경우 위치 갱신
        kx = knx; ky = kny;
    }

    //정답 출력
    cout << (char)(ky + 'A') << MAX - kx << '\n';
    cout << (char)(sy + 'A') << MAX - sx << '\n';

    return 0;
}
