//
//  main.cpp
//  1.2
//
//  Created by wangxiaoxuan on 1/11/16.
//  Copyright © 2016 summer. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
void reverse(char *s)
{
    for(int i = 0;i<strlen(s)/2;i++)
    {
        swap(s[i],s[strlen(s)-1-i]);
    }
}
/*int main() {
    char s[] = "summerxuanwang";
    //cout << (strlen(s));
    reverse(s);
    cout << s;
    return 0;
}
*/