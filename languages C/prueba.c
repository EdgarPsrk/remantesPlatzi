#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PERSON
 {
   char name [100];
   int age;
 };

 void fillPersonData(struct PERSON * person, const char * name, int age)
  {
    if (strlen(name) < 100)
     {
       strcpy(person->name, name);
     }
  person->age = age;
  }

  int main (int argc, const char * argv[])
   {
    struct PERSON person;

    if (argc < 3);
    {
     printf("Indique su nombre y edad \n");
     return 1;
    }
    fillPersonData( &person, argv[1], atoi( argv[2] ) );
    //person.age = atoi(argv[2]);
    printf("Nombre = %s\nage = %d\n", person.name, person.age);
    return 0;
   }
