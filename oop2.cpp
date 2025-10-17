#include <iostream>

using namespace std;

class Rectangle
{
public:
    float cd;
    float cr;
    void getInformation()
    {
        cin >> cd >> cr;
    }
    void display()
    {
        cout << "Area: " << cd * cr << endl;
        cout << "Perimeter: " << 2 * (cd + cr) << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}