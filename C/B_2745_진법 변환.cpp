#include <stdio.h>
#include <string.h>
#include  <math.h>

int main(){
	
	char n[101];
	int b;
	scanf("%s %d", n, &b);
	
	int result = 0;
	
	int len = strlen(n);
	
	for(int i = 0; i < len; i++){
		
		int digit;
		if('0' <= n[i] && n[i] <= '9')
			digit = n[i] - '0';
		else if('A' <= n[i] && n[i] <= 'Z')
			digit = n[i] - 'A' + 10;
			
		result += digit * pow(b, len - 1 - i);
	}
	
	printf("%d", result);
	
	return 0;
}
