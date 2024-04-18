#include <iostream>

using namespace std;
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

string printDay(Day d) {
    switch (d) {
        case Day::Monday:
            return "Monday";
        case Day::Tuesday:
            return "Tueday";
        case Day::Wednesday:
            return "Wednesday";
        case Day::Thursday:
            return "Thursday";
        case Day::Friday:
            return "Friday";
        case Day::Saturday:
            return "Saturday";
        case Day::Sunday:
            return "Sunday";
        default:
            return "Bad Day";
    }
}

Day makeDay(string name) {
    if (name == "Monday") {
        return Day::Monday;
    }
    // ...
}
bool isWeekday(Day d) {
    bool theValue;

    switch (d) {
        case Day::Monday:
        case Day::Tuesday:
        case Day::Wednesday:
        case Day::Thursday:
        case Day::Friday:
            theValue = true;
            break;
        default:
            theValue = false;
    }
    return theValue;
}
int main() {
    Day day = Day::Saturday;

    for (int i = 0; i < 7; i++) {
        cout << "day " << printDay(Day(i)) << " " << isWeekday(Day(i)) << endl;
    }
    return 0;
}
