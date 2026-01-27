#include <iostream>
#include <string>
using namespace std;

class Teacher
{

  // properties-----attributes

private:
  double salary;

public:
  Teacher()
  {
    cout << "I am Teacher Constructor" << endl;
    dept = "CSE";
  };
  string name;
  string dept;
  string subject;

  // method---member functions

  void changeDept(string newDept)
  {
    dept = newDept;
  }

  // setter
  void setSalary(int s)
  {
    salary = s;
  }

  // getter
  double getSalary()
  {
    return salary;
  }
};

int main()
{
  Teacher t1;
  t1.name = "Raju";
  t1.subject = "CPP";
  t1.dept = "CSE 1";
  t1.setSalary(25000);

  cout << t1.dept << endl;
  cout << t1.getSalary() << endl;

  Teacher t2;
  cout << t2.dept << endl;

  return 0;
}
