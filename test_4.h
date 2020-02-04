//
// Created by R on 2020/1/31.
//

#ifndef TEST_TEST_4_H
#define TEST_TEST_4_H


#include <cassert>

class test_4 {
public:
    /*void strcpy(char *strDest, char *strSrc){
        while ((*strDest++ = *strSrc++) != '\0') ;
    }*/
    /**
     * 将源字符串加const，表明其为输入参数
     * @param strDest
     * @param strSrc
     */
    /*void strcpy(char *strDest, const char *strSrc){
        while ((*strDest++ = *strSrc++) != '\0') ;
    }*/
    /**
     * 对源地址和目的地址加非0断言
     * @param strDest
     * @param strSrc
     */
    /*void strcpy(char *strDest, const char *strSrc){
        assert((strDest != NULL) && (strSrc != NULL));
        while ((*strDest++ = *strSrc++) != '\0') ;
    }*/

    /**
     * 为了实现链式操作，将目的地址返回
     * @param strDest
     * @param strSrc
     * @return
     */
    char *strcpy(char *strDest, const char *strSrc){
        assert((strDest != NULL) && (strSrc != NULL));
        char *address = strDest;
        while ((*strDest++ = *strSrc++) != '\0') ;
        return address;
    }
};


#endif //TEST_TEST_4_H
