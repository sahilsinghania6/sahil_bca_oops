#include <iostream>
using namespace std;
class Test {
public:
  // Default constructor initializes all members to 0
  Test() {
    num1 = num2 = num3 = 0;
  }

  // get_data() function takes variable number of arguments
  void get_data(int arg1, int arg2 = 0, int arg3 = 0) {
    num1 = arg1;
    num2 = arg2;
    num3 = arg3;
  }

  // show_data() function displays the values of member variables
  void show_data() {
    std::cout << "num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << std::endl;
  }

private:
  int num1;
  int num2;
  int num3;
};

int main() {
  // Create three objects of the Test class
  Test obj1, obj2, obj3;

  // Invoke get_data() member function with different arguments
  obj1.get_data(10);
  obj2.get_data(20, 30);
  obj3.get_data(40, 50, 60);

  // Display the values of all the objects
  std::cout << "Object 1:" << std::endl;
  obj1.show_data();

  std::cout << "Object 2:" << std::endl;
  obj2.show_data();

  std::cout << "Object 3:" << std::endl;
  obj3.show_data();

  return 0;
}
