    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    int foo(int zahl){
        double exp = 16;
        char bin[17];
        for (int i = 16; i >= 0; i--) { 
            if (zahl & (1 << i)) { 
                bin[16 - i] = '1';
            } else {
                bin[16 - i] = '0';
            }
        }
        bin[17] ='\0';
        int i = 0;
        while (bin[i] == '0' && i < 16) { 
            i++;
        }

    if (i == 16) {
            printf("0\n");
        } else {
            printf("%s\n", &bin[i]);
        }

        return 0;
    }

    int main(){
        printf("Bitte geben Sie ein zahl ein:  ");
        int zahl;
        scanf("%d", &zahl);
        foo(zahl);

    }