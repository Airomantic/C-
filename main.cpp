#include <iostream>
//包含cout<<  <<endl
#include "test_1.h"
#include "test_2.h"
#include "test_3.h"
#include "test_4.h"
#include "test_parameter_pointer.h"
#include "test_parameter_void.h"

using namespace std;
int main() {
    //std::cout << "Hello, World!" << std::endl;

    /*test_1 test_1;
    test_1.test_array();*/

    /*test_2 test_2;
    test_2.test_array();*/

    /*test_3 test3;
    char *str_1;
    test3.test_strlen(str_1);*/

    /*test_4 test4;
    char *strDest,*strSrc;
    test4.strcpy(strDest, strSrc);*/

    /*test_parameter_pointer testParameterPointer;
    testParameterPointer.test_5();*/

    test_parameter_void testParameterVoid;
    testParameterVoid.test_6();

    return 0;
}
