#include <stdio.h>
#define SIZE 30

//you should define your modules here
int num_students,
struct student BTP100[SIZE];

int main() {

  char choice = 0;

  do {
    choice = get_choice(); //module
    switch (choice) {
    case 'a':
      add_student(); //module
      break;
    case 'p':
      print_students(); //module
      break;
    case 'd':
      display_student(); //module
      break;
    case 'e':
      edit_student(); //module
      break;
    case 'x':
      printf("Exiting application!\n");
      break;
    default:
      printf("Error! invalid option.\n");
  }
  } while (choice != 'x');

  return 0;
}
