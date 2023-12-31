#include <stdio.h>
#include <stdlib.h>

struct Student { 
    int ID; 
    char firstName;
    char lastName;
    int age; 
    char enrolledCourses[]; 
};

void findStudentByID(); //Find student by roll ID
void findStudentByName(); //Find student by first name 
void findStudetsInCourse(); //Find all students enrolled in a course
void createStudent() { 
    struct Student newStudent;

    printf("Enter the ID: \n"); 
    scanf("%d", &newStudent->ID);

    printf("Enter first name: \n"); 
    scanf("%c", &newStudent->firstName);
    
    printf("Enter last name: \n"); 
    scanf("%c", &newStudent->lastName);

    printf("Enter age of student: \n"); 
    scanf("%d", &newStudent->age); 

    printf("Is the student enrolled in any courses? (1 - YES / 2 - NO)\n"); 

    int userChoice; 
    int allCourses; 

    scanf("%d", &userChoice); 
    while(userChoice > 2) {
        if(userChoice == 1) {
            printf("How many courses? \n");
            scanf("%d", &allCourses); 

            newStudent->enrolledCourses[allCourses];

            for(int i = 0; i < allCourses; i++){
                scanf("%c", %newStudent->enrolledCourses[i]);
            }
        } else if(userChoice == 2) { 
            printf("Ok!");
            newStudent->enrolledCourses[0];
        } else { 
            printf("You are out of range!");
        }
    }

    FILE *fptr; 
    fptr = fopen("studentsDB.txt", "w"); 
    fprintf(fptr, "\nStudent ID: %d \nStudent First Name: %c \nStudent Last Name: %c \nStudent age: %d \nStudent Courses: %c \n", newStudent->ID, newStudent->firstName, newStudent->lastName, newStudent->age, newStudent->enrolledCourses);

    fclose(fptr);

    return newStudent;
}; //Create student 
void deleteStudent(); //Delete student
void updateStudent(); //Update student

int main() { 

    int n; 
    scanf("%d", &n); 

    while(n > 6) {
        if(n == 1){ 
            createStudent();
        } else if(n == 2){ 
            findStudentByName();
        }else if(n == 3) {
            findStudentByNumber();
        } else if (n == 4) {
            findStudetsInCourse(); 
        } else if (n == 5) {
            deleteStudent(); 
        } else if (n == 6) {
            updateStudent(); 
        } else {
            printf("You out of range! Try again!"); 
        }
    }


    return 0; 
}


findStudentByID() { 
    printf("Certanly this function is not created already!");
}

findStudentByName() { 
    printf("Certanly this function is not created already!");
}

findStudetsInCourse() { 
    printf("Certanly this function is not created already!");
}

updateStudent() { 
    printf("Certanly this function is not created already!");
}

deleteStudent() { 
    printf("Certanly this function is not created already!");
}

