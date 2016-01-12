//
//  1.4.cpp
//  1.2
//
//  Created by wangxiaoxuan on 1/11/16.
//  Copyright © 2016 summer. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

string replaceSpace(string str)
{
    int count = 0;
    for(int k = 0 ; k<str.length();k++)
    {
        if(str[k] == ' ')
            count ++;
    }
    string s(str.length()+count*2,' ');
    int j = 0;
    int l = (int)str.length();
    cout<<l;
    for(int i = 0;i<l;i++)
    {
        if(str[i]==' ')
        {
            s[j] = '%';
            cout<<s[j];
            s[j+1] = '2';
            s[j+2] = '0';
            j = j+3;
        }
        else
        {
            //cout<<"lala";
            s[j] = str[i];
            cout<<s[j];

            j++;
        }
        
    }
   // s[j] ='\0';
    return s;
}

/*int main()
{
    string s1 ="I LOVE YOU";
   // cout<<"hello";
    cout<<replaceSpace(s1);
    return 0;
}*/