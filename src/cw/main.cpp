/*! \file       main.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       30.11.2019
 *
 *  CW. Main module
 *
 */

#include "solut.h"

#include <iostream>
#include <fstream>


void test1()
{
    StrVector v1;
    UShortVector v2;
    GradesVector v3;

    std::ifstream inpFile("stu.txt");
    readData(inpFile, v1, v2, v3);
}


void test2()
{
    StrVector v1;
    UShortVector v2;
    GradesVector v3;

    std::ifstream inpFile("stu.txt");
    readData(inpFile, v1, v2, v3);

    std::cout << "All students: \n";
    printStudentsByGroup(v1, v2, v3, 0);

    std::cout << "\nStudents with grades greater then 5.0: \n";
    printStudentsByGroup(v1, v2, v3, 5);
}


void test3()
{
    StrVector v1;
    UShortVector v2;
    GradesVector v3;

    std::ifstream inpFile("stu.txt");
    readData(inpFile, v1, v2, v3);

    std::cout << "All students: \n";
    printStudentsByGroup(v1, v2, v3, 0);

    removeZeroStudents(v1, v2, v3);
    std::cout << "\n\nAll students after expulsion: \n";
    printStudentsByGroup(v1, v2, v3, 0);

}

int main()
{
    std::cout << "Hello world!\n\n";

    test1();
    test2();
    test3();

    return 0;
}
