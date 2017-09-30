#include <stdio.h>
#include <cs50.h>
#include <math.h>


int getUsedCoin (int cents);


int main(void)
{
    float change;
    int coins;
    
    coins = 0;
    
    do {
        change = get_float("yo! how much do you owe me?");

    }while (change < 0);
       
       
    int cents = round(change * 100);
    
    coins = getUsedCoin(cents);
    
    
    printf("here is your change: %i \n", coins);
}




int getUsedCoin(int cents) {
    
    int usedCoin;
    int coinsNum = 0;
    
    usedCoin = cents >= 25 ? 25 : cents >= 10 ? 10 : cents >= 5  ? 5  : 1;
    
    if (cents > 0) {
        coinsNum++;
        return coinsNum + getUsedCoin(cents - usedCoin);
    }
    
    
    return coinsNum;
                   
}