        #include<stdio.h>
        #include<string.h>
        #include<math.h>
        int foo(){
            char *text ="A3F";
            int count = 0;
            int a = strlen(text);

            for(int i = 0; i<strlen(text);i++){
                switch(text[i]){
                    case 'A':
                        count += pow(10,a);
                        break; 
                    case 'B':
                        count += pow(11,a);
                        break;
                    case 'C':
                        count += pow(12,a);
                        break;
                    case 'D':
                        count += pow(13,a);
                        break;
                    case 'E' :
                        count += pow(14,a);
                        break;
                    case 'F':
                        count += pow(15,a);
                        break;
                    case '1':
                        count += pow(1,a);
                        break;
                    case '2':
                        count += pow(2,a);
                        break;
                    case '3':
                        count += pow(3,a);
                        break;
                    case '4':
                        count += pow(4,a);
                        break;
                    case '5':
                        count += pow(5,a);
                        break;
                    case '6':
                        count += pow(6,a);
                        break;
                    case '7':
                        count += pow(7,a);
                        break;
                    case '8':
                        count += pow(8,a);
                        break;
                    case '9':
                        count += pow(9,a);
                        break;
                }
                a--;
            }
            printf("%d", count);
            return 0;
        }

        int main(){
            foo();
            return 0;
        }