#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//structure for student INFO
typedef struct Student
{
    char fName[50];
    char lName[50];
    int courses[10][50];//50 student && 10 courses available
    int ID;
    float GPA;
}student;
//Structure for Queue
typedef struct queue
{
    int Front;
    int Rear;
    int Size;
    student data[50];

}Queuex;

void Add_students_Manually(Queuex *PQ);
void View_Students_Details_by_Roll_Number(Queuex *PQ);
void View_Students_Details_by_First_Name(Queuex *PQ);
void View_Students_Details_by_Course_ID(Queuex *PQ);
void Count_Students(Queuex q);
void Delete_Student_Details_by_Roll_Number(Queuex *PQ);
void Update_Student( Queuex *pq);
void Print_All_Students(Queuex *PQ);
void Add_Students_by_file(Queuex *PQ);

void createQueue(Queuex *PQ);
int QueueEmpty(Queuex *PQ);
int QueueFull(Queuex *PQ);
void clearQueue(Queuex *PQ);

