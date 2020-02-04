//
// Created by R on 2020/1/31.
//

#ifndef TEST_TEST_3_H
#define TEST_TEST_3_H

#include <iostream>
#include <clocale>
#include <cstring>
/**
 * if(strlen(str1) <= 10)应改为if(strlen(str1) < 10)，
 * 因为strlen的结果未统计’\0’所占用的1个字节。（不算入“\0")
 */
using namespace std;
class test_3 {
public:
    void test_strlen(char *str_1){
        //cin>>str_1;
        if (str_1 == NULL) {
            return;
        }
        char string[10];
        char *result;//带*声明
        if (strlen(str_1) < 10)//“<=”报错，应该改成“<”
            result = strcpy(string, str_1);
        cout << result << endl;
    }
};


#endif //TEST_TEST_3_H
