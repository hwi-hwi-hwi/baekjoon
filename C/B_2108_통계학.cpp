#include <stdio.h>
#include <stdlib.h>  // qsort
#include <math.h>  // round 쓰려고 이거 때문에 4시간 걸림 

int compare(const void *a, const void *b); 

int main(){
	
	double ave = 0;  // 1. 산술평균 
	int mid = 0;  // 2. 중앙값 
	int freq = 0;  // 3. 최빈값 
	int max_min = 0;  // 4. 최대-최소 
	
	int n;  // 주어지는 수 개수(n은 홀수) 
	scanf("%d", &n);
	
	// 시작 
	int num[500001];
	int count[8001] = {0, };
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num[i]);
		
		//합 구하기 
		sum += num[i];
		
		// 최빈 구하기(배열에 나온 횟수 넣기) 
		count[num[i] + 4000]++; 
	}
	// 1. 평균 
	ave = ((double)sum / n);  
	
	// 2. 중앙 
	qsort(num, n, sizeof(int), compare);  // 오름차순으로 배열
	
	mid = num[(n - 1) / 2];
	
	//3. 최빈
	int max_freq = 0;
	// 최빈값이 얼마인지  찾기 
	for(int i = 0; i < 8001; i++){
		
		if(max_freq < count[i]){
			max_freq = count[i];
		}
	}
	// 최빈 값 중 2개일 때 찾기 
	int max_freq_count = 0;
	for(int i = 0; i < 8001; i++){
		
		if(max_freq == count[i]){
			freq = i - 4000;
			max_freq_count++;
		}
		
		if(max_freq_count == 2)	break;
	}
	
	//4. 최대 - 최소
	max_min = num[n-1] - num[0];
	 
	printf("%.0lf\n", round(ave) == 0 ? 0 : round(ave));  // ex) '-0.4' -> '-0' 출력 때문에이거 때문에 4시간 걸림 
	printf("%d\n", mid); 
	printf("%d\n", freq);
	printf("%d", max_min);
	
	return 0;
}

int compare(const void *a, const void *b){
	
	return (*(int *)a - *(int *)b);  // 오름차순 
}
