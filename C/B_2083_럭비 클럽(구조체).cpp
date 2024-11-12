#include <stdio.h>
#include <string.h>

struct member{
	
	char name[11];
	int age;
	int weight;
};

int main(){

	while(1){
		
		struct member input;
		
		scanf("%s %d %d", input.name, &input.age, &input.weight);
		
		if(strcmp(input.name, "#") == 0 && input.age == 0 && input.weight == 0)	break;
		
		if(input.age >= 18 || input.weight >= 80)	printf("%s Senior\n", input.name);
		else	printf("%s Junior\n", input.name);
	}

	return 0;
}
