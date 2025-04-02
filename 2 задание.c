#include <stdio.h>
#include <cstring>

int main() 

{
  
    char balls[3][15] = {"красный", "синий", "зеленый"};

    strcpy (balls[0], "желтый");

    for (int i = 0; i < 3; i++) 
    {
        printf("%s\n", balls[i]);
    }

    return 0;
}
