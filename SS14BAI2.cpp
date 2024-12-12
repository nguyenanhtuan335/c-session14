#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

int main() {
    char str[] = "Hello, World!"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    int length = strlen(str);

    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi: ");
    
    for (int i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}

