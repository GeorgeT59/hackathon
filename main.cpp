#include <iostream>
#include <stdlib.h>
#include <string>
// #include "drake.h"

using namespace std;

int main()
{
    float R;
    float fp;       //A float due to a decimal number.
    float ne;
    float fl;
    float fi;
    float fc;
    float l;
    long long N;    //Could be a big number, just in case.
    /*
    drake::drake()
    {
    real = 0;
    imaginary = 0;
    }
    */
    cout << "This is Drake Equation (or Drake Formula). It is a formula to determine the odds of how many alien civilizations are in our galaxy - the Milky Way." << endl;
    cout << endl;
    cout << endl;
    cout << "The formula is as followed N = R * fp * ne * fl * fi * fc * l." << endl;
    cout << "To determine this please enter the following: " << endl;

    cout << "Enter the number of stars made each year. (R) " << endl; //This should be correct.
    cin >> R;

    cout << endl;
    cout << "Enter the fraction [in decimal form] of stars with planets. [Usually around 0.2 - 0.5] (fp)  " << endl;
    cin >> fp;

    cout << endl;
    cout << "Enter the fraction [in decimal form] of those stars with planetary systems.[Usually around 0.4]. (ne) " << endl;
    cin >> ne;

    cout << endl;
    cout << "Enter the number of sustainable planets per solar system in which life actually appears. [So far it's just one - Earth.] (fl) " << endl;
    cin >> fl;

    cout << endl;
    cout << "Enter the number of inhabitable planets with developed intelligence. [So far it's just one - Earth.] (fi) " << endl;
    cin >> fi;

    cout << endl;
    cout << "Enter the fraction [in decimal form] of how many alien life planets that can broadcast a radio signal. [Estimated amount is 0.1-0.2] (fc)" << endl;
    cin >> fc;

    cout << endl;
    cout << "Enter the lifetime of alien society's.  [Estimation is 1,000 - 100,000 years.] (l) " << endl;
    cin >> l;

    N = R * fp * ne * fl * fi * fc * l;

    cout << endl;
    cout << "The amount of intelligent alien life in our galaxy is (N) " << N << endl;


    /* The math actually IS correct, tested it on a calculator and yes the math is correct.*/
    // Also add more user friendly interface.

    return 0;
}
