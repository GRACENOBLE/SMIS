#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char Student_ID[10];
    char Full_Name[20];
    char Date_of_Birth[10];
    char Gender[6];
    char Contact_Information[15];
} student;

student students[];
int index = sizeof(student);

void add_Student(){
    printf("\nPlease input student details:");

    printf("\nStudent_ID:\t");
    scanf("%s", &students[index].Student_ID);

    printf("\nFull_Name:\t");
    scanf("%s", &students[index].Full_Name);

    printf("\nDate_of_Birth:\t");
    scanf("%s", &students[index].Date_of_Birth);

    printf("\nGender:\t");
    scanf("%s", &students[index].Gender);

    printf("\nContact_Information:\t");
    scanf("%s", &students[index].Contact_Information);

    printf("\n\nStudent successfully added.\n\n1.Add another student\n2.Go back to the main menu\n3.Exit the program");
    int choice;
    scanf( "%d" , &choice );
    switch(choice){
case 1:
    add_Student();
    break;
case 2:
    main();
    break;
default:
    return 0;
    break;


    }

}

void find_Student_By_Name_Or_Roll_Number(){
    printf("\nComming soon\n");
}

void find_Students_Registered_In_Course(){
    printf("\nComming soon\n");
}

void count_Of_Students(){
    printf("\nComming soon\n");
}

void delete_Student(){
    printf("\nComming soon\n");
}

void update_Student(){
    printf("\nComming soon\n");
}

void main()
{
    int menu_Choice;
    printf("\t\t\t~~~~~SMIS PORTAL~~~~~\t\t\n\n1.Add student details.\t\t\t\t2.Find student by name or roll number.\n\n3.Find students registered in course.\t\t4.Count of students.\n\n5.Delete student\t\t\t\t6.Update student\n\n");
    scanf( "%d" , &menu_Choice);
    switch(menu_Choice){

case 1:
    add_Student();
    break;

case 2:
    find_Student_By_Name_Or_Roll_Number();
    break;

case 3:
    find_Students_Registered_In_Course();
    break;

case 4:
    count_Of_Students;
    break;

case 5:
    delete_Student();
    break;

case 6:
    update_Student();
    break;

default:
    printf("Sorry, %d is an invalid choice, lets try that again:\n\n", menu_Choice);
    main();
    break;

    }
}
