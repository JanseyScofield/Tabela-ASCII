#include <stdio.h>

int main()
{
    int aaa, num, bin = 0, b[8];
    char ch = ' ';
    num = ch;
    for(aaa = 32;aaa <= 127;aaa++){
        bin = 0;
        for(int iCont = 0; iCont < 8; iCont++){
            b[iCont] = num%2;
            num /= 2;
        }
        int base = 1;
        for(int iCont = 0; iCont < 8; iCont++){
            bin += b[iCont] * base;
            base *= 10;
        }
        if(aaa == 127)
            printf("  %03d %08d\n",ch,bin);
        else{
        printf("%c %03d %08d\n", ch, ch, bin);
        ch++;
        num = ch;
        }
    }

    return 1;
}
