#include <stdio.h>
#include <string.h>

int main(){
	
	int alph[26] = {0, };
	
	char input[101];
	scanf("%s", &input);
	
	for(int i = 0; i < strlen(input); i++){
		
		switch(input[i]){
			
			case 'a':
				alph[0]++;
				continue;
			case 'b':
				alph[1]++;
				continue;
			case 'c':
				alph[2]++;
				continue;
			case 'd':
				alph[3]++;
				continue;
			case 'e':
				alph[4]++;
				continue;
			case 'f':
				alph[5]++;
				continue;
			case 'g':
				alph[6]++;
				continue;
			case 'h':
				alph[7]++;
				continue;
			case 'i':
				alph[8]++;
				continue;
			case 'j':
				alph[9]++;
				continue;
			case 'k':
				alph[10]++;
				continue;
			case 'l':
				alph[11]++;
				continue;
			case 'm':
				alph[12]++;
				continue;
			case 'n':
				alph[13]++;
				continue;
			case 'o':
				alph[14]++;
				continue;
			case 'p':
				alph[15]++;
				continue;
			case 'q':
				alph[16]++;
				continue;
			case 'r':
				alph[17]++;
				continue;
			case 's':
				alph[18]++;
				continue;
			case 't':
				alph[19]++;
				continue;
			case 'u':
				alph[20]++;
				continue;
			case 'v':
				alph[21]++;
				continue;
			case 'w':
				alph[22]++;
				continue;
			case 'x':
				alph[23]++;
				continue;
			case 'y':
				alph[24]++;
				continue;
			case 'z':
				alph[25]++;
				continue;
		}
	}
	
	for(int i = 0; i < 26; i++){
		
		printf("%d ", alph[i]);
	} 
	
	return 0;
}
