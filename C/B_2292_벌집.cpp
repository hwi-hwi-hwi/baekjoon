#include <stdio.h>

int main(){
	
	int input;
	scanf("%d", &input);
	
	int count = 1;  // ������ �� ���� ���� 
	int room_num = 1;  // �� ��ȣ 
	
	while(1){
		
		if(input <= room_num){
			break;
		}
		
		room_num += 6 * count;
		
		count++;
	}
	
	printf("%d", count);
	
	return 0;
}
