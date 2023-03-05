/*
---------------------------------------------------------------------------------------------------
Name :Doaa Tawfik
Group:One
Level:ONE
Topic:Mini Project 2
Problem():
....Write a program that allows the user to enter students’ names followed by their test scores.

The program shall output the following (assume that a maximum number of students is 20):

- The average score.
- Names of all the students whose test scores are below the average, with an appropriate warning message.
- Highest test score.
- Name of the top student, with an appreciation message.
----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#define N 2
int main ()
{
   /*variables decleration*/
   int i , x , totalScore = 0 , averageScore = 0 , highestScore=0 ;
   int Score[20];
   char Name[100][30];
   /*Loop to take students name and test Scores*/
   for( i = 0 ; i < N ; i++ )
   {
       printf("Student Name: ");
       scanf("%s[^\n]",&Name[i]);
       printf("Test Score for %s is ",Name[i]);
       scanf("%d",&Score[i]);
       printf("-------------------------------\n");
   }
   /*loop to calculate Average Score*/
   for( i = 0 ; i < N ; i++ )
   {
       totalScore += Score[i];
       averageScore = totalScore / N;
   }
   printf("The Average Score Is: %d\n",averageScore);
   /*Scores below average */
   for( i = 0 ; i < N ; i++ )
   {
       if ( Score[i] < averageScore )
       {
           printf("Dear Student , %s You need to study hard because you have got score (%d) which is less than average score %d \n",Name[i],Score[i],averageScore);
       }
   }
   printf("-------------------------------\n");
   /*loop to get highest score*/
   for( i = 0 ; i < N ; i++ )
   {
	   if(Score[i]== highestScore)
	   {

		   printf(" %s has got Highest test score with score %d \n",Name[i],highestScore);
	   }
       if ( Score[i] > highestScore )
       {
           highestScore = Score[i];
            x = i;
       }


   }
   printf(" %s has got Highest test score with score %d \n",Name[x],highestScore);
   printf("-------------------------------\n");
   /*top students*/
   for( i = 0 ; i < N ; i++ )
   {
       if ( Score[i] > averageScore )
       {
           printf("Dear %s, you have got one of the highest scores\v Keep going\n",Name[i]);
       }
   }
   printf("-------------------------------\n");


   return 0;
}
