#include<iostream>
#include<queue>

struct point{
    int x;
    int y;
};

int dis[10][10];
bool map[10][10];
const int Move[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,-1},{-2,1}};//0 for x, 1 for y
int route[10][10][100][2];

void bfs(int srcx,int srcy){
    dis[srcx][srcy]=0;
}

using namespace std;

int main(){
    
    return 0;
}