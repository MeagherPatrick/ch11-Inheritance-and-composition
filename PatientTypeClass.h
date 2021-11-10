#include "personType.h"
#include <string>

using namespace std;

class patientType: public personType
{
public:
  void set_info();
  void print_info();
  //void print() const;
  // Function to output the first name and last name
  // in the form firstName lastName.

  // Function to set firstName and lastName according
  // to the parameters.
  // Postcondition: firstName = first; lastName = last

  //string getFirstName() const;
  /// Function to return the first name.
  // Postcondition: The value of the data member firstName
  //               is returned.

  //string getLastName() const;
  // Function to return the last name.
  // Postcondition: The value of the data member lastName
  //               is returned.

  patientType();
  // constructor
  // Sets firstName and lastName according to the parameters.
  // The default values of the parameters are empty strings.
  // Postcondition: firstName = first; lastName = last

private:
  int id;
  int age;
  string DOB;
  string date_admitted;
  string date_discharge;
  //string firstName; // variable to store the first name
  //string lastName;  // variable to store the last name
};