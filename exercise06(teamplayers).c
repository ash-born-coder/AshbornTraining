/*
Name - Chanuka Ashan GUnawardena
Module - Software Construction 1 (C programming)

Description - Pupils are divided into eight groups for an athletic competiotion. This program determines the number of pupils in 
each team and how many pupils remained left over with two classes with 24 pupils and the other two with 25 and 25.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

	int classA = 24;
	int classB = 24;
	int classC = 25;
	int classD = 26;
	int totalStudents = classA + classB + classC + classD;  //getting the summation of total number of students
	int teamNum = 8;
	int studentsInGroup = totalStudents / teamNum;  //dividing the total number of student by the number of groups
	int studentsRemaining = totalStudents % teamNum;

	printf("The number of pupils in each team: %d\n", studentsInGroup);
	printf("The number of pupils remaining: \%d", studentsRemaining);

	return 0;
}
