 #include <iostream>
#include <string>

class Student {
public:
  Student(const std::string& name, int age, const std::string& city) {
    this->name = name;
    this->age = age;
    this->city = city;
  }

  void displayStudentInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "City: " << city << std::endl;
  }

private:
  std::string name;
  int age;
  std::string city;
};

class Transport {
public:
  Transport(const Student& student, const std::string& route, int busFee) : student(student) {
    this->route = route;
    this->busFee = busFee;
  }

  void displayDetails() {
    student.displayStudentInfo(); // Call base class function to display student info
    std::cout << "Route: " << route << std::endl;
    std::cout << "Bus Fee: " << busFee << std::endl;
  }

private:
  Student student; // Composition: Transport HAS-A Student
  std::string route;
  int busFee;
};

int main() {
  // Create a Student object
  Student student1("John Doe", 18, "New York");

  // Create a Transport object using the Student object
  Transport transport(student1, "School Bus - Route 10", 30);

  // Display complete student details including transport info
  transport.displayDetails();

  return 0;
}
