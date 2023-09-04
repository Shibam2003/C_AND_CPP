//use of default constructor
#include <iostream>
using namespace std;

// declare a class
class  wh {
  private:
    double length;

  public:
    
    wh() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  wh wall1;
  return 0;
}
