#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct matrix
{
    vector<vector<int>> data;
    matrix(int l, int r)
    {
        vector<int> tmp;
        for (int i = 0; i < r; i++)
        {
            tmp.push_back(0);
        }
        for (int i = 0; i < l; i++)
        {
            data.push_back(tmp);
        }
    }
};

bool mul_detect(matrix a, matrix b)
{
    return a.data.size() == b.data[0].size();
}

int main()
{
    
    return 0;
}