#include <iostream>
#include <cmath>

using namespace std;

//Write a function that calculates overtime and pay associated with overtime.
//
//Working 9 to 5: regular hours
//After 5pm is overtime
//Your function gets an array with 4 values:
//
//Start of working day, in decimal format, (24-hour day notation)
//End of working day. (Same format)
//Hourly rate
//Overtime multiplier
//Your function should spit out:
//
//$ + earned that day (rounded to the nearest hundreth)
//Examples
//        overTime([9, 17, 30, 1.5]) ➞ "$240.00"
//
//overTime([16, 18, 30, 1.8]) ➞ "$84.00"
//
//overTime([13.25, 15, 30, 1.5]) ➞ "$52.50"
//2nd example explained:
//
//From 16 to 17 is regular, so 1 * 30 = 30
//From 17 to 18 is overtime, so 1 * 30 * 1.8 = 54
//30 + 54 = $84.00

class Timetable{
public:
    double startTime;
    double endTime;
    double money;
    double multiplier;

    Timetable(double aStartTimer, double aEndTime, double aMoney, double aMultiplier){
        startTime = aStartTimer;
        endTime = aEndTime;
        money = aMoney;
        multiplier = aMultiplier;
    }

    double getSum(){
        double overTime = 0;
        double totalHours = endTime - startTime;

        if (endTime > 17){
            overTime = endTime - 17;
        }

        double sum = (totalHours - overTime) * money + overTime * money * multiplier;

        return round(sum);
    }
};

int main() {
    double start, end, money, multiplier;
    cout << "Enter start time: "; cin >>start;
    cout << "Enter end time: "; cin >>end;
    cout <<  "Enter the money: "; cin >> money;
    cout << "Enter the multiplier: "; cin >>multiplier;

    Timetable timetable(start, end, money, multiplier);
    cout << endl << "You'll earn: " << timetable.getSum() << " eur!";
}
