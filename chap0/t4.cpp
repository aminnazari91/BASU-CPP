// double and float precision values
// calculate roots of quadratic equation
 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float fa = 1.0f;
    float fb = -4.0000000f;
    float fc = 3.9999999f;

    double da = 1.0;
    double db = -4.0000000;
    double dc = 3.9999999;
 
    double d = db * db - 4.0 * da * dc;
    double sd = sqrt(d);
    double r1 = (-db + sd) / (2.0 * da);
    double r2 = (-db - sd) / (2.0 * da);

    cout<<r1 <<"\t" <<r2<<endl;

    float fd = fb * fb - 4.0f * fa * fc;
    float fsd = sqrtf(fd);
    float r3 = (-fb + fsd) / (2.0f * fa);
    float r4 = (-fb - fsd) / (2.0f * fa);
    cout<<r3 <<"\t" <<r4<<endl;
    return 0;
}