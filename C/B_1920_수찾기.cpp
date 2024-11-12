#include <stdio.h>
#include <stdlib.h> 
// 1. �迭 a�� ������������ ����
// 2. �迭 b ���ڰ� �迭 a�� �ִ��� Ȯ��(���� Ž��)
 
// ���� Ž�� �Լ� 
int BinarySearch(const int arr[], int n, int target){
	
	int left = 0, right = n - 1;
	while(left <= right){
		
		int mid = (left + right) / 2;
		
		if(arr[mid]  == target)  // ã���� ��, 
			return 1;
		else if(arr[mid] < target)  // �߰� ������ ū ��� 
			left = mid +1; 
		else  // �߰� ������ ���� ��� 
		right = mid -1;
	}
	
	return 0;  // ã�� ������ �� 
} 

int compare(const void *a, const void *b){
	
	return *(int *)a - *(int *)b;
} 

int main(){
	
	int n,m;
	scanf("%d", &n);  // �迭 a ũ��
	int  a[100001];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(int), compare);  // �迭 a�� ������������
	
	scanf("%d", &m);
	int b[100001];
	for(int i = 0; i < m; i++){
		
		scanf("%d", &b[i]);
	}
	
	for(int i = 0; i < m; i++){
		
		printf("%d\n", BinarySearch(a, n, b[i]));
	}
	
	return 0;
}









// �ð��ʰ��� �ٸ� ���(���� Ž��)���� �ٽ�
/* 
int main(){
	
	int n, m;
	
	scanf("%d", &n);
	int a[100001];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &m);
	int b[100001];
	for(int i = 0; i < m; i++){
		
		scanf("%d", &b[i]);
	}
	
	
	for(int i = 0; i < m; i++){
		
		int check = 0;
		
		for(int j = 0; j < n; j++){
			
			if(b[i] == a[j]){
				check++;
				break;
			}
		}
		
		if(check > 0)	printf("1\n");
		else	printf("0\n");
	}
	
	return 0;
}
*/
