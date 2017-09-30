#include <stdio.h>
#include <cs50.h>
#include <math.h>

int getCoinsNum(int cents);

int main(void)
{
    float change;
    int coins;

    coins = 0;

    do
    {
        change = get_float("yo! how much do you owe me?");

    } while (change < 0);

    int cents = round(change * 100);

    coins = getCoinsNum(cents);

    printf("here is your change: %i \n", coins);
}

int getCoinsNum(int cents)
{

    int usedCoin;
    int coinsNum = 0;

    if (cents > 0)
    {

        usedCoin = cents >= 25 ? 25 : cents >= 10 ? 10 : cents >= 5 ? 5 : 1;
        coinsNum++;
        return coinsNum + getCoinsNum(cents - usedCoin);
    }

    return coinsNum;
}