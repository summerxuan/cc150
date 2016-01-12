//
//  1.6.cpp
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

void rotateMatrix(vector<vector<int>> &matrix)
{
    int n =(int) matrix.size()-1;
    for(int layer = 0 ;layer<=n/2;layer++)
    {
        int range = n-1-layer;
        for(int j =layer;j<=range ;j++)
        {
            int tmp = matrix[layer][j];//save the top value
            matrix[layer][j] = matrix[n-j][layer];
            matrix[n-j][layer] = matrix [n-layer][n-j];
            matrix[n-layer][n-j] = matrix[j][n-layer];
            matrix[j][n-layer] = tmp;
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
/*int main() {
    vector<int> v1{1,2,3,4};
    vector<int> v2{5,6,7,8};
    vector<int> v3{9,10,11,12};
    vector<int> v4{13,14,15,16};
    vector<vector<int>> v{v1,v2,v3,v4};
    cout<< v[0].size();
    format(v);
    rotateMatrix(v);
    format(v);
   
}*/