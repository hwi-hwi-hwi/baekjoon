#include <stdio.h>
#include <string.h>

int main(){
	
	char input[1000000];  // �Է°�
	scanf("%s", input); 
	
	int length = strlen(input);  // �Է°� ���� 
	int alphabet [26] = {0, };  // ���ĺ�
	int count = 0;  // for������ ���ĺ� ī��Ʈ �뵵�� ���� 
	
	// ���ĺ� ���� �� �� ����ߴ��� ī��Ʈ 
	for(int i = 0; i < length; i++){
		
		if(input[i] >= 'A' && input[i] <= 'Z'){
			count = input[i] - 'A';
		}
		else if(input[i] >= 'a' && input[i] <= 'z'){
			count = input[i] - 'a';
		}
		
		alphabet[count] += 1;
	}
	
	int most_alpha;  // ���� ���� ���� ���ĺ� 
	int max = 0;  // �ִ밪 �� �뵵�� ���� 
	// ���� ���� ���� ���ĺ� ã��
	for(int i = 0; i <= 25; i++){
		if(alphabet[i] > max){
			max = alphabet[i];
			most_alpha = i;
		}
	}
	
	//��� ��ġ���� Ȯ���ϰ� �� ���ϱ� 
	int check = 0;
	for(int i = 0; i <= 25; i++){
		if(alphabet[i] == max){
			check++;
		}
	}
	
	if(check >= 2){
		printf("?");
	}
	else{
		printf("%c", (most_alpha + 65));
	}
	
	return 0;
}
