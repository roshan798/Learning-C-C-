#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int lineCount = 0;

    // Read inputs until the end of file (Ctrl+D on Unix, Ctrl+Z on Windows)
    while (getline(cin, line) && lineCount < 20)
    {
        istringstream iss(line);

        char present_state, next_state, input, output;
        // Check if the line contains four space-separated inputs
        if (iss >> present_state >> next_state >> input >> output)
        {
            // Process the inputs as needed
            cout << "Present State: " << present_state
                 << " Next State: " << next_state
                 << " Input: " << input
                 << " Output: " << output << endl;
        }
        // else {
        // Handle invalid input format
        // cerr << "Invalid input format on line: " << line << endl;
        //}
        lineCount++;
    }
    cout << "exited" << endl;

    return 0;
}
