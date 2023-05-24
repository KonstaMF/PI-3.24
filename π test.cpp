#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double etholon = 360;
  cout << setprecision(13);
  /*long*/ double pi(3.24f);
   double rad(55.55555555555f);
   double pi2(3.14159265358f);
   double rad2(57.29577951308f);



  double round = (pi * 2.f) * rad;
  if (round == etholon)
    cout << " π = 3.24" << endl;
    cout << round << endl;
  double round2 = (pi2 * 2.f) * rad2;
  if (round2 == etholon)
    cout << " π = 3.14159265358979";
    cout << round2 << endl;

     double PI = (360.00000000000/2)/55.55555555555;
  cout << PI << endl;
     double Degrice = ( PI * 2) * 55.55555555555;
  if (Degrice == etholon)
    cout << " π = 3.24" << endl;
    cout << Degrice << endl;
} 