#include <iostream>
//#define SPRING 1
//#define SUMMER 2
//#define AUTUMN 3
#define WINTER 4

#if SPRING
#define RESULT "Spring"
#elif SUMMER
#define RESULT "Summer"
#elif AUTUMN
#define RESULT "Autumn"
#elif WINTER
#define RESULT "Winter"
#endif
using namespace std;
int main()
{
    cout << RESULT << endl;
}