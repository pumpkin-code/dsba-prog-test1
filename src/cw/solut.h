/*! \file       solut.h
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       30.11.2019
 *
 *  CW. Types aliases and definition, and function prototypes.
 *
 *      DO NOT MODIFY THIS FILE!
 *
 */

#include <vector>
#include <set>
#include <string>

// auxiliary types
typedef unsigned short UShort;

// aliases
typedef std::vector<std::string> StrVector;
typedef std::vector<UShort> UShortVector;
typedef std::vector<UShortVector> GradesVector;

// aliases for some iterators — just for reminder
typedef StrVector::iterator StrVectorIter;
typedef StrVector::const_iterator StrVectorCIter;


typedef std::set<unsigned short> UShortSet;

// prototypes
void readData(std::istream& istr, StrVector& students, UShortVector& groups,
              GradesVector& studentGrades);
void printStudentsByGroup(const StrVector& students, const UShortVector& groups,
                          const GradesVector& studentGrades, double thres);
void removeZeroStudents(StrVector& students, UShortVector& groups,
                        GradesVector& studentGrades);
