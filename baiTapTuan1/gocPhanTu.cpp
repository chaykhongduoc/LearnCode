#include <iostream>
using namespace std;
int main()
{

    int goc, temp;

    cin >> goc;
    temp = goc / 360;

    (goc <= 360)?(temp = 0):(goc=goc - (360 * temp));

    (0 < goc && goc <= 90)?(cout << 4):((90 < goc && goc <=180)?(cout << 3):((180 < goc && goc <=270)?(cout << 2):(cout <<"1")));
    //(90 < goc && goc <=180)?(cout << 3):(cout <<"");
    //(180 < goc && goc <=270)?(cout << 2):(cout <<"");
    //(270 < goc && goc <=360)?(cout <<1):(cout <<"");

    return 0;
}
