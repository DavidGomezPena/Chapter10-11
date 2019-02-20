#include <iostream>
#include "personType.h"
using namespace std;
int main() {
  //This is setting the name to Mary Beth Regan
  personType student("Mary","Beth","Regan");
  //This calls the function to print the name
  student.print();
  cout << endl;
  //This tells you if the last name if it matches Regan
  if(student.isLastName("Regan")){
    cout << "Student\'s last name is Regan" << endl;
  }
  else{
    cout << "Student\'s last name is not Regan" << endl;
  }
  //This tells you if the first name if it matches Mary
  if(student.isFirstName("Mary")){
    cout << "Student\'s first name is Mary" << endl;
  }
  else{
    cout << "Student\'s first name is not Mary" << endl;
  }
  return 0;
}
