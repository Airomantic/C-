//
// Created by R on 2020/2/2.
//

#ifndef TEST_TEST_PARAMETER_POINTER_H
#define TEST_TEST_PARAMETER_POINTER_H


#include <malloc.h>
#include <clocale>
#include <cstring>

/**
 * 传入中GetMemory( char *p )函数的形参为字符串指针，
 * 在函数内部修改形参并不能真正的改变传入形参的实参值
 * //执行完
        char *str = NULL;
        GetMemory(str);
        后的str仍然为NULL;
    1：传入形参并不能真正改变形参的值，执行完之后为空；
    2：在函数GetMemory中和test_5中没有malloc对应的free，造成内存泄露 如：free(p);即可
 */
class test_parameter_pointer {
public:
    void GetMemory(char *p){
        p = (char *) malloc(100);
    }

    void test_5(void){
        char *str = NULL;
        GetMemory(str);
        strcpy(str, "hello world");
        printf(str);
    }
};


#endif //TEST_TEST_PARAMETER_POINTER_H
