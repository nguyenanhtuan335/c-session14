#include <stdio.h>
#include <string.h> 
// Thu vien de su dung ham strlen

int main() {
    char input[100];
    int length;

    printf("Nhap mot chuoi bat ky: ");
    fgets(input, sizeof(input), stdin); 
	// Nhap chuoi tu nguoi dung, bao gom ca khoang trang

    // Xoa ky tu newline (\n) neu co
    length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--; // Cap nhat do dai chuoi
    }

    printf("Chuoi ban vua nhap: %s\n", input);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}

