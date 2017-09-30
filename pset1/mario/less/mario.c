#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height, rowWidth, spaces, hashTags;
    
    
    //making sure that the int is a positive number and less than 23
    do
    {
        height = get_int("height: ");
        
    } while (height < 0 || height > 23);


    rowWidth = height + 1;
    
    
    //print full row with spaces and hashtags
    for (int i = 0; i < height; i++)
    {
        hashTags = i + 2;
        spaces = rowWidth - hashTags;

        //print spaces for the current row
        for (int s = 0; s < spaces; s++)
        {
            printf(" ");
        }

        //print hashtags for current row
        for (int h = 0; h < hashTags; h++)
        {
            printf("#");
        }

        printf("\n");
    }
}