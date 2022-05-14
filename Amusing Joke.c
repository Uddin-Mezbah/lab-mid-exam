#include <stdio.h>
#include <string.h>
int main()
{

    char w1[101];
	char w2[101];
	int alpha[27];
	int alpha2[27];
	for(int i = 0; i < 26; i++) {
		alpha[i] = 0;
	}
	for(int i = 0; i < 26; i++) {
		alpha2[i] = 0;
	}
	char kata[101];

	scanf("%s", w1);
	scanf("%s", w2);
	scanf("%s", kata);

	for(int i = 0; i < strlen(w1); i++) {
		alpha[w1[i]-65]++;
	}
	for(int i = 0; i < strlen(w2); i++) {
		alpha[w2[i]-65]++;
	}
	for(int i = 0; i < strlen(kata); i++) {
		alpha2[kata[i]-65]++;
	}
	int flag = 0;
	for(int i = 0; i < 26; i++) {
		if(alpha[i] != alpha2[i]) {
			flag = 1;
			break;
		}
	}
	if(flag == 1) {
		printf("yes");
	} else {
		printf("no");
	}


}
