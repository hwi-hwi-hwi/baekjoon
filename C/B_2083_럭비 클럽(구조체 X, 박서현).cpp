#include <stdio.h>

int main(){
    char name[11];
    int age;
    int weight;
 
    while(1){
        
        scanf("%s %d %d", name,&age,&weight);
		
		if(name[0] == '#' && age ==0 && weight == 0)
			break;
		
		if(age>17 || weight>=80)	printf("%s Senior\n", name);
         else		printf("%s Junior\n", name);
        
        
    }
    
    return 0;
 }
