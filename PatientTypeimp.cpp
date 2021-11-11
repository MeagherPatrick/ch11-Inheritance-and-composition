#include "PatientTypeClass.h"
#include <iostream>

patientType::patientType()
{
  string fName = "", lName = "";
  setName(fName, lName);
   id = 0;
   age = 0;
   DOB = "";
   date_admitted = "";
   date_discharge = "";
}
void patientType::set_info()
{
  
    string fName, lName;
  cout << "Please enter id: ";
  cin >> id;
  cout << "Please enter first name: ";
  cin.ignore(1000, '\n');
  cin >> fName;
  cout << "Please enter last name: ";
  cin.ignore(1000, '\n');
  cin >> lName;
  setName(fName, lName);
  DOB = "01/09/1995";
  date_admitted = " 11/05/2016";
  date_discharge = "11/05/2020";
  
}

void patientType::print_info()
{
  cout << "Patient Name: ";
  personType::print();
  cout << '\n';
  //cout << "first name: " << fName << '\n';
  //cout << "last name: " << lName << '\n';
  cout << "Admission Date: " << date_admitted << '\n';
  cout << "Discharge Date: " << date_discharge << '\n';
  cout << "Date of birth: " << DOB << '\n';
  cout << "ID: " << id << '\n';


}
