#include <stdio.h>
#include <string.h>

int main(){
	
	char a[101];
	char oper;
	char b[101];
	
	scanf("%s", a);
	scanf(" %c", &oper);  // **���� �����ؼ� ���� �Է� �ޱ�!!!
	//�� ������ " %c"�� ����Ͽ� ���ڸ� �Է� ���� ����
	//������ �����Ͽ� �Է��� �����Ƿ�,
	//���ۿ� ���� �ִ� ���๮�ڸ� ���� �ʰ� �˴ϴ� 
	scanf("%s", b);
	
	// + �� �� 
	if(oper == '+'){
		
		if(strlen(a) > strlen(b)){
			
			a[strlen(a) - strlen(b)] = '1';
			printf("%s", a);
		}
		else if(strlen(a) < strlen(b)){
			
			b[strlen(b) - strlen(a)] = '1';
			printf("%s", b);
		}
		else{ // �ڸ��� ���� ��
		
		a[0] = '2';
		printf("%s", a);
		}
	}
	
	// * �� ��
	if(oper == '*'){
		
		printf("1"); 
		
		for(int i = 1; i <= (strlen(a)-1) + (strlen(b)-1); i++){	
			printf("0");
		}
	}
}
