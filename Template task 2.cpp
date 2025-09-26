#include <iostream>
template <typename T>
class Logger {
public:
    void log(const T& message) {
        std::cout << "Log: " << message << std::endl;
    }

    void error(const T& message) {
    std::cout<< "Error: " << message << std::endl;
    }
};

int main() {
    Logger<std::string> stringLogger;
    stringLogger.log("This is a log message.");
    stringLogger.error("This is an error message.");

    Logger<int> intLogger;
    intLogger.log(123);
    intLogger.error(456);

    return 0;
}