#include <stdio.h>
#include <locale>

#define ENG 26
#define RUS 32
void encrypt (int n)
{
    int flag;
    char c;
    c = getc(stdin);
    while (!feof(stdin))
    {
        flag = 0;
        if (c >= 'A' && c <= 'Z')
        {
            c = c + (n % ENG);
            if (c > 'Z') c = 'A' + (c - 'Z') - 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'a' && c <= 'z')
        {
            c = c + (n % ENG);
            if (c > 'z') c = 'a' + (c - 'z') - 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'А' && c <= 'Я')
        {
            c = c + (n % RUS);
            if (c > 'Я') c = 'А' + (c - 'Я') - 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (c>='а' && c<='я')
        {
            c = c + (n % RUS);
            if (c > 'я') c = 'а' + (c - 'я') - 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (!flag) fprintf (stdout, "%c", c);
        c = getc(stdin);
    }
}

void decipher (int n)
{
    int flag;
    char c;
    c = getc(stdin);
    while (!feof(stdin))
    {
        flag = 0;
        if (c >= 'A' && c <= 'Z')
        {
            c = c - (n % ENG);
            if (c < 'A') c = 'Z' - ('A' - c) + 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'a' && c <= 'z')
        {
            c = c - (n % ENG);
            if (c < 'a') c = 'z' - ('a' - c) + 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'А' && c <= 'Я')
        {
            c = c - (n % RUS);
            if (c < 'А') c = 'Я' - ('А' - c) + 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (c >= 'а' && c <= 'я')
        {
            c = c - (n % RUS);
            if (c < 'а') c = 'я' - ('а' - c) + 1;
            fprintf (stdout, "%c", c);
            flag = 1;
        }
        if (!flag) fprintf (stdout, "%c", c);
        c = getc(stdin);
    }
}

int main ()
{
    setlocale(LC_ALL,"Russian");
    int n;
    printf ("Введите натуральное n: ");
    scanf("%d", &n);
    getchar ();
    if (n < 1) return 0;
    printf ("Чтобы зашифровать текст введите 1, расшифровать 2: ");
    char c;
    scanf("%c", &c, 1);
    if (c == '1') encrypt (n);
    if (c == '2') decipher (n);
    return 0;
}