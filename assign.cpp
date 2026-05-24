#include <iostream>
using namespace std;

// Function to display student result
void displayResult(string name, int marks[])
{
    int total = 0;
    float average;

    // Calculate total using loop
    for (int i = 0; i < 3; i++)
    {
        total = total + marks[i];
    }

    // Calculate average
    average = total / 3.0;

    // Display results
    cout << "\nStudent Name: " << name << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    // Check pass or fail
    if (average >= 50)
        cout << "Status: Passed" << endl;
    else
        cout << "Status: Failed" << endl;
}

int main()
{
    string name;
    int marks[3];
    char answer;

    // Repeat for many students
    do
    {
        // Enter name
        cout << "Enter student name: ";
        cin >> name;

        // Enter 3 subject marks
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter mark " << i + 1 << ": ";
            cin >> marks[i];
        }

        // Call function
        displayResult(name, marks);

        cout << "\nDo you want another student? (y/n): ";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    return 0;
}