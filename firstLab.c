#include <stdio.h>
#include <locale.h>

#define ENG 26
#define RUS 32

void encrypt(int n) {
    int flag;
    char c;
    c = fgetc(stdin);
    while (!feof(stdin)) {
        flag = 0;
        if (c >= 'A' && c <= 'Z') {
            c = c + (n % ENG);
            if (c > 'Z') c = 'A' + (c - 'Z') - 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'a' && c <= 'z') {
            c = c + (n % ENG);
            if (c > 'z') c = 'a' + (c - 'z') - 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (c >= '�' && c <= '�') {
            c = c + (n % RUS);
            if (c > '�') c = '�' + (c - '�') - 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (c >= '�' && c <= '�') {
            c = c + (n % RUS);
            if (c > '�') c = '�' + (c - '�') - 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (!flag) fprintf(stdout, "%c", c);
        c = getc(stdin);
    }
}

void decrypt(int n) {
    int flag;
    char c;
    c = getc(stdin);
    while (!feof(stdin)) {
        flag = 0;
        if (c >= 'A' && c <= 'Z') {
            c = c - (n % ENG);
            if (c < 'A') c = 'Z' - ('A' - c) + 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'a' && c <= 'z') {
            c = c - (n % ENG);
            if (c < 'a') c = 'z' - ('a' - c) + 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (c >= '�' && c <= '�') {
            c = c - (n % RUS);
            if (c < '�') c = '�' - ('�' - c) + 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (c >= '�' && c <= '�') {
            c = c - (n % RUS);
            if (c < '�') c = '�' - ('�' - c) + 1;
            fprintf(stdout, "%c", c);
            flag = 1;
        }
        if (!flag) fprintf(stdout, "%c", c);
        c = getc(stdin);
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.CP1251");
    int n;
    printf("������� ����������� n: ");
    scanf("%d", &n);
    getchar();
    if (n < 1) return 0;
    printf("����� ����������� ����� ������� 1, ������������ 2: ");
    char c;
    scanf("%c", &c);
    if (c == '1') encrypt(n);
    if (c == '2') decrypt(n);
    return 0;
}