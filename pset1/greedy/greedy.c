#include <stdio.h>
#include <cs50.h>
#include <math.h>


int getUsedCoin (int cents);


int main(void)
{
    float change;
    int coins, usedCoin;
    
    // quarter = 25;
    // dime = 10;
    // nickle = 5;
    // penny = 1;
    coins = 0;
    
    
    do {
        change = get_float("yo! how much do you owe me?");

    }while (change < 0.01);
       
       
    int cents = round(change * 100);
    
    
    while (cents > 0) {
        
        usedCoin = getUsedCoin(cents);
        
        cents -=  usedCoin;
        coins++;
    }
    
    
    printf("here is your change: %i \n", coins);
}


int getUsedCoin(int cents) {
    
    if (cents >= 25) return 25;
    if (cents >= 10) return 10;
    if (cents >= 5) return 5;
    
    return 1;
                   
}