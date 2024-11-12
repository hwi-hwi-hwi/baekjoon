#include <stdio.h>
#include <string.h>

int main(){
	
	char a[101];
	char oper;
	char b[101];
	
	scanf("%s", a);
	scanf(" %c", &oper);  // **공백 포함해서 문자 입력 받기!!!
	//식 지정자 " %c"를 사용하여 문자를 입력 받을 때는
	//공백을 포함하여 입력을 받으므로,
	//버퍼에 남아 있는 개행문자를 읽지 않게 됩니다 
	scanf("%s", b);
	
	// + 일 때 
	if(oper == '+'){
		
		if(strlen(a) > strlen(b)){
			
			a[strlen(a) - strlen(b)] = '1';
			printf("%s", a);
		}
		else if(strlen(a) < strlen(b)){
			
			b[strlen(b) - strlen(a)] = '1';
			printf("%s", b);
		}
		else{ // 자리수 같을 때
		
		a[0] = '2';
		printf("%s", a);
		}
	}
	
	// * 일 때
	if(oper == '*'){
		
		printf("1"); 
		
		for(int i = 1; i <= (strlen(a)-1) + (strlen(b)-1); i++){	
			printf("0");
		}
	}
}
