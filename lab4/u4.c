#include <stdio.h>

// Function prototype declaration
int foo();

int main() {
    

    if (foo() == 1) {
        printf("Das ist eine PERFEKTEZAHL\n");
    } else {
        printf("Diese Zahl ist KEINE PERFEKTEZAHL\n");
    }
    return 0; // Program başarıyla tamamlandı
}

int foo() {
    printf("Bitte geben Sie eine Zahl ein: ");
    int zahl;
    scanf("%d", &zahl); // Kullanıcının girdisini doğru almak için & işaretine dikkat edin.
    int sum = 0;
    for (int i = 1; i < zahl; i++) {
        if (zahl % i == 0) {
            sum += i;
        }
    }
    if (zahl == sum) {
        return 1; // Mükemmel sayı
    } else {
        return 0; // Mükemmel sayı değil
    }
}

