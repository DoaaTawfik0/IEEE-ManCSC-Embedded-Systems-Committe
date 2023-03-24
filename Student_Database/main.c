#include <stdio.h>
#include "Student.c"
int main()
{
    Queuex Q;
    createQueue(&Q);
    int choice;
    printf("--------------------------------------------------------\n");
    printf("          Welcome to Student Management System          \n");
    printf("--------------------------------------------------------\n");
    while (1)
    {

        printf("          Choose one of the following options         \n");
        printf("\n 1 : Add a Student Manually");
        printf("\n 2 : Add Students From Text File");
        printf("\n 3 : View Students Details by (Roll Number)");
        printf("\n 4 : View Students Details by (First Name)");
        printf("\n 5 : View Students Details by (Course ID)");
        printf("\n 6 : View All Students Details");
        printf("\n 7 : View Total Number of Students");
        printf("\n 8 : Update a Student Details by (Roll Number)");
        printf("\n 9 : Delete a Student Details by (Roll Number)");
        printf("\n 10: Save Students Details To Text File");
        printf("\n 11: End Program");
        printf("\n----------------------------------------------\n");
        printf("\nEnter your choice to perform the task:");
        scanf("%d", &choice);
        printf("\n----------------------------------------------\n");

        switch (choice)
        {
        case 1:
            Add_students_Manually(&Q);
            break;
        case 2:
            Add_Students_by_file(&Q);
            break;

        case 3:
            View_Students_Details_by_Roll_Number(&Q);
            break;

        case 4:
            View_Students_Details_by_First_Name(&Q);
            break;
        case 5:
            View_Students_Details_by_Course_ID(&Q);
            break;
        case 6:
            Print_All_Students(&Q);
            break;
        case 7:
            Count_Students(Q);
            break;
        case 8:
            Update_Student(&Q);
            break;
        case 9:
            Delete_Student_Details_by_Roll_Number(&Q);
            break;
        case 10:
            Save_Students_Details_To_Text_File(&Q);
            break;
        case 11:
            printf("Program is end\n");
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
            printf("-------------------------------\n");
            break;
        }
    }

    return 0;
}
