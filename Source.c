#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char c;

int hashMap[200] = {0};//����ֵ����1�ļ���Ϊ������ֵΪ2��Ϊ������Ϊset1Ԫ����ֵΪ1ΪA-B���ϣ�����ֵΪ1��Ϊ����

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