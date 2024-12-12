#include <stdio.h>
#include <string.h> // Thu vien de su dung ham strlen

int main() {
    char str[] = "Hello, World!"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    char ch;
    int count = 0;
    int length = strlen(str);

    printf("Chuoi da khai bao: %s\n", str);

    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch); 
	// Nhap ky tu tu nguoi dung

    // Dem so lan xuat hien cua ky tu trong chuoi
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);

    return 0;
}

