#include <iostream>
#include <cmath>
using namespace std;

const int Sunday = 1;

class Date
{
private:
    int day, month, year;

public:
    Date(int d = 2, int m = 1, int y = 2018)
    {
        day = d;
        month = m;
        year = y;
    }

    long Distance(Date date)
    {
        int numDayOfMonth[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
        if (isdate(numDayOfMonth) == 0)
            return 0;

        int countDay = 0;
        int minYear = (year < date.year)? year : date.year;
        int maxYear = (year >= date.year)? year : date.year;
        while(minYear < maxYear){
            countDay += dayOfYear(minYear);
            minYear++;
        }

        int minMonth = (month < date.month)? month : date.month;
        int maxMonth = (month >= date.month)? month : date.month;
        for(int i = minMonth - 1; i < maxMonth - 1; i++ ){
            countDay += numDayOfMonth[i];
        }
        int dayNum = abs(date.day - day);
        countDay = countDay + dayNum;

        return countDay;
    }

    int dayOfYear(int y){
        if (year%4 == 0&& year%100 != 0|| year%400 == 0)
            return 366;

        return 365;
    }

    int isdate(int numDayOfMonth[])
    {
        if (year%4 == 0&& year%100 != 0|| year%400 == 0)
            numDayOfMonth[1]=29;

        if (month < 1 || month >12)
            return 0;

        if (day < 1 || day > 7)
            return 0;

        return 1;
    }

};


int main()
{
    Date date1;
    Date date2(3, 3, 2018);

    cout << date1.Distance(date2);


    return 0;
}
