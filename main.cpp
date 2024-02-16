#include <iostream>

using namespace std;

int main()
{
    /* Q\ Write C++ code to ask the user to insert the width and length of his house then calculate the
          area of the house */

    int width, lenght,area;

    cout << "Please enter the width of your house: ";
    cin >> width;

    cout << "Please enter the length of your house: ";
    cin >> lenght;

    area = width * lenght;

    cout << "Your house area is: " << area << " meter square";

    return 0;
}
