#include <stdio.h>
#include <cs50.h>


int getNumOfDigits(long long ccNum);
long long getPowerOfTen(int power);
int validateCard(long long cc);


int main (void) {
    
    long long cc;
    int digitsNum;
    //propmt the user for cc number and make sure it's atleast 13 digits long assuming it's a VISA card
    do
    {
        cc  = get_long_long("please enter your credit card number? \n");
        digitsNum = getNumOfDigits(cc);
    }
    while (digitsNum < 0);
    
    printf("%i", validateCard(cc));
    
}



int validateCard(long long cc) {
    
    if (cc < 100) {
        return cc < 10 ? cc : (1 + cc % 10);
    }
    
    long long excluded2 = cc / 100;
    
    int lastDigit = cc % 10;
    int secondToLast = (cc / 10) % 10;
    int multipleOfSecondNum = secondToLast * 2;
    int product = multipleOfSecondNum > 10 ? 1 + (multipleOfSecondNum % 10) : multipleOfSecondNum;
    
    return lastDigit + product + validateCard(excluded2);
}




//a helper function to get the first tow digits of any number
long long getPowerOfTen(int power) {
    long long n = 1;
    
    for(int i = 0; i < power; i++) {
        n *=10;
    }
    
    return n;
}


// this function takes an integer and return the number of digits within this number
int getNumOfDigits(long long ccNum) {
    
    int digitsNum = 0; 
    
    while (ccNum > 0) {
        ccNum /= 10;
        digitsNum++;
    }
    
    return digitsNum;
}

