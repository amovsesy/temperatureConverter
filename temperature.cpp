#include <iostream>
#include <iomanip>

using namespace std;

double farinheightToCelcius (const double& farin)
{
    double celc;
    celc = farin * 1.8 + 32.0;
    return celc;
}
double celciusToFarinheight (const double& celci)
{
    double farinh;
    farinh = (celci - 32.0) / 1.8;
    return farinh;
}

int main()
{
    double celcius, farinheight;
    char end_temp, again;
    
    do
    {
        do
        {
            cout << endl << "Would you like to convert to celcius or to farinheight?" << endl
                 << "(F to farinheight or C to celcius) ";
            cin >> end_temp;
        }while( end_temp != 'C' && end_temp != 'c' && end_temp != 'F' && end_temp != 'f');
        if ( end_temp == 'F' || end_temp == 'f')
        {
            cout << endl << "Enter the temperature in celcius: ";
            cin >> celcius;
            farinheight = farinheightToCelcius(celcius);
            cout << celcius << " degrees celcius is " << farinheight << " degrees farinheight";
        }
        else if ( end_temp == 'C' || end_temp == 'c')
        {
            cout << endl << "Enter the temperature in farinheight: ";
            cin >> farinheight;
            celcius = celciusToFarinheight(farinheight);
            cout << farinheight << " degrees farinheight is " << celcius << " degrees celcius";
        }
        else
        {
            cout << "/nSomething went wrong!!!!/n";
        }
        cout << endl << endl << "Would you like to do another conversion?";
        cin >> again;
    }while ( again == 'y' || again == 'Y');
    return 0;
}
