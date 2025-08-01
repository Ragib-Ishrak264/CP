#include <stdio.h>

int main() {
    int s[4];
    int unique = 0;
    int i, j;

    // Input
    for(i = 0; i < 4; i++) {
        scanf("%d", &s[i]);
    }

    // Count unique colors
    int count = 0;
    for(i = 0; i < 4; i++) {
        int isUnique = 1;
        for(j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) count++;
    }

    // Output how many new horseshoes he needs to buy
    printf("%d\n", 4 - count);

    return 0;
}
