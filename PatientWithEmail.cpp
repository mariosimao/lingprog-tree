#include <iostream>
#include "PatientWithEmail.h"

PatientWithEmail::PatientWithEmail(string name, string email)
{
    this->_name = name;
    this->_email = email;
}

void PatientWithEmail::print()
{
    cout << this->_name << " ( " << this->_email << " ) ";
}
