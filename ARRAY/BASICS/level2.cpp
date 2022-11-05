#include <iostream>
using namespace std;

int main() {

  // declaration and initialization of an array;
  int student[] = {90,80,70,60,75};
  // loop to access elements of the array
  for (int i = 0; i < 5; i++) {
    // displaying marks of students
    cout << "Marks of student" << i + 1 << ": " << student[i] << "\n";
  }

}