//#include <iostream>
//#include<string>
//#include<cstring>
//#include<cctype>
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//    int x1 = 0, x2 = 0;
//    int i = 4;
//    for (i; isdigit(str[i]); i++)
//    {
//        x1 = (str[i] - '0') + x1 * 10;
//    }
//    i++;
//    for (i; isdigit(str[i]); i++)
//    {
//        x2 = (str[i] - '0') + x2 * 10;
//    }
//    str[0] = tolower(str[0]);
//    if (str[0] == 'a')
//    {
//        cout << x1 + x2 << endl;
//    }
//    else if (str[0] == 's')
//    {
//        cout << x1 - x2 << endl;
//    }
//    else if (str[0] == 'm')
//    {
//        cout << x1 * x2 << endl;
//    }
//    else
//    {
//        if (x2 == 0)
//            cout << "Error" << endl;
//        else
//            cout << x1 / x2 << endl;
//    }
//    // write your code here......
//
//
//    return 0;
//}