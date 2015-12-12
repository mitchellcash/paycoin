#include "primenodes.h"

// This is in util.h but we really don't need all of util.h for this file.
typedef long long int64;

void CPrimeNodeDB::WriteTestMicroPrimeDB() {
    LOCK(cs);
    WriteMicroPrimeAddr(std::string("muVEJW5YZpZc4QxUaDMJVxcy1vQcMrPhmQ"), (int64)5000);
    WriteMicroPrimeAddr(std::string("mp5aHQgQNEvaajXwKhtyRXdpxbFiS8AbSo"), (int64)5000);
    WriteMicroPrimeAddr(std::string("mmfHUbLchGPUKgs2TvKhyj7MU1EKo1H7qy"), (int64)5000);
    WriteMicroPrimeAddr(std::string("mpCYzc3XqcLYGBHtJxAFQQ1nz7YZwecE3v"), (int64)5000);
}
