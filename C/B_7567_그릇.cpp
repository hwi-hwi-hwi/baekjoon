#include <stdio.h>
#include <string.h>

int main(){
	
	// �׸��� �׿����� ����: ->(�޿��� ��)
	// ( : ������, ( : ������
	
	char input[51];
	scanf("%s", input); 
	
	int height = 0;
	for(int i = 0; i < strlen(input); i++){
		
		if(input[i] == input[i+1])	height += 5;
		else	height += 10;
	} 
	
	printf("%d", height);
	
	return 0;
}
