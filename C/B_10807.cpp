#include <stdio.h>

int main(){
	
	int N;  // ���� N��
	scanf("%d", &N);
	//�迭 A�� �����ϱ� ���� N ���� �Է¹޾ƾ� �մϴ�.
	//�׷��� ������ �迭�� ũ�Ⱑ ���ǵ��� ���� ���·� ����˴ϴ�.
	//���� N�� �Է¹��� �� �迭�� �����ؾ� �մϴ�.
	
	int A[N];  // �־��� ���� 
	int v;  // ã�� ���� v 
	

	for(int i = 0; i < N; i++){
		// ������ �Է¹��� �� & �����ڸ� ����Ͽ� ������ �ּҸ� �����մϴ�.
		scanf("%d", &A[i]);
	}
	scanf("%d", &v);
	
	int num_v = 0;  // ���� v ���� 
	for(int i = 0; i < N; i++){
		if(v == A[i]){
			num_v += 1;
		}
	}
	
	printf("%d",  num_v);
	
	return 0;
}