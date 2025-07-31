#include <unistd.h>

void rush(int x, int y){

    int file = 0;
    int column;

    while (file < x)
    {
        column = 0;
        while (column < y)
        {
            if((file == 0 && column == 0) || (file == x-1 && column == y -1) || (file == 0 && column == y-1) || (file == x-1 && column == 0))
                write(1,"0",1);
            else if ((file == 0 || file == x-1) && (column != 0 && column != y-1))
                write(1,"-",1);
            else if ((column == 0 || column == y-1) && (file != 0 && file != x-1))
                write(1,"|",1);
            else
                write(1," ",1);
            column++;
        }
        write(1,"\n",2);
        file++;
    }

}

int main(void){

    rush(5,5);
    return (0);
}