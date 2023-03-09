#include <iostream>
using namespace std;

class TimeDuration {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        TimeDuration(int inputSeconds) {
            hours = inputSeconds / 3600;
            inputSeconds -= hours * 3600;
            minutes = inputSeconds / 60;
            inputSeconds -= minutes * 60;
            seconds = inputSeconds;
        }
        void display() {
            cout << "Time Duration: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
        }
};

int main() {
    int inputSeconds;
    cout << "Enter the number of seconds: ";
    cin >> inputSeconds;
    TimeDuration td(inputSeconds);
    td.display();
    return 0;
}
