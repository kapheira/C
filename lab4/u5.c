#include <stdio.h>
#include <string.h>

void rev(char *text) {
    int a = strlen(text) - 1;  // sizeof yerine strlen kullanıldı
    char text2[a+1];  // Hatalı olan *text2[sizeof(text)] düzeltildi
    for(int i = 0; i < strlen(text); i++) {
        text2[a] = text[i];
        a--;  // a++ yerine a-- yapıldı
    }
    text2[strlen(text)] = '\0';  // Diziye null karakter eklendi
    printf("die reverse text %s", text2);  // return yerine printf kullanıldı
}

int main() {
    char text[50];  // char *text[50]; hatası düzeltildi
    printf("Bitte geben sie die text: ");
    scanf("%s", text);
    rev(text);  
}
