#include <stdio.h>
#include <string.h>

struct list{
	
	char subject[101];
	int credit;
	char grade[3];
};

int main(){
	
	int n;
	scanf("%d", &n);
	
	struct list s[n];
	
	float sum = 0;
	int credit_sum = 0;
	
	for(int i = 0; i < n; i++){
		
		scanf("%s", &s[i].subject);
		scanf("%d", &s[i].credit);
		scanf("%s", &s[i].grade);
		
		credit_sum += s[i].credit;
		
		if(!strcmp(s[i].grade, "A+"))	sum += s[i].credit * 4.3;
		else if(!strcmp(s[i].grade, "A0"))	sum += s[i].credit * 4.0;
		else if(!strcmp(s[i].grade, "A-"))	sum += s[i].credit * 3.7;
		else if(!strcmp(s[i].grade, "B+"))	sum += s[i].credit * 3.3;
		else if(!strcmp(s[i].grade, "B0"))	sum += s[i].credit * 3.0;
		else if(!strcmp(s[i].grade, "B-"))	sum += s[i].credit * 2.7;
		else if(!strcmp(s[i].grade, "C+"))	sum += s[i].credit * 2.3;
		else if(!strcmp(s[i].grade, "C0"))	sum += s[i].credit * 2.0;
		else if(!strcmp(s[i].grade, "C-"))	sum += s[i].credit * 1.7;
		else if(!strcmp(s[i].grade, "D+"))	sum += s[i].credit * 1.3;
		else if(!strcmp(s[i].grade, "D0"))	sum += s[i].credit * 1.0;
		else if(!strcmp(s[i].grade, "D-"))	sum += s[i].credit * 0.7;
		else if(!strcmp(s[i].grade, "F"))	continue;
	}
	
	float result = sum / credit_sum;
	
	printf("%.2f", result);
	
	return 0;
}
