#include "Harl.hpp"

int main()
{
    Harl a;

    a.complain("DEBUG");
    a.complain("HELLO");
    a.complain("DEBUG");

    a.complain("INFO");
    a.complain("TEST");
    a.complain("INFO");

    a.complain("WARNING");
    a.complain("HI");
    a.complain("WARNING");

    a.complain("ERROR");
    a.complain("TEST");
    a.complain("ERROR");

}
