#include <cs50.h>
#include <stdio.h>

void mario(int height);

int main(void) 
{
    int height;
    do {
        height = get_int("Pick a number from 1 to 8: ");
    }
    while (height < 1 || height > 8);
    mario(height);
}

void mario(int height) 
{
    int counter_right = 0;
    int counter_left = height - 1;
    for(int n = 1; n <= height; n++)
    {
        int length = (height * 2) + 2;
        for(int i = 1; i < length; i++) 
        {
            if(i < height - counter_right || i >= length - counter_left)
            {
                printf("|");
            }
            else if (i == height + 1)
            {
                printf("||");
            }
            else 
            {
                printf("#");
            }
        }
        printf("\n");
        counter_right++;
        counter_left--;
    }
}