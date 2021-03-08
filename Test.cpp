#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * 1 _===_
 * 2  ___ \n ....
 * 3   _  \n /_\\
 * 4  ___ \n (_*_)
 * HNLRXYTB
 **/



TEST_CASE("good snowman code"){
    CHECK(snowman(11111111)=="\n _===_\n (.,.)\n<( : )>\n ( : )\n");
    CHECK(snowman(22412131)=="\n  ___ \n  ....\n\\(-..)\n (> <)>\n ( : )\n");
    CHECK(snowman(12411223)=="\n _===_\n\\(-..)\n (\" \")>\n (___)\n");
    CHECK(snowman(32334144)=="\n   _  \n  /_\\ \n (o.o)\n (   )>\n (   )\n");
    CHECK(snowman(12341234)=="\n _===_\n (O.o)/\n<(> <)\n (   )");
    CHECK(snowman(43214321)=="\n  ___ \n (_*_)\n (o_.)\n (] [)\\ \n ( : )\n");
    CHECK(snowman(43432112)=="\n  ___ \n (_*_)\n\\(-_O)\n ( : )>\n (\" \")\n");
    CHECK(snowman(12334212)=="\n _===_\n (O.O)/\n ( : )\n ( : )\n");
    CHECK(snowman(4232212)=="\n _===_\n (o O)\n\\( : )/\n ( : )\n");
    CHECK(snowman(12411222)=="\n _===_\n\\(-..)\n (\" \")>\n ( : )\n");
}

TEST_CASE("Bad snowman code"){
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1234432));
    CHECK_THROWS(snowman(11245213));
    CHECK_THROWS(snowman(111322122));
    CHECK_THROWS(snowman(432113));
    CHECK_THROWS(snowman(232));
    CHECK_THROWS(snowman(12342215));
    CHECK_THROWS(snowman(552212341));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(2231563));
    CHECK_THROWS(snowman(23213));

}


