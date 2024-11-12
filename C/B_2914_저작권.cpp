#include <stdio.h>

int main(){
	
	int song, avg, num;
	scanf("%d %d", &song, &avg);
	
	// num / song = avg(¿Ã¸²) 
	num = avg * (song-1) + 1;
	
	printf("%d", num);
	
	
	return 0;
}
