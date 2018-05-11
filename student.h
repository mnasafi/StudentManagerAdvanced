#ifndef _STUDENT_H
#define _STUDENT_H_


#include <iostream> // include to prevent compilation error with string undefined.
                    // gives the string library.
#include <vector>                    

using namespace std;

class student
{
    private:
        string firstName;
        string lastName;
        string completeName;  
        // can't use fullName for variable since already function name - fullName()

        vector <double> grade;




    public:
        void setName(string fName, string lName);
        string fullName();
        
        void addGrade( double );
        double getScore(); // prints out the score -- maybe average?





}; // end student class


#endif
