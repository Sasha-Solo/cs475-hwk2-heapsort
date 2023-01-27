#include <stdio.h>
#include "employee.h"
#include "heap.h"

#define MAX_EMPLOYEES 5

int main(int argc, char *argv[])
{
	//TODO
	Employee A[MAX_EMPLOYEES] = {}; //array A to hold employees

	int i = 0;
	//asks user for name and salary
	while (i != MAX_EMPLOYEES){ //keep getting user input until MAX_EMPLOYEES is reached
		printf("\nName: "); //ask for name
		scanf("%s", A[i].name);
		printf("Salary: "); //asks for salary
		scanf("%d", &A[i].salary);

		i++;
	}
	printf("\nBefore: ");
	printList(A, MAX_EMPLOYEES);

	heapSort(A, MAX_EMPLOYEES);

	printf("\nAfter: ");
	printList(A, MAX_EMPLOYEES);
	
	return 0;
}
