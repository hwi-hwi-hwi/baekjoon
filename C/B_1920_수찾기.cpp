#include <stdio.h>
#include <stdlib.h> 
// 1. 배열 a를 오름차순으로 정렬
// 2. 배열 b 숫자가 배열 a에 있는지 확인(이진 탐색)
 
// 이진 탐색 함수 
int BinarySearch(const int arr[], int n, int target){
	
	int left = 0, right = n - 1;
	while(left <= right){
		
		int mid = (left + right) / 2;
		
		if(arr[mid]  == target)  // 찾았을 때, 
			return 1;
		else if(arr[mid] < target)  // 중간 값보다 큰 경우 
			left = mid +1; 
		else  // 중간 값보다 작은 경우 
		right = mid -1;
	}
	
	return 0;  // 찾지 못했을 때 
} 

int compare(const void *a, const void *b){
	
	return *(int *)a - *(int *)b;
} 

int main(){
	
	int n,m;
	scanf("%d", &n);  // 배열 a 크기
	int  a[100001];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &a[i]);
	}
	
	qsort(a, n, sizeof(int), compare);  // 배열 a를 오름차순으로
	
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









// 시간초과로 다른 방법(이진 탐색)으로 다시
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
