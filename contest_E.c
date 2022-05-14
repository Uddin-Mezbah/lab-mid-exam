#include <stdio.h>
#include <string.h>

int main() {
    int length;
    scanf("%d", &length);

    char word[length];
    scanf("%s", word);

    strlwr(word);

    int frequent[27] = {0};

    for (int i = 0; i < length; i++) {
        frequent[word[i] - 'a' + 1]++;
    }

    for(int j = 1; j < 27; j++) {
        if (frequent[j] == 0) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}
