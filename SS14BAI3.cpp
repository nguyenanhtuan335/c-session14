#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

int main() {
    char str[] = "Hello, World!"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    int length = strlen(str);

    printf("Chuoi da khai bao: %s\n", str);
    
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

