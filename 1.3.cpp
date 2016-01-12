//
//  1.3.cpp
//  1.2
//
//  Created by wangxiaoxuan on 1/11/16.
//  Copyright © 2016 summer. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
//anagram has same letter count

bool permutation(string s1,string s2)
{
    if(s1.length() != s2.length())
        return false;
    int count1[256] = {};
    int count2[256] = {};
    for(int i =0;i<s1.length();i++)
    {
        int tmp = (int)s1[i];
        count1[tmp]++;
        //cout<<tmp<<endl;
        int tmp2 = (int)s2[i];
        count2[tmp2]++;
       // cout <<tmp2<<endl;
    }
    for(int i =0;i<256;i++)
    {
       // cout<<count1[i]<<endl;
    if(count1[i] != count2[i])
    {
        return false;
    }
    }
    return true;
    
}

/*int main()
{
    string s1 = "dog";
    string s2 = "god";
    cout<<permutation(s1, s2);
    return 0;
}*/