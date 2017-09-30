#include <stdio.h>
#include <cs50.h>
#include <math.h>

int getCoinsNum(int cents);

int main(void)
{
    float change;
    int coins, usedCoin, quarter, dime, nickle, penny, coins;

    quarter = 25;
    dime = 10;
    nickle = 5;
    penny = 1;
    coins = 0;

    do
    {
        change = get_float("yo! how much do you owe me?");

    } while (change < 0);

    int cents = round(change * 100);

    while (cents > 0)
    {

        usedCoin = getCoinsNum(cents);

        cents -= usedCoin;
        coins++;
    }

    printf("here is your change: %i \n", coins);
}

int getCoinsNum(int cents)
{

    if (cents >= quarter)
        return quarter;
    if (cents >= dime)
        return dime;
    if (cents >= nickle)
        return nickle;

    return penny;
}