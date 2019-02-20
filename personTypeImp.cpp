//Including the libraries 
#include <iostream>
#include <string>
#include "personType.h"

using namespace std;
//This prints out the full name of the person
void personType::print() const{
  cout << firstName << " " << middleName << " " << lastName;
}
void personType::setName(string first,string middle,string last){
  firstName = first;
  middleName = middle;
  lastName = last;
}

void personType::setLastName(string last){
  lastName = last;
}
void personType::setFirstName(string first){
  firstName = first;
}
void personType::setMiddleName(string middle){
  middleName = middle;
}

bool personType::isLastName(string last) const{
  return (lastName == last);
}

bool personType::isFirstName(string first) const{
  return (firstName == first);
}
string personType::getFirstName() const{
  return firstName;
}
string personType::getMiddleName() const{
  return middleName;
}
string personType::getLastName() const{
  return lastName;
}

personType::personType(string first, string middle, string last){
  firstName = first;
  middleName = middle;
  lastName = last;
}
