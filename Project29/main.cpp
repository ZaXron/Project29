#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List<int> List1;
    List1.push_back(1);
    List1.push_back(2);
    List1.push_back(3);

    List<int> List2;
    List2.push_back(2);

    List<int> List3 = List1 + List2;
    List<int> List4 = List1 * List2;

    List1.show();

    List2.show();

    List3.show();

    List4.show();

    return 0;
}