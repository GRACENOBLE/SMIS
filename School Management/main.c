#include <stdio.h>
#include <stdlib.h>

void add_Student(){
    printf("\nComming soon\n");
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
