#include <iostream>
using namespace std;

class BCA_OOPS {
private:
    int var1;
    int var2;

public:
   
    BCA_OOPS() {
        var1 = 0;
        var2 = 0;
    }

   
    BCA_OOPS(int v1, int v2) {
        this->var1 = v1;
        this->var2 = v2;
    }

   
    void displayValues() {
        cout << "Var1: " << var1 << endl;
        cout << "Var2: " << var2 << endl;
    }

   
    void copyData(const BCA_OOPS& obj) {
        this->var1 = obj.var1;
        this->var2 = obj.var2;
    }

   
    void decrementValues() {
        var1 -= (var1 >= 0 && var1 <= 10)? 2 : 5;
        var2 -= (var2 >= 0 && var2 <= 10)? 2 : 5;
    }

   
    friend void displayValuesExternally(const BCA_OOPS& obj);
};


void displayValuesExternally(const BCA_OOPS& obj) {
    cout << "Var1: " << obj.var1 << endl;
    cout << "Var2: " << obj.var2 << endl;
}

int main() {
   
    BCA_OOPS obj1;
    cout << "Object 1 (Default Constructor):" << endl;
    obj1.displayValues();
    cout << endl;

   
    BCA_OOPS obj2(15, 7);
    cout << "Object 2 (Parameterized Constructor):" << endl;
    obj2.displayValues();
    cout << endl;

   
    obj2.decrementValues();
    cout << "Object 2 after decrementing values:" << endl;
    obj2.displayValues();
    cout << endl;

   
    obj1.copyData(obj2);
    cout << "Object 1 after copying data from object 2:" << endl;
    obj1.displayValues();
    cout << endl;

   
    cout << "Displaying member variables of object 1 externally:" << endl;
    displayValuesExternally(obj1);
    cout << endl;

    return 0;
}
