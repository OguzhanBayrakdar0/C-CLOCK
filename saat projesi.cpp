#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

int main() {

printf("ÝN ORDER TO STOP THE CLOCK PLEASE TYPE 'O' OR 'o' \n");
    while (1) {


           if (kbhit()) {
            char tus = getch();
               if (tus == 'O' || tus == 'o') {
                break;   
            }
          }
          
          
             time_t vakit = time(NULL);
        struct tm *bilgi = localtime(&vakit);

        
        printf("\r%02d:%02d:%02d   ",
               bilgi->tm_hour,
               bilgi->tm_min,
               bilgi->tm_sec);

        Sleep(1000);
          
       }
     
        
      

printf("PROGRAM HAS ENDED");
    return 0;
}
