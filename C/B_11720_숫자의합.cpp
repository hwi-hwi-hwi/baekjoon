#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	// ���ӵ� ���ڸ� �Է¹��� �� ������ �����ϱ� ����
	//  char ���ڿ� �迭 �̿�!!
	char a[100];
	int sum = 0;
	scanf("%s", a);
	
	for(int i = 0; i < n; i++){
		//�ش��ϴ� int������ �ٲٱ� ���ؼ� char���� '0'�� ����� �� 
		sum += a[i] - '0';
	}
	printf("%d", sum);
	
	return 0;
}
