#include "primenodes.h"

// This is in util.h but we really don't need all of util.h for this file.
typedef long long int64;

void CPrimeNodeDB::WriteMicroPrimeDB() {
    LOCK(cs);
    WriteMicroPrimeAddr(std::string("P9Yo3PtaxuzeBZAimsGzz6mdTmdDtU6vhf"), (int64)1000);
    WriteMicroPrimeAddr(std::string("PCwbi27DNHAfDmCaNzCzd9p5GaxuN6VYft"), (int64)1000);
    WriteMicroPrimeAddr(std::string("PTEZR2eRDUDj1Qqw3ecnR3hs2MP5nFvLTu"), (int64)16000);
    WriteMicroPrimeAddr(std::string("PT9pCj8Xzmxyrk8JUGBTMSaN2W2oeFBrke"), (int64)16000);
}
