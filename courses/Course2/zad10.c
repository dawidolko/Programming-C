// 11. Kurs języka C - Instrukcje skoku [https://www.youtube.com/watch?v=pLe-HTaePqE&list=PL6aekdNhY7DBvSnK0HUUBb-OH4y41HoZw&index=11]

#include <stdio.h>
#include <stdlib.h>

int i=10;

int main()
{
    while(i--) //i>0
    {
        //i--;
        printf("%d\n",i); 
    }

    return 0;
}
