#ifndef PATIENT_WITH_TELEPHONE_H
#define PATIENT_WITH_TELEPHONE_H

#include "Patient.h"

class PatientWithTelephone: public Patient
{
    private:
        string _telephone;
    public:
        PatientWithTelephone(string name, string telephone);
        void print();
};

#endif
