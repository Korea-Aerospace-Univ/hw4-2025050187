#include <stdio.h>

int main(void)
{
    int answer;
    int guess;
    int count = 0;

    // 정답 입력
    scanf("%d", &answer);

    do {
        scanf("%d", &guess);
        count++;

        if (guess > answer) {
            printf("%d>?\n", guess);
        }
        else if (guess < answer) {
            printf("%d<?\n", guess);
        }
        else {
            printf("%d==?\n", guess);
        }

    } while (guess != answer);

    printf("%d", count);

    return 0;
}
