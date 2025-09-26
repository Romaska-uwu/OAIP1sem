#include <iostream>
using namespace std;
int main() {
	char input[100];
	scanf("%100[0-9a-zA-Z ]", input);
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	for (int i = 0; i < n; i++) {
		input[k + i] = '*';
	}
	for (int i = 0; i < strlen(input); i++) {
		printf("%c", input[i]);
	}
	return 0;
}

