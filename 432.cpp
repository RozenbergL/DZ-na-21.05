#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <fstream>

using namespace std;

const char check = '#';
const char uncheck = '.';
vector <string> sp;
int n, m;
struct point
{
    int x,y;
    point(){}
    point(int X, int Y)
    {
        x = X; y = Y;
    }
};
int moveX[4] = {-1, 0, 1, 0};
int moveY[4] = {0, -1, 0, 1};
bool rigth(int x, int y)
{
    if (x < 0 || y < 0)
        return false;
    if (x >= n || y >= m)
        return false;
    return true;
}
void dfs(int fx, int fy)
{
    stack <point> s;
    s.push(point(fx, fy));
    while (!s.empty())
    {
        point cur = s.top();
        s.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = cur.x + moveX[i];
            int y = cur.y + moveY[i];
            if (rigth(x,y) && sp[x][y] == check)
            {
                sp[x][y] = uncheck;
                s.push(point(x,y));
            }
        }
    }
}
int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
    fin >> n >> m;
    sp.resize(n);
    for (int i = 0; i < n; i++)
        fin >> sp[i];
        int amount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (sp[i][j] == check)
            {
                dfs(i,j);
                amount++;
            }
        }
    }
    fout << amount;
    return 0;
}