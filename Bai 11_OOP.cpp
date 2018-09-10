#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
//aaa

class Time
{
private:
    int hour, minute, second;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void Display()
    {
        int s = second;
        int m = minute;
        int h = hour;
        int count = 0;

        while(s >= 60)
        {
            s = s - 60;
            count++;
        }

        m = m + count;
        count = 0;
        while(m >= 60)
        {
            m = m - 60;
            count++;
        }
        h = h + count;
        count = 0;
        while(h >= 24)
        {
            h = h - 24;
            count++;
        }

        cout<< "\n";
        if(count > 0)
            cout << count << " day ";

        cout<< convertIntToString(h) << ":"<< convertIntToString(m) << ":" << convertIntToString(s);
    }

    string convertIntToString(int num)
    {
        if (num >= 100)
            return "";

        string result = "  ";
        if(num < 10)
        {
            result[0] = 48;
            result[1] = num + 48;
        }
        else
        {
            int chuc = num/10;
            int donvi = num%10;

            result[0] = chuc + 48;
            result[1] = donvi + 48;
        }
        return result;
    }

    Time Distance(Time time){
        int s = abs(time.second - second);
        int m = abs(time.minute - minute);
        int h = abs(time.hour - hour);
        return Time(h, m, s);
    }

};

class Student{
public:
        string name;
};

int main()
{
   /* Time time1(20, 61, 63);
    Time time2(21, 03, 60);

    time1.Display();
    time2.Display();

    Time time3 = time1.Distance(time2);
    time3.Display();*/

    /*int* ptrA = new int(10);
    int numA = 5;
    int * ptrNumA = &numA;

    cout<< *ptrNumA<< endl;
    cout<< &ptrNumA<< endl;
    cout<< ptrNumA<< endl;
    cout<< &numA<< endl;
    delete ptrA;
    cout<< *ptrA<< endl;*/

    Student* ptrSt1 = new Student();
    ptrSt1->name = "Duong";
    cout << ptrSt1->name << endl;
    delete ptrSt1;
    ptrSt1 = NULL;
    cout << ptrSt1->name << endl;

    return 0;
}
