#include "primenodes.h"

// This is in util.h but we really don't need all of util.h for this file.
typedef long long int64;

void CPrimeNodeDB::WriteTestMicroPrimeDB() {
    LOCK(cs);
    WriteMicroPrimeAddr(std::string("muVEJW5YZpZc4QxUaDMJVxcy1vQcMrPhmQ"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mp5aHQgQNEvaajXwKhtyRXdpxbFiS8AbSo"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mqatX2oJJK9m2LsZ7dXC7mPkfgwvdGv2KV"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("msw7WfUFdQbUfbgdnfDyA9X5Yg3PbyXTo2"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mrKAMDjosoS2cyHbw2Gd5AEm1dUjiV75hG"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mqm4mpixTNJU1jE8qCwMpmHgYTPUxuk7oH"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("n118MqDmynTcGx9bNSv9BHaVgFRYqqMyTv"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mt53YyQjtdmGujuSaKMLN9DHMrKR618ir4"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mvgcGHhjMHeWY8JXuRRJwWAuVfCuZmNrnc"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mxvEjcaymuz8FWGNB2vQNSKbavs2e4DmGL"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("mgA5TD9CJS9X6fvE6iiZmZxHQpszMKYYmp"), (int64)5000, 25);
}
