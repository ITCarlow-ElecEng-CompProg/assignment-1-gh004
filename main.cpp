#include <iostream>
/** Gearoid
 *  Hanrahan
 *  Lab 1
 *
 *  Temperature Converter
 *
 */

using namespace std;

int main()
{
    double tf, tc;

    /** Cout can be used like printf*/
    cout <<"n"<< "Enter the Temp in Celcius:"<< endl;
    /** can think of cin as a scanf */
    cin  >> tc;

    /** calculation */
    tf=(1.8*tc)+32;

    /** Shows output */
    cout <<"\n"<< "Temperature in Fahrenheit is:"<<tf<<endl;

    return 0;
}
