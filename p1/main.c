#include <stdio.h>

int main() {
    int answer, guess, count = 0;

    scanf("%d", &answer);   /* 정답 입력 */

    do {
        scanf("%d", &guess);
        count++;

        if (guess > answer) {
            printf("%d>?\n", guess);
        } else if (guess < answer) {
            printf("%d<?\n", guess);
        } else {
            printf("%d==?\n", guess);
        }
    } while (guess != answer);

    printf("시도횟수는 %d회\n", count);

    return 0;
}
