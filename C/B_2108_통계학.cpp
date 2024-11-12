#include <stdio.h>
#include <stdlib.h>  // qsort
#include <math.h>  // round ������ �̰� ������ 4�ð� �ɸ� 

int compare(const void *a, const void *b); 

int main(){
	
	double ave = 0;  // 1. ������ 
	int mid = 0;  // 2. �߾Ӱ� 
	int freq = 0;  // 3. �ֺ� 
	int max_min = 0;  // 4. �ִ�-�ּ� 
	
	int n;  // �־����� �� ����(n�� Ȧ��) 
	scanf("%d", &n);
	
	// ���� 
	int num[500001];
	int count[8001] = {0, };
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num[i]);
		
		//�� ���ϱ� 
		sum += num[i];
		
		// �ֺ� ���ϱ�(�迭�� ���� Ƚ�� �ֱ�) 
		count[num[i] + 4000]++; 
	}
	// 1. ��� 
	ave = ((double)sum / n);  
	
	// 2. �߾� 
	qsort(num, n, sizeof(int), compare);  // ������������ �迭
	
	mid = num[(n - 1) / 2];
	
	//3. �ֺ�
	int max_freq = 0;
	// �ֺ��� ������  ã�� 
	for(int i = 0; i < 8001; i++){
		
		if(max_freq < count[i]){
			max_freq = count[i];
		}
	}
	// �ֺ� �� �� 2���� �� ã�� 
	int max_freq_count = 0;
	for(int i = 0; i < 8001; i++){
		
		if(max_freq == count[i]){
			freq = i - 4000;
			max_freq_count++;
		}
		
		if(max_freq_count == 2)	break;
	}
	
	//4. �ִ� - �ּ�
	max_min = num[n-1] - num[0];
	 
	printf("%.0lf\n", round(ave) == 0 ? 0 : round(ave));  // ex) '-0.4' -> '-0' ��� �������̰� ������ 4�ð� �ɸ� 
	printf("%d\n", mid); 
	printf("%d\n", freq);
	printf("%d", max_min);
	
	return 0;
}

int compare(const void *a, const void *b){
	
	return (*(int *)a - *(int *)b);  // �������� 
}
