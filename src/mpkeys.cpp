#include "primenodes.h"

// This is in util.h but we really don't need all of util.h for this file.
typedef long long int64;

void CPrimeNodeDB::WriteMicroPrimeDB() {
    LOCK(cs);
    WriteMicroPrimeAddr(std::string("P9Yo3PtaxuzeBZAimsGzz6mdTmdDtU6vhf"), (int64)1000, 25);
    WriteMicroPrimeAddr(std::string("PCwbi27DNHAfDmCaNzCzd9p5GaxuN6VYft"), (int64)1000, 25);
    WriteMicroPrimeAddr(std::string("PHa5VCbd3omsph2M6JFBERfr8yLJRzSQrd"), (int64)1000, 25);
    WriteMicroPrimeAddr(std::string("PX6ZG7bWNpNw6sawPf341h3hLRBvedku8i"), (int64)1000, 25);
    WriteMicroPrimeAddr(std::string("PWKWg1LNJLVxEETakiAevsVdcoBuerUoBW"), (int64)1000, 25);
    WriteMicroPrimeAddr(std::string("PBGC4BxByuwt7qcfdU5Lgc4NEBvCziHZbX"), (int64)4000, 25);
    WriteMicroPrimeAddr(std::string("PQCLEou6ZWhUX45q8qRh8eiCzTowD698NW"), (int64)4000, 25);
    WriteMicroPrimeAddr(std::string("PP9okkUEPk3CRbSsdjMno2sLESYbaqXNpk"), (int64)4000, 25);
    WriteMicroPrimeAddr(std::string("PEsUgdGEpvsoRayMAie3mSoYo6rB3pGQUZ"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("PN3rwyDJchVVBgfCGoXApdx2BHpr8MJQN8"), (int64)5000, 25);
    WriteMicroPrimeAddr(std::string("PMaTtaVc6iV6XCc92ZYwzNGXUxBryUAmDm"), (int64)5000, 25);
}
