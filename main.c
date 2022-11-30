#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME      20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int     ID;
	char    name[MAX_NAME];
	double  grade;
};

int main(int argc, char *argv[]) {
	
	struct student student1 = {123456, "Juyeop", 4.2};
	
	student1.ID = 1234567;
	strcpy(student1.name, "Jina");
	student1.grade = 3.4;
	
	printf("ID: %i\n", student1.ID);
	printf("name: %s\n", student1.name);
	printf("grade: %f\n", student1.grade);

	return 0;
}
