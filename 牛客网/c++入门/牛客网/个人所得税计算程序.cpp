//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip> 
//// write your code here......
//
//using namespace std;
//
//class Employee {
//
//private:
//    string name;
//    double salary;
//public:
//    Employee(string name, double salary)
//    {
//        this->name = name;
//        this->salary = salary;
//    }
//
//    string getname()
//    {
//        return this->name;
//    }
//    double getmoney()
//    {
//        if (this->salary <= 3500)
//        {
//            return 0;
//        }
//        else if (this->salary > 3500 && this->salary <= 5000)
//        {
//            return (this->salary - 3500) * 0.03;
//        }
//        else if (this->salary > 5000 && this->salary <= 8000)
//        {
//            return (this->salary - 3500) * 0.1 - 105;
//        }
//        else if (this->salary > 8000 && this->salary <= 12500)
//        {
//            return (this->salary - 3500) * 0.2 - 555;
//        }
//        else if (this->salary > 12500 && this->salary <= 38500)
//        {
//            return (this->salary - 3500) * 0.25 - 1005;
//        }
//        else if (this->salary > 38500 && this->salary <= 58500)
//        {
//            return (this->salary - 3500) * 0.3 - 2755;
//        }
//        else if (this->salary > 58500 && this->salary <= 83500)
//        {
//            return (this->salary - 3500) * 0.35 - 5505;
//        }
//        else
//        {
//            return (this->salary - 3500) * 0.45 - 13505;
//        }
//    }
//};
//class Compare
//{
//public:
//    bool operator()(Employee val1, Employee val2)
//    {
//        return val1.getmoney() > val2.getmoney();
//    }
//};
//
//class Print
//{
//public:
//    void operator()(Employee val)
//    {
//        cout << fixed << setprecision(1);
//        cout << val.getname() << "应该缴纳的个人所得税是：" << val.getmoney() << endl;
//    }
//};
//int main() {
//    Employee e1("张三", 6500);
//    Employee e2("李四", 8000);
//    Employee e3("王五", 100000);
//    vector<Employee>v;
//    v.push_back(e1);
//    v.push_back(e2);
//    v.push_back(e3);
//    Compare compare;
//    sort(v.begin(), v.end(), compare);
//    Print print;
//    for_each(v.begin(), v.end(), print);
//
//    // write your code here......
//
//
//    return 0;
//}