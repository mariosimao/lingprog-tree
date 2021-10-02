#include <iostream>
#include "PatientWithTelephone.h"

PatientWithTelephone::PatientWithTelephone(string name, string telephone)
{
    this->_name = name;
    this->_telephone = telephone;
}

void PatientWithTelephone::print()
{
    cout << this->_name << " ( " << this->_telephone << " ) ";
}
