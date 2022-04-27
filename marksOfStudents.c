/*
	Write a program that reads marks of student in seven subjects.
	Calculate the percentage if the student has achieved greater than 45 in 
	each subject and use these conditionsPercentage greater than equals to 80 is distinction
	Percentage from 60 to 79 is first divisionPercentage from 45 to 59 is second division
*/

#include <stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6,m7;
	float marks,percentage;
	printf("Enter Marks Of Student in each Subjects.\n");
	printf("Enter Marks in Maths : \n");
	scanf("%d",&m1);
	printf("Enter Marks in Science : \n");
	scanf("%d",&m2);
	printf("Enter Marks in Nepali : \n");
	scanf("%d",&m3);
	printf("Enter Marks in English : \n");
	scanf("%d",&m4);
	printf("Enter Marks in Social Studies : \n");
	scanf("%d",&m5);
	printf("Enter Marks in Computer Science : \n");
	scanf("%d",&m6);
	printf("Enter Marks in Optional Maths : \n");
	scanf("%d",&m7);
	if(m1>= 45 && m2>= 45 && m3>= 45 && m4>= 45 && m5>= 45 && m6>= 45 && m7>= 45){
		percentage = (m1+m2+m3+m4+m5+m6+m7) / 7;
		if(percentage >= 80){
			printf("Students is passed with %.2f%% with Distinction.\n",percentage);
		}
		else if(percentage<80 && percentage>=60){
			printf("Students is passed with %.2f%% with First Division.\n",percentage);
		}
		else if(percentage>=45 && percentage<60){
				printf("Students is passed with %.2f%% with Second Division.\n",percentage);
		}
	}
	else{
		printf("Student is failed.");
	}
}