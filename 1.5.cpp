//
//  1.5.cpp
//  1.2
//
//  Created by wangxiaoxuan on 1/11/16.
//  Copyright © 2016 summer. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

string compression(string s1)
{
    string s2("");
    char previous = s1[0];
    //update previous each time
    int count(1);
    for(int i = 1;i<s1.length();i++)
    {   if(s1[i] == previous)
            count++;
        else
        {
            s2 = s2+ previous + to_string(count);
            count = 1 ;
            //updata count to 0 again
            previous = s1[i];
        }
    }
    s2 = s2+ previous + to_string(count);
    if(s2.length()<s1.length())
        return s2;
    else
        return s1;
}

/*int main()
{
    string s1 = "aaaaabbccdddd";
    cout<< compression(s1);
    return 0;
}*/