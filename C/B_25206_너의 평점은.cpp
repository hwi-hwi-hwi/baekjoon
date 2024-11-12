#include <stdio.h>
#include <string.h>
 
struct subject{
	
	char name[51];
	float credit;
	char grade[3];
};

int main(){
	
	struct subject list[20];
	
	float credit_sum = 0;
	float grade_sum = 0;
	
	for(int i = 0; i < 20; i++){
		
		scanf("%s %f %s", &list[i].name, &list[i].credit, &list[i].grade);
		
		if(strcmp(list[i].grade, "P") != 0)		credit_sum += list[i].credit;
		
		if(strcmp(list[i].grade, "A+") == 0)	grade_sum += (list[i].credit * 4.5);
		else if(strcmp(list[i].grade, "A0") == 0)	grade_sum += (list[i].credit * 4.0);
		else if(strcmp(list[i].grade, "B+") == 0)	grade_sum += (list[i].credit * 3.5);
		else if(strcmp(list[i].grade, "B0") == 0)	grade_sum += (list[i].credit * 3.0);
		else if(strcmp(list[i].grade, "C+") == 0)	grade_sum += (list[i].credit * 2.5);
		else if(strcmp(list[i].grade, "C0") == 0)	grade_sum += (list[i].credit * 2.0);
		else if(strcmp(list[i].grade, "D+") == 0)	grade_sum += (list[i].credit * 1.5);
		else if(strcmp(list[i].grade, "D0") == 0)	grade_sum += (list[i].credit * 1.0);
		else if(strcmp(list[i].grade, "F") == 0)	grade_sum += (list[i].credit * 0.0);
	}
	
	float result = grade_sum / credit_sum;
	
	printf("%f", result);
	
	return 0;
}
