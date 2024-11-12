#include <stdio.h>

int main(){
	
	char score[2];
	scanf("%s", score);
	
	if(score[0] == 'A' && score[1] == '+'){
		printf("%.1f", 4.3);
	}
	else if(score[0] == 'A' && score[1] == '0'){
		printf("%.1f", 4.0);
	}
	else if(score[0] == 'A' && score[1] == '-'){
		printf("%.1f", 3.7);
	}
	else if(score[0] == 'B' && score[1] == '+'){
		printf("%.1f", 3.3);
	}
	else if(score[0] == 'B' && score[1] == '0'){
		printf("%.1f", 3.0);
	}
	else if(score[0] == 'B' && score[1] == '-'){
		printf("%.1f", 2.7);
	}
	else if(score[0] == 'C' && score[1] == '+'){
		printf("%.1f", 2.3);
	}
	else if(score[0] == 'C' && score[1] == '0'){
		printf("%.1f", 2.0);
	}
	else if(score[0] == 'C' && score[1] == '-'){
		printf("%.1f", 1.7);
	}
	else if(score[0] == 'D' && score[1] == '+'){
		printf("%.1f", 1.3);
	}
	else if(score[0] == 'D' && score[1] == '0'){
		printf("%.1f", 1.0);
	}
	else if(score[0] == 'D' && score[1] == '-'){
		printf("%.1f", 0.7);
	}
	else if(score[0] == 'F' && score[1] == '\0'){
		printf("%.1f", 0.0);
	}
}
