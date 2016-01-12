//
//  1.7.cpp
//  1.2
//
//  Created by wangxiaoxuan on 1/11/16.
//  Copyright © 2016 summer. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void setToZero(vector<vector<int>> &matrix)
{
    int row = (int)matrix.size();
    vector<bool> rowMark(row,false);
    int column = (int)matrix[0].size();
    vector<bool> columnMark(column,false);
    for(int i =0 ;i<row;i++)
    {
        for(int j =0 ;j<column;j++)
        {
            if(matrix[i][j] == 0)
            {
                rowMark[i] = true;
                columnMark[j] = true;
            }
        }
    }
   
    for(int i =0 ;i<row;i++)
    {
        for(int j =0 ;j<column;j++)
        {
            if(rowMark[i]||columnMark[j])
            {
                matrix[i][j] =0;
            }
        }
    }
}
void format(vector<vector<int> > &matrix) {
    for(auto e1 : matrix) {
        for(auto e2 : e1) {
            cout << e2 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    vector<int> v1{1,2,3,4, 0};
    vector<int> v2{5,6,7,8,9};
    vector<int> v3{9,10,0,12, 4};
    vector<int> v4{13,14,15,16,9};
    vector<int> v5{13,14,15,16,9};
    vector<vector<int>> v{v1,v2,v3,v4,v5};
    //cout<< v[0].size();
    //format(v);
    //setToZero(v);
    //format(v);
    return 0;
}

