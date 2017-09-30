#include <stdio.h>
#include <cs50.h>

int main () 
{
    int height, rowWidth, spaces, hashTags, gaps;
    
    
    //making sure that the int is a positive number and less than 23
    do
    {
        height = get_int("height: ");
        
    } while (height < 0 || height > 23);
    
    
    rowWidth = height;
    gaps = 2;
    
    
    
    //print full row
    for (int i = 0; i < height; i++) {
        
        hashTags = i + 1;
        spaces = rowWidth - hashTags;
        
        
        
        //print spaces
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        
        //print hashtags
        for(int h = 0; h < hashTags; h++) {
            printf("#");
        }
        
        //print GAPS
        for(int g = 0; g < gaps; g++) {
            printf(" ");
        }
        
        
        //print hashtags
        for(int h = 0; h < hashTags; h++) {
            printf("#");
        }

        
        printf("\n");


    }
    

}