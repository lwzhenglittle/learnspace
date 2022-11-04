#include<iostream>

using namespace std;

bool Map[16][16];
bool flag;
const int Move[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,-1},{-2,1}};//0 for x, 1 for y

void dfs(int nowx,int nowy,int dstx,int dsty,int step){
    if(step>6||step==6&&nowx!=dstx&&nowy!=dsty){
        return ;
    }
    if(nowx==dstx&&nowy==dsty){
        flag=true;
        cout<<nowx<<" "<<nowy<<endl;
        return ;
    }
    for(int i=0;i<8;i++){
        int newx = nowx+Move[i][0];
        int newy = nowy+Move[i][1];
        if(newx>=1&&newx<=8&&newy>=1&&newy<=8&&Map[newx][newy]==false){
            Map[newx][newy]=true;
            dfs(newx,newy,dstx,dsty,step+1);
            if(flag){
                cout<<nowx<<" "<<nowy<<endl;
                return ;
            }
            Map[newx][newy]=false;
        }
    }
}

int main(){
    int srcx=1,srcy=1,dstx=8,dsty=8;
    //cin>>srcx>>srcy>>dstx>>dsty;
    dfs(srcx,srcy,dstx,dsty,0);
    return 0;
}