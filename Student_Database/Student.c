#include "Queue.c"
int flag , i, j, Roll_Number;
// function to add student details manually
void Add_students_Manually(Queuex *PQ)
{
    student S;
    if (QueueFull(PQ))
    {
        printf("Maximum Number of Students is 50\n");
        printf("You can't add new student\n");
        printf("----------------------------\n");
    }
    else
    {
        printf("Add Student Manually\n");
        printf("----------------------------\n");
        printf("Enter Roll Number : ");
        scanf("%d", &S.ID); // rear is incremented
        fflush(stdin);
        printf("Enter First Name: ");
        gets(S.fName);
        fflush(stdin);
        printf("Enter last Name: ");
        gets(S.lName);
        fflush(stdin);
        printf("Enter The GPA: ");
        scanf("%f", &S.GPA);
        fflush(stdin);
        printf("Enter The course Id for Each Course:\n");
        for (i = 0; i < 5; i++)
        {
            printf("Course %d ID: ", i + 1);
            scanf("%d", &S.courses[i][PQ->Rear + 1]);
        }
        printf("\n");
        fflush(stdin);
        // check for uniqueness of roll number
        for (int i = PQ->Front; i <= PQ->Rear; i++)
        {
            if (PQ->data[i].ID == S.ID)
            {
                printf("Roll number already exists!\n");
                return;
            }
        }
        PQ->data[++PQ->Rear] = S;
        PQ->Size++;
        printf("INFO: Roll number %d is successfully added \n", S.ID);
        printf("INFO: The Total Number Of Students is %d\n", PQ->Size);
        printf("INFO: The Maximum Number Of Students can be added is 50\n");
        printf("INFO: The Number Of Students can be added is %d\n", (50 - (PQ->Size)));
        printf("----------------------------\n");
        printf("----------------------------\n");
    }
}

// Function to view Students Details by Roll Number
void View_Students_Details_by_Roll_Number(Queuex *PQ)
{
    flag = 0;
    printf("View Students Details by Roll Number\n");
    printf("----------------------------\n");
    printf("Enter The Roll Number: ");
    scanf("%d", &Roll_Number);
    for (i = 0; i < PQ->Size; i++)
    {
        if (Roll_Number == (PQ->data[i].ID))
        {
            printf("The Student details are: \n");
            printf("Index:           %d\n", i);
            printf("RollNumber:      %d\n", PQ->data[i].ID);
            printf("FirstName:       %s\n", PQ->data[i].fName);
            printf("LastName:        %s\n", PQ->data[i].lName);
            printf("GPA:             %.2f\n", PQ->data[i].GPA);
            printf("Courses:         ");
            for (j = 0; j < 5; j++)
            {
                printf("%d ", PQ->data[i].courses[j][i]);
            }
            printf("\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Roll Number %d not found\n", Roll_Number);
    printf("--------------------------------\n");
    printf("--------------------------------\n");
}
// Function to view Students Details by First Name
void View_Students_Details_by_First_Name(Queuex *PQ)
{
    char Fname[50] ;
    flag = 0;
    printf("View Students Details by First Name\n");
    printf("----------------------------\n");
    printf("Enter First Name: ");
    scanf("%s", Fname);
    for (i = 0; i < PQ->Size; i++)
    {
        if (!(strcmp(Fname, PQ->data[i].fName)))
        {
            printf("The Student details are: \n");
            printf("Index:           %d\n", i);
            printf("RollNumber:      %d\n", PQ->data[i].ID);
            printf("FirstName:       %s\n", PQ->data[i].fName);
            printf("LastName:        %s\n", PQ->data[i].lName);
            printf("GPA:             %.2f\n", PQ->data[i].GPA);
            printf("Courses:         ");
            for (j = 0; j < 5; j++)
            {
                printf("%d ", PQ->data[i].courses[j][i]);
            }
            flag = 1;
        }
    }printf("\n");
    if (flag == 0)
        printf(" %s not found\n", Fname);
    printf("--------------------------------\n");
    printf("--------------------------------\n");
}
// Function to view Students Details by Course ID
void View_Students_Details_by_Course_ID(Queuex *PQ)
{
    int Course_Id;
    flag = 0;
    printf("----------------------------\n");
    printf("View Students Details by Course ID\n");
    printf("----------------------------\n");
    printf("Enter Course ID: ");
    scanf("%d", &Course_Id);
    fflush(stdin);
    for (i = 0; i < PQ->Size; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (Course_Id == (PQ->data[i].courses[j][i]))
            {
                printf("The Student details are: \n");
                printf("Index:           %d\n", i);
                printf("RollNumber:      %d\n", PQ->data[i].ID);
                printf("FirstName:       %s\n", PQ->data[i].fName);
                printf("LastName:        %s\n", PQ->data[i].lName);
                printf("GPA:             %.2f\n", PQ->data[i].GPA);
                printf("Courses:         ");
                for (j = 0; j < 5; j++)
                {
                    printf("%d ", PQ->data[i].courses[j][i]);
                }
                printf("\n");
                flag = 1;
                printf("------------------------------\n");
                continue;
            }
        }
    }
    if (flag == 0)
        printf("Course %d not found\n", Course_Id);
    printf("--------------------------------\n");
}
// function to count the number of student in the system
void Count_Students(Queuex q)
{
    printf("Total number of students: %d\n", q.Rear - q.Front + 1);
    printf("----------------------------\n");
}

// Function to view all students details
void Print_All_Students(Queuex *PQ)
{
    if (QueueEmpty(PQ))
    {
        printf("Queue is empty\n");
        printf("----------------------------\n");
        return;
    }
    for (i = PQ->Front; i <= PQ->Rear; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("First Name: %s\n", PQ->data[i].fName);
        printf("Last Name: %s\n", PQ->data[i].lName);
        printf("Roll Number: %d\n", PQ->data[i].ID);
        printf("GPA: %.2f\n", PQ->data[i].GPA);
        printf("Courses:\n");
        for (j = 0; j < 5; j++)
        {
            printf("%d\n", PQ->data[i].courses[j][i]);
        }
        printf("---------------------------------\n");
    }
}

// Function to delete Student Details by Roll Number
void Delete_Student_Details_by_Roll_Number(Queuex *PQ)
{
    flag = 0;
    printf("Delete the Students Details by Roll Number\n");
    printf("----------------------------\n");
    if (QueueEmpty(PQ))
    {
        printf("Queue is empty\n");
        printf("----------------------------\n");
        return;
    }
    printf("Enter The Roll Number: ");
    scanf("%d", &Roll_Number);
    for (int i = PQ->Front; i <= PQ->Rear; i++)
    {
        if (Roll_Number == (PQ->data[i].ID))
        {
            flag = 1;
            printf("INFO: Roll number %d is found in queue.\n", Roll_Number);
            // Dequeue operation
            for (int j = i; j < PQ->Rear; j++)
            {
                PQ->data[j] = PQ->data[j + 1];
            }
            PQ->Rear--;
            PQ->Size--;
            printf("INFO: Roll number %d is successfully deleted.\n", Roll_Number);
            printf("INFO: The Total Number Of Students is %d\n", PQ->Size);
            printf("----------------------------\n");
            printf("----------------------------\n");
            return;
        }
    }
    if (flag == 0)
    {
        printf("Roll number %d is not found in queue.\n", Roll_Number);
    }
}

// function to update student info
void Update_Student(Queuex *PQ)
{
    int Option;
    printf("Enter roll number of student to update: ");
    scanf("%d", &Roll_Number);
    for (i = PQ->Front; i <= PQ->Rear; i++)
    {
        if (PQ->data[i].ID == Roll_Number)
        {
            printf("Enter field to update:\n");
            printf("1. First name\n");
            printf("2. Last name\n");
            printf("3. GPA\n");
            printf("4. Courses\n");
            printf("Enter Option Number: ");
            scanf("%d", &Option);
            fflush(stdin);
            switch (Option)
            {
            case 1:
                printf("Enter new first name: ");
                gets(PQ->data[i].fName);
                fflush(stdin);
                printf("First Name is updated successfully\n");
                printf("----------------------------\n");
                break;
            case 2:
                printf("Enter new last name: ");
                gets(PQ->data[i].lName);
                fflush(stdin);
                printf("Last Name is updated successfully\n");
                printf("----------------------------\n");
                break;
            case 3:
                printf("Enter new GPA: ");
                scanf("%f", &PQ->data[i].GPA);
                fflush(stdin);
                printf("GPA is updated successfully\n");
                printf("----------------------------\n");
                break;
            case 4:
                printf("Enter The course Id for Each Course: \n");
                // val (1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10)
                for (int j = 0; j < 5; j++)
                {
                    printf("Course %d ID: ", j + 1);
                    scanf("%d", &PQ->data[i].courses[j][i]);
                    printf("\n");
                }
                fflush(stdin);
                break;
            }
            return;
        }
        else
        {
            printf("----------------------------\n");
            printf("Roll number not found\n");
            printf("----------------------------\n");
        }
    }
}

void Add_Students_by_file(Queuex *PQ)
{
    char line[1000];
    FILE *fp = fopen("Student.txt", "r");
    if (fp == NULL)
    {
        printf("Error: failed to open file\n");
        return;
    }

    while (fgets(line, sizeof(line), fp))
    {
        student S;
        sscanf(line, "%d %s %s %f %d %d %d %d %d %d",
               &S.ID, S.fName, S.lName, &S.GPA,
               &S.courses[0][PQ->Rear + 1], &S.courses[1][PQ->Rear + 1], &S.courses[2][PQ->Rear + 1],
               &S.courses[3][PQ->Rear + 1], &S.courses[4][PQ->Rear + 1]);

        // check for uniqueness of roll number
        int found = 0;
        for (int i = PQ->Front; i <= PQ->Rear; i++)
        {
            if (PQ->data[i].ID == S.ID)
            {
                printf("INFO: Roll number %d already exists!\n", S.ID);
                found = 1;
                break;
            }
        }

        if (found)
        {
            continue;
        }

        if (PQ->Size >= 50)
        {
            printf("Error: maximum number of students reached\n");
            break;
        }

        PQ->data[++PQ->Rear] = S;
        PQ->Size++;
        printf("INFO: Roll number %d is successfully added \n", S.ID);
    }
    printf("----------------------------\n");
    fclose(fp);
}
// Function to Save Students details to text File
void Save_Students_Details_To_Text_File(Queuex *PQ)
{
    flag = 0;
    FILE *fp = fopen("Student.txt", "r+");
    if (fp == NULL)
    {
        printf("Error: failed to open file\n");
        return;
    }
    else
    {
        for (i = PQ->Front; i <= PQ->Rear; i++)
        {
            fprintf(fp, "%d %s %s %.2f ", PQ->data[i].ID, PQ->data[i].fName, PQ->data[i].lName, PQ->data[i].GPA);
            fprintf(fp, "%d %d %d ", PQ->data[i].courses[0][i], PQ->data[i].courses[1][i], PQ->data[i].courses[2][i]);
            fprintf(fp, "%d %d \n", PQ->data[i].courses[3][i], PQ->data[i].courses[4][i]);
            flag = 1;
        }
        if(flag == 1)
            printf("Students Details have been added to Text File successfully \n");
        else
            printf("There is no students to add\n");
    }
    printf("---------------------------------\n");

    fclose(fp);
}
