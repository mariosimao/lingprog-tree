#include <iostream>
#include "Registration.h"

void Registration::insert(Patient patient)
{
    auto insertResult = (this->_patients += patient);

    if (!insertResult) {
        throw runtime_error("Patient already registered.");
    }

    return;
}

Patient* Registration::search(string patientName)
{
    auto searchResult = this->_patients(patientName);

    if (!searchResult) {
        throw runtime_error("Patient not found");
    }

    return searchResult;
}

void Registration::print()
{
    cout << this->_patients;
}
