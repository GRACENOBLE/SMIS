#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char id[100];
    char name[100];
    char date_of_birth[100];
    char gender[100];
    char grade[100];
    char contact[100];
} students[100];

//struct student *students = NULL;
int total_students = 0;

void add_Student(){


    total_students++; //this is increasing the number of students by one every damn time

    printf("\nEnter Student Details\n");
    printf("\nFirst Name: ");
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

    SelectTask();

}
//convert name to lowercase - any string
//we need this to make ur program case insensitive
//imagine a user looking for john doe, yet he saved John Doe
char toLowerCase(char str[100]){
     for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    return str;
}

void find_Student_By_Name_Or_Roll_Number(){
    char query[100];
    printf("\nEnter Student name or Roll Number\n");
    scanf("%s",&query);

    for(int i = 0; i<total_students; i++){

        //duplicates of id and name so that we dont damage the originals
        char name[100];
        char id[100];

        strcpy(name, students[i].name);
        strcpy(id, students[i].id);

        int comparison = strcmp(strlwr(query),strlwr(name));

        if(comparison == 0){
           printStudentDetails(i);
           //printf("Query %s",strlwr(query));
        }

//apparently you cant directly compare strings in C
// you need the strcmp function from the string.h library, haha
//c got a library. notice I added it at the top
        //if(strcmp(toLowerCase(name),toLowerCase(query)) == 0 || strcmp(toLowerCase(id),//toLowerCase(query)) == 0){
            // printStudentDetails(i);
      //  }
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
    printf("\n___________________");
}

void display_all_Students(){
    int i = 0;
     while(i < total_students){

        printStudentDetails(i);
        i++;
     }
}

void delete_Student(){
    printf("\nComming soon\n");
}

void update_Student(){
    printf("\nComming soon\n");
}

void exit_Program() {
    free(students);
}

void SelectTask(){
    int menu_Choice;
    printf("\t\t\t~~~~~SMIS PORTAL~~~~~\t\t\n\n 1.Add student details. \t\t\t 4.Update Student\n\n 2.Find student by name or roll number.\t\t 5.Delete Student\n\n 3.Display Students \t\t\t 6.Exit program \n\n");
    scanf( "%d" , &menu_Choice);


    switch(menu_Choice){
        case 1:
            add_Student();
            break;

        case 2:
            find_Student_By_Name_Or_Roll_Number();
            break;

        case 3:
            display_all_Students();
            break;

        case 4:
            delete_Student();
            break;

        case 5:
            update_Student();
            break;

        case 6:
            exit_Program();
            break;

        default:
            printf("Sorry, %d is an invalid choice, lets try that again:\n\n", menu_Choice);
            SelectTask();
            break;

    }
}



int main()
{
    SelectTask();
    return 0;
}
