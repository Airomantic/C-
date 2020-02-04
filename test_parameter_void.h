//
// Created by R on 2020/2/4.
//

#ifndef TEST_TEST_PARAMETER_VOID_H
#define TEST_TEST_PARAMETER_VOID_H


#include <cstring>
#include <cstdio>

/**
 * p[]数组为函数内的局部自动变量，在函数返回后，内存已经被释放。
 * 这是许多程序员常犯的错误，其根源在于不理解变量的生存期
 */
class test_parameter_void {
public:
    char *GetMemory(void){
        char p[] = "hello world";
        return p;
    }

    void test_6(void){
        char *str = NULL;
        str = GetMemory();
        printf(str);
    }
};


#endif //TEST_TEST_PARAMETER_VOID_H
