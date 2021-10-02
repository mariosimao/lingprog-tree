LD = g++
LFLAGS = -std=c++11 -Wall

INCLUDES = main.cpp Patient.cpp PatientWithTelephone.cpp PatientWithEmail.cpp UserInterface.cpp Registration.cpp

EXECUTABLE = registration

all:
	$(LD) $(LFLAGS) -o $(EXECUTABLE) $(INCLUDES)

clean:
	rm -rf *.o $(EXECUTABLE)
