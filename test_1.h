//
// Created by R on 2020/1/31.
//

#ifndef TEST_TEST_1_H
#define TEST_TEST_1_H


#include <cstring>
/**
 * 字符串str1需要11个字节才能存放下（包括末尾的’\0’），
 * 而string只有10个字节的空间，strcpy会导致数组越界；
 */
class test_1 {
public:
    void test_array(){
        char string[10];
        char *str_1 = "0123456789";
        strcpy(string, str_1);
    }
};


#endif //TEST_TEST_1_H
