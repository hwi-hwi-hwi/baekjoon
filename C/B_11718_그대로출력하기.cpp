#include <stdio.h>

/*  ���ڿ� + EOF 
int main(){
	
	char string[101];
	
	while(scanf("%[^\n]]", string) != EOF){
		printf("%s\n", string);
		getchar();
	}

	return 0;
}
*/

// ���� + EOF
int main(){
	
	char a;
	
	while(scanf("%c", &a) != EOF){
		printf("%c", a);
	}
	
	return 0;
} 
