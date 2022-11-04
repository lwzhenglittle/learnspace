#include<iostream>

using namespace std;

struct Books{
    char bookName[101];
    char bookWriter[101];
    char ISBN[21];
    int year;
    char inputName[101];
    int count;
}books[5];

int main(){
    cout<<"依次输入以下信息，并重复5次形成5套藏书信息"<<endl;
    for(int i=0;i<5;i++){
        cin.getline(books[i].bookName,100);
        cin.getline(books[i].bookWriter,100);
        cin.getline(books[i].ISBN,20);
        cin>>books[i].year;
        cin.get();
        cin.getline(books[i].inputName,100);
        cin>>books[i].count;
        cin.get();
        cout<<"本册输入完成，请输入下一册"<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<"第"<<i+1<<"本："<<endl;
        cout<<"书名："<<books[i].bookName<<endl;
        cout<<"作者："<<books[i].bookWriter<<endl;
        cout<<"ISBN:"<<books[i].ISBN<<endl;
        cout<<"出版年份："<<books[i].year<<endl;
        cout<<"录入人员："<<books[i].inputName<<endl;
        cout<<"入库数目："<<books[i].count<<endl;
    }
    return 0;
}