//
// Created by R on 2020/1/31.
//

#ifndef TEST_TEST_2_H
#define TEST_TEST_2_H

#include <cstring>
#include <iostream>

using namespace std;
/**
 * str_1 = 'a'不能通过编译，因为数组名str1为 char *const类型的右值类型，根本不能赋值
 */
class test_2 {
public:
    void test_array(){
        char string[10], str_1[10];
        for (int i = 0; i < 9; i++) {
            str_1[i] = 'a';
        }
        str_1[9] = '\0';
        char *result =strcpy(string, str_1);//记住strcpy()赋值后为*
        cout << result << endl;
    }
};


#endif //TEST_TEST_2_H
