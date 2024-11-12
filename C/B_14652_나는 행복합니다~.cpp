#include <stdio.h>

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    int x = K / M;
    int y = K % M;

    printf("%d %d", x, y);

    return 0;
}

