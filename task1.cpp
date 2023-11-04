#include <iostream>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7
#define DAY_OF_WEEK(a) ((a == MON) ? "Monday" : ((a == TUE) ? "Tuesday" : ((a == WED) ? "Wednsday" : ((a == THU) ? "Thusday" : ((a == FRI) ? "Friday" : ((a == SAT) ? "Sataday" : ((a == SUN) ? "Sunday" : "Nathing")))))))

using namespace std;
int main()
{
    int dayOfWeek = 0;
    while (dayOfWeek != -1)
    {
        cin >> dayOfWeek;
        cout << DAY_OF_WEEK(dayOfWeek) << endl;        
    }
}