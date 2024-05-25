#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char c;

int hashMap[200] = {0};//表中值大于1的集合为并集，值为2的为交集，为set1元素且值为1为A-B集合，表中值为1的为环合

int main() {
	int numofset=1;
	while (scanf("%c", &c) != EOF){
		if (c == '\n') numofset = 2;
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) {
			hashMap[c]+=numofset;
		}
	}
	int put = 0;
	printf("{");
	for (int i = 97;i <= 122;i++) {		
		if (hashMap[i] > 0) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)i);
			put++;
		}
	}
	for (int i = 65;i <= 90;i++) {
		if (hashMap[i] > 0) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)hashMap[i]);
			put++;
		}
	}
	printf("}\n");

	put = 0;
	printf("{");
	for (int i = 97;i <= 122;i++) {
		if (hashMap[i] == 3) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)i);
			put++;
		}
	}
	for (int i = 65;i <= 90;i++) {
		if (hashMap[i] == 3) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)hashMap[i]);
			put++;
		}
	}
	printf("}\n");

	put = 0;
	printf("{");
	for (int i = 97;i <= 122;i++) {
		if (hashMap[i] == 1) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)i);
			put++;
		}
	}
	for (int i = 65;i <= 90;i++) {
		if (hashMap[i] == 1) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)hashMap[i]);
			put++;
		}
	}
	printf("}\n");

	put = 0;
	printf("{");
	for (int i = 97;i <= 122;i++) {
		if (hashMap[i] < 3 && hashMap[i]>0) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)i);
			put++;
		}
	}
	for (int i = 65;i <= 90;i++) {
		if (hashMap[i] < 3&& hashMap[i]>0) {
			if (put != 0) {
				printf(",");
			}
			printf("%c", (char)hashMap[i]);
			put++;
		}
	}
	printf("}\n");
}