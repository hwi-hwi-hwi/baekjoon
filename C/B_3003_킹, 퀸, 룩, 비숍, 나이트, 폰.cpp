#include <stdio.h>

int main(){
	
	int k, q, r , b, kn, p;
	scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &kn, &p);
	
	int k_ = 1, q_ = 1, r_ = 2 , b_ = 2, kn_ = 2, p_ = 8;
	
	int k__ = k_ - k;
	int q__ = q_ -q;
	int r__ = r_ - r;
	int b__ = b_ - b;
	int kn__ = kn_ - kn;
	int p__ = p_ - p;
	
	printf("%d %d %d %d %d %d", k__, q__, r__ , b__, kn__, p__);
	
	return 0;
}
