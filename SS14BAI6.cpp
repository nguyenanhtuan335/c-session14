#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

int main() {
    char str[] = "Hello, World! 123"; 
	// Khai bao va gan gia tri cho chuoi bat ky
    int count = 0;
    int length = strlen(str);

    // Dem so ky tu la chu cai trong chuoi
    for (int i = 0; i < length; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }

    printf("Chuoi da khai bao: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}
v
