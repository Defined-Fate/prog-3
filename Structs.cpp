#include <iostream>
struct FussBall {
  char name[20];
  char surname[30];
  char club_name[20];

  struct Date_of_birth {
    unsigned int day;
    unsigned int month;
    unsigned int year;
  }; Date_of_birth dateofbirth;
};

void strcpy(char* where, const char *from){
  while(*from){
    *where = *from;
    where++;
    from++;
  }
  *where = '\0';
}

int main (int argc, char *argv[]) {
  FussBall student;
  strcpy(student.name, "Hans");
  strcpy(student.surname, "Zimmerman");
  strcpy(student.club_name, "Berlin_FC");

  student.dateofbirth.day = 10;
  student.dateofbirth.month = 2;
  student.dateofbirth.year = 2007;

  FussBall* points = &student;

  std::cout << points->name << " " << points->surname << " " << points->club_name << std::endl;

  std::cout << points->dateofbirth.day << "." << points->dateofbirth.month << "." << points->dateofbirth.year;
  return 0;
}
