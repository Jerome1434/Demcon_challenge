#include <iostream> 

using namespace std;

int main() {
    
    /* The two starting numbers are necessary to initialize the Fibonacci sequence calculation : 0 and 1. 
     * They will serve as F(n-1) and F(n-2) in calculating F(n) where n = 3; */
    unsigned long long Fmintwo {0};             
    unsigned long long Fminone {1};
    unsigned long long F {Fminone + Fmintwo};
    unsigned long long Fsum {0};
    unsigned long long maximum {4000000};
    
    
    while (F < maximum) {   //The while loop will continue untill the maximum is reached.
        if (F%2 == 0) {     //to check if the Fibonacci number is even.
            Fsum += F;      //F is added to the sum if F is even.
        } 
        
        /* n increases by 1, making F(n-1) into F(n-2) andsoforth
         * the next F is calculated, and then the while loop restarts with the (f < maximum) check */
        Fmintwo = Fminone;
        Fminone = F;
        F = Fminone + Fmintwo;
    }
    cout << "The sum of the terms in the Fibonacci sequence whose values do not exceed four million is : " << Fsum << endl;
    return 0;
}