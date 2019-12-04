/*! \file       solut.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       30.11.2019
 *
 *  CW. Solutions.
 *
 *      → Provide your solution here and upload this file to Ya.Contest! ←
 */

// Warning! Do not remove the following line.
#include "solut.h"

#include <iostream>
#include <sstream>



//=========================[PART 1: up to 0.5]================================//

/*!
 * \brief readData reads data about students from a given input stream \a istr
 * and fills in three given vectors line by line.
 *
 * \param istr an input stream.
 * \param students is a vector of students to be filled up.
 * \param groups is a vector of students' groups to be filled up.
 * \param studentGrades is a vector of students' grades to be filled up.
 *
 * After the completion of input, all vectors contain the same number of elements
 * corresponding to the number of students.
 *
 * Inputting continues until the first empty line.
 * Each line contains info as follows:
 *      Name Surname;GroupID;Grade1;Grade2;...
 * Example:
 *      Aminah Mccoy;101;9;4;9;5;8;6;0
 *
 * The number of grades for each student may vary and is not known in advance.
 * The record elements are separated by semicolons. Student name can contain spaces.
 * Extracted student's name, group and their grades are put into \a students,
 * \a groups and \a studentGrades vectors respectively (available under the same
 * index i).
 *
 * It is highly recommended to decompose the method properly. Solve each subtasks
 * by using individual functions.
 */
void readData(std::istream& istr, StrVector& students, UShortVector& groups,
              GradesVector& studentGrades)
{
    // TODO: provide an implementation here...
}


//=========================[PART 2: up to 0.35]================================//



/*!
 * \brief getUniqGroups obtains a vector of groups that possibly contains
 * duplicates and returns a set of unique groups.
 */
UShortSet getUniqGroups(const UShortVector& groups)
{
    // TODO: provide an implementation here...
}


/*!
 * \brief printStudentsByGroup outputs a given list of students according to the
 * special filter criteria.
 *
 * \param students is a list of students.
 * \param groups is a correspoding list of student groups.
 * \param studentGrades is a correspoding list of students' grades.
 * \param thres is a threshold for an average grade.
 *
 * Function prints out a list of students passed through the corresponding vectors
 * by grouping them into study groups.
 * The function prints only those students whose average grade is greater then or
 * equal to a given threshold \a thres.
 * If a group doesn't contain any students passing the filter, its name is
 * printed anyway.
 * The group name is output starting with the beginning of the line, and every
 * student is output with the preceding tab character.
 * The names of the students inside of the group should be sorted alphabetically
 * in ascending order.
 * Example:
 * 101
 *         Aminah Mccoy: 5.85714
 *         Sanah Wu: 2.4
 *         ...
 * 102
 *         Asiyah Potter: 5.5
 *         Ksawery Richard: 1.6
 * ...
 */
void printStudentsByGroup(const StrVector& students, const UShortVector& groups,
                          const GradesVector& studentGrades, double thres)
{
    // TODO: provide an implementation here...
}



//=========================[PART 3: up to 0.15]================================//




/*!
 * \brief removeZeroStudents removes records about i-th student from all three
 * given vectors if a student has at least one zero grade.
 *
 * The function must deal with the given vectors w/o copying values into any
 * temporary structures.
 */
void removeZeroStudents(StrVector& students, UShortVector& groups,
                        GradesVector& studentGrades)
{
    // TODO: provide an implementation here...
}
