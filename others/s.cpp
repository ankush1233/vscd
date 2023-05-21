#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   /* for(int i=0;i<9;i++){
        //srand(time(nullptr)); // Initialize random number generator with the current time
        //cout << rand() << endl; // Generate and print a random number
        cout<<time()<<endl;
    }
    return 0;*/
        // Get current time
    std::time_t now = std::time(nullptr);

    // Convert to local time
    std::tm* local_time = std::localtime(&now);

    // Print time in HH:MM:SS format
    std::cout << "Current time: ";
    std::cout << local_time->tm_hour << ":" << local_time->tm_min << ":" << local_time->tm_sec << std::endl;

    return 0;
}
