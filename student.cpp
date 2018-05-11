#include "student.h"
#include <iostream>
#include <stdlib.h>


using namespace std;


string student::fullName()
{
    completeName.append( firstName );
    completeName.append(" "); // inserts space
    completeName.append( lastName );

    return completeName;

} // end fullName()


void student::setName(string fName, string lName)
{
    firstName = fName;
    lastName = lName; // lower-case L, not 1.

} // end setName()



void student::addGrade(double value)
{
    grade.push_back( value );


} // end addGrade()


double student::getScore()
{
    double number = 0;

    for( int i = 0; i < grade.size(); i++ )
    {
        number = number + grade[i];
    }

    if( grade.size() != 0 )
    {
        return number = number / grade.size(); // calculates the average
    }

    else
    {
        return 0;
    }
}

