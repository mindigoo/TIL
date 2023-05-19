// 4615

#include <iostream>
#include <vector>

using namespace std;

char board[9][9];
int N, M;

void check(int x, int y, int turn)
{
    char D, C;

    if (turn == 1)
    {
        D = 'B';
        C = 'W';
    }
    else
    {
        D = 'W';
        C = 'B';
    }

    // 오른쪽 검사
    for (int i = y + 1; i <= N; i++)
    {
        if (board[x][i] == ' ')
            break;

        if (board[x][i] == D)
        {
            for (int j = y; j < i; j++)
                board[x][j] = D;
            break;
        }
    }

    // 왼쪽 검사
    for (int i = y - 1; i > 0; i--)
    {
        if (board[x][i] == ' ')
            break;

        if (board[x][i] == D)
        {
            for (int j = y; j > i; j--)
                board[x][j] = D;
            break;
        }
    }

    // 아래쪽 검사
    for (int i = x + 1; i <= N; i++)
    {
        if (board[i][y] == ' ')
            break;

        if (board[i][y] == D)
        {
            for (int j = x; j < i; j++)
                board[j][y] = D;
            break;
        }
    }

    // 위쪽 검사
    for (int i = x - 1; i > 0; i--)
    {
        if (board[i][y] == ' ')
            break;

        if (board[i][y] == D)
        {
            for (int j = x; j > i; j--)
                board[j][y] = D;
            break;
        }
    }

    // 우상대각 검사
    for (int i = x - 1, j = y + 1; i > 0 && j <= N; i--, j++)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k > i && l < j; k--, l++)
                board[k][l] = D;
            break;
        }
    }

    // 좌상대각 검사
    for (int i = x - 1, j = y - 1; i > 0 && j > 0; i--, j--)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k > i && l > j; k--, l--)
                board[k][l] = D;
            break;
        }
    }

    // 우하대각 검사
    for (int i = x + 1, j = y + 1; i <= N && j <= N; i++, j++)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k < i && l < j; k++, l++)
                board[k][l] = D;
            break;
        }
    }

    // 좌하대각 검사
    for (int i = x + 1, j = y - 1; i <= N && j > 0; i++, j--)
    {
        if (board[i][j] == ' ')
            break;

        if (board[i][j] == D)
        {
            for (int k = x, l = y; k < i && l > j; k++, l--)
                board[k][l] = D;
            break;
        }
    }
}

void reset()
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            board[i][j] = ' ';
}

void play()
{
    int x, y, turn;

    for (int i = 0; i < M; i++)
    {
        cin >> y >> x >> turn;
        check(x, y, turn);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int wC = 0, bC = 0;

        cin >> N >> M;

        reset();
        board[N / 2][N / 2] = 'W';
        board[N / 2][N / 2 + 1] = 'B';
        board[N / 2 + 1][N / 2] = 'B';
        board[N / 2 + 1][N / 2 + 1] = 'W';

        play();

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (board[i][j] == 'B')
                    bC++;
                else if (board[i][j] == 'W')
                    wC++;
            }
        }

        cout << "#" << tc << " " << bC << " " << wC << endl;
    }
    return 0;
}

/*
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<utility>
 
using namespace std;
 
int dy[] = { -1,-1,0,1,1,1,0,-1 };
int dx[] = { 0,-1,-1,-1,0,1,1,1 };
 
int N, M;
int map[8][8];
vector<pair<pair<int, int>, int>> cmd;
pair<int, int> ans;
 
void input() {
    cin >> N >> M;
 
    int y = N / 2;
    int x = N / 2;
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            map[i][j] = 0;
        }
    }
 
    map[y - 1][x - 1] = 2; map[y - 1][x] = 1;
    map[y][x - 1] = 1; map[y][x] = 2;
 
    cmd.clear();
 
    for (int i = 0; i < M; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
 
        cmd.push_back(make_pair(make_pair(y - 1, x - 1), c));
    }
}
 
bool isFull() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == 0)
                return false;
        }
    }
 
    return true;
}
 
void othello(int y, int x, int color) {
    map[y][x] = color;
 
    for (int i = 0; i < 8; i++)
    {
        bool flag = false;
 
        for (int j = 1; j < 8; j++)
        {
            int ny = y + dy[i] * j;
            int nx = x + dx[i] * j;
 
            if (ny < 0 || nx < 0 || ny >= N || nx >= N || map[ny][nx] == 0)
                break;
 
            if (map[ny][nx] == color && !flag)
                break;
 
            if (map[ny][nx] != 0 && map[ny][nx] != color)
                flag = true;
 
            if (map[ny][nx] == color) {
                while (true) {
                    if (ny == y && nx == x)
                        break;
 
                    ny -= dy[i];
                    nx -= dx[i];
                    map[ny][nx] = color;
                }
 
                break;
            }
        }
    }
}
 
pair<int, int> getCnt() {
    int black = 0;
    int white = 0;
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == 1)
                black++;
 
            else if (map[i][j] == 2)
                white++;
        }
    }
 
    return { black,white };
}
 
void solution() {
    for (int i = 0; i < M; i++)
    {
        if (isFull())
            break;
 
        int y = cmd[i].first.first;
        int x = cmd[i].first.second;
        int color = cmd[i].second;
 
        othello(y, x, color);
    }
 
    ans = getCnt();
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int T ;
    int testCase;
    cin >> T;
 
    for (testCase = 1; testCase <= T; testCase++)
    {   
        input();
        solution();
        cout << "#" << testCase << ' ' << ans.first << ' ' << ans.second << endl;
    }
 
    return 0;
}
*/