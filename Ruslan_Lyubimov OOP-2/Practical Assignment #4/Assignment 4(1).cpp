/*
Practical  Assignment # 4;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/

#include<iostream>
#include<string>
using namespace std;


class DayTime {

private:
    int hour, minute, second;

public:

    DayTime() {
        hour = 0;
        minute = 0;
        second = 0;

    }
    DayTime(int h, int m, int s) {

        hour = h;
        minute = m;
        second = s;
    }

    int getHour() const
    {
        return hour;
    }

    int getMinute() const {
        return minute;
    }
    int getSecond() const {
        return second;
    }
    int asSeconds() const {
        return ((hour * 60 + minute) * 60 + second);
    }

    DayTime operator++ () {

        ++second;


        if (second >= 60) {
            minute = minute + second / 60;
            second = second / 60;
        }

        if (minute >= 60) {
            hour = hour + minute / 60;
            minute = minute / 60;
        }

        cout << "We did it!" << endl;
        return DayTime(hour, minute, second);

    }

    DayTime operator-- () {

        --minute;


        if (second < 0) {
            minute = minute + second / 60;
            second = second / 60;
        }

        if (minute < 0) {
            hour = hour + minute / 60;
            minute = minute / 60;
        }

        cout << "We did it!" << endl;
        return DayTime(hour, minute, second);

    }

};

int main() {
    cout << "Give current time details" << endl;
    int hr, mn, sc;
    cout << "Enter hours:" << endl;
    cin >> hr;
    cout << "Enter minutes:" << endl;
    cin >> mn;
    if (mn >= 60) {

        hr = hr + mn / 60;
        mn = mn % 60;
    }
    cout << "Enter second:" << endl;
    cin >> sc;
    if (sc >= 60) {

        mn = mn + sc / 60;
        sc = sc % 60;
    }

    DayTime dt(hr, mn, sc);

    int b;
    b = 4;
    while (b != 0) {

        cout << "Select operation:  \n 1.Display Time \n 2.Display Time in Seconds \n 3.Increment Seconds  \n 4. Decrement Minutes \n 0.Exit" << endl;


        cin >> b;
        switch (b) {
        case 1:
            cout << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

            break;
        case 2:

            cout << dt.asSeconds() << endl;
            break;
        case 3:

            ++dt;
            break;
        case 4:

            --dt;
            break;

        }

    }

    system("pause");
    return 0;
}