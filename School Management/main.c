#include <stdio.h>
#include <stdlib.h>

struct student {
    char id[100];
    char name[100];
    char date_of_birth[100];
    char gender[100];
    char grade[100];
    char contact[100];
};

struct student *students = NULL;
int total_students = 0;

void add_Student(){

    students = (struct student *)malloc(sizeof(struct student));

//first memory allocation happens here rather up there ;)
    if (students == NULL) {
        printf("Memory allocation failed.");
        return -1;
    }

    total_students++; //this is increasing the number of students by one every damn time

    //we reallocate the memory to fit the new student kuba intially it was null
    students = (struct student * )realloc(students, total_students * sizeof(struct student));

    if (students == NULL){
        printf("Memory Allocation failed, crash, carsh :(");
        return;
    }

    printf("\nEnter Student Details\n");
    printf("\nFull Name: ");
    scanf("%99s", students[total_students - 1].name);
    printf("\nDate of Birth: ");
    scanf("%99s", students[total_students - 1].date_of_birth);
    printf("\nGender: ");
    scanf("%99s", students[total_students - 1].gender);
    printf("\nGrade: ");
    scanf("%99s", students[total_students - 1].grade);
    printf("\nContact: ");
    scanf("%s", students[total_students - 1].contact);
    sprintf(students[total_students - 1].id, "STD%04d", total_students);

}

void find_Student_By_Name_Or_Roll_Number(){
    char query[100];
    printf("\nEnter Student name or Roll Number\n");
    scanf("%s", &query);

    for(int i = 0; i<=total_students; i++){
        if(students[i].name == query || students[i].id == query){
             printStudentDetails(i);
        }
    }
}

void printStudentDetails(int num){
    printf("\n~~~Student Details~~~\n");
    printf("\nStudent ID: %s",students[num].id);
    printf("\nFull Name: %s",students[num].name);
    printf("\nDate of Birth: %s",students[num].date_of_birth);
    printf("\nGender: %s",students[num].gender);
    printf("\nGrade: %s",students[num].grade);
    printf("\nContact: %s",students[num].contact);
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
    printf("\t\t\t~~~~~SMIS PORTAL~~~~~\t\t\n\n 1.Add student details. \t\t\t 4.Count of students.\n\n 2.Find student by name or roll number.\t\t 5.Update students.\n\n 3.Find students registered in course \t\t 6.Delete Student \n\n");
    scanf( "%d" , &menu_Choice);
    switch(menu_Choice){

case 1:
    add_Student();
   printf("\n\nFull name: %s\n",  students[0].name);
   printf("Student ID: %s",  students[0].id);

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
