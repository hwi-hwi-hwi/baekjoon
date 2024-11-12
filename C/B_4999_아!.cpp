#include <stdio.h>
#include <string.h>

int main(){
	
	char can_do[1001];
	char dr[1001];
	
	scanf("%s", can_do);
	scanf("%s", dr);
	
	int length1 = strlen(can_do);
	int length2 = strlen(dr);
	
	if(length1 >= length2)	printf("go");
	else	printf("no");	
	
	return 0;
}
