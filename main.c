#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int grade[5];
	int sum;
	
	int *ptr;
	ptr = grade;
	
	for (i=0;i<5;i++)
{
	printf("input value [%i] = ", i);
	scanf("%d", &grade[i]);
	sum	+= *(ptr+i);	// *(ptr+i) ǥ���� Ȱ���Ͽ� �� �迭�� ���� ���� 
}

	for (i=0;i<5;i++)
	printf("grade[%d] = %d\n", i, grade[i]);
	printf("\n");
	printf("average = %d\n", sum/5);
	return 0;
}
