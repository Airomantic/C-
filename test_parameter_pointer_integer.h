//
// Created by R on 2020/2/4.
//

#ifndef TEST_TEST_PARAMETER_POINTER_INTEGER_H
#define TEST_TEST_PARAMETER_POINTER_INTEGER_H


#include <cstdlib>
#include <cstring>
#include <cstdio>
/**
 * 1. 传入GetMemory的参数为字符串指针的指针，但是在GetMemory中执行申请内存及赋值语句
 * *p = (char *) malloc( num );
 * 后未判断内存是否申请成功，应加上：
 * if ( *p == NULL )
    {
     ...//进行申请内存失败处理
    }
    同时应考虑num>0；
    2. 未释放堆内存 动态分配的内存在程序结束之前没有释放，应该调用free, 把malloc生成的内存释放掉
    3. printf(str) 改为 printf("%s",str),否则可使用格式化 字符串攻击
 */
class test_parameter_pointer_integer {
public:
    void GetMemory(char **p,int num){
        *p = (char *) malloc(num);
    }
    void test_7(void){
        char *str = NULL;
        GetMemory(&str, 100);
        strcpy(str, "hello");
        printf(str);
    }
};


#endif //TEST_TEST_PARAMETER_POINTER_INTEGER_H
