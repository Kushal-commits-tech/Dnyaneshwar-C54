#include <iostream>
#include <iomanip> // FIX 1: Corrected spelling from iomainp to iomanip
using namespace std;

int main()
{
    int basic = 950, Allowance = 95, Total = 1045;
    
    cout << setw(10) << "Basic" << setw(10) << basic << endl
         << setw(10) << "Allowance" << setw(10) << Allowance << endl;
         
    // FIX 2: Added cout << to start this statement properly
    cout << setw(10) << "Total" << setw(10) << Total << endl;
    
    // FIX 3: Added space between return and 0
    return 0; 
}
