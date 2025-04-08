#include <iostream>
using namespace std;

class Tower
{
    int height;
    public :
    Tower() { height = 1; }
    Tower(int r) { height = r; }
    int getHeight() { return height; }
};

int main()
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << "\n";
    cout << "높이는 " << seoulTower.getHeight() << "미터" << "\n";
    
}