#include <stdio.h>
#include <stdlib.h>

struct member{
	int age;
	char name[101];
};

member[100001];

void compare(const int *a, const int *b);

int main(){
	
	int n;
	scanf("%d", &n);
	
	
	
	for(int i = 0; i < n; i++){
		
		scanf("%d %s", &members[i].age, &members[i].name);
	}
	
	qsort(members, n, sizeof(struct member), compare);
	
	for(int i = 0; i < n; i++){
		
		printf("%d %s\n", members[i].age, members[i].name);
	}
	
	return 0;
}

int compare(const void *a, const void *b){
	
	return (*a - *b);
}
