#include <cassert>
#include <iostream>
#include "example.h"


int main() {
    std::cout << "Тесты задания 1: \n";
    assert(findPersonWithBroom(3, 2)==3);
    std::cout << "OK\n";
    assert(findPersonWithBroom(4, 7)==2);
    std::cout << "OK\n";
    assert(findPersonWithBroom(11, 32)==9);
    std::cout << "OK\n";


    std::cout << "Тесты задания 2: \n";
    assert(canReachTarget(0, 0, 0, 2, 2)==true);
    std::cout << "OK\n";
    assert(canReachTarget(0, 1, 1, 1, 1) == true);
    std::cout << "OK\n";
    assert(canReachTarget(0, 0, 0, 4, 5) == false);
    std::cout << "OK\n";


    std::cout << "Тесты задания 3: \n";
    assert(solveEquation("x+4=2") == "x=-2");
    std::cout << "OK\n";
    assert(solveEquation("6=4x-2") == "x=2");
    std::cout << "OK\n";
    assert(solveEquation("-x+x+3x=2x-x+x") == "x=0");
    std::cout << "OK\n";


    std::cout << "Тесты задания 4: \n";
    assert(findMinTimeDiff({"00:00", "23:57"})==3);
    std::cout << "OK\n";
    assert(findMinTimeDiff({"00:00", "00:00"})==0);
    std::cout << "OK\n";
    assert(findMinTimeDiff({"00:00", "01:00", "23:30"})==30);
    std::cout << "OK\n";


    std::cout << "Тесты задания 5: \n";
    assert(canReach(536870912, 536870912)==true);
    std::cout << "OK\n";
    assert(canReach(6, 9) == false);
    std::cout << "OK\n";
    assert(canReach(2, 1)==true);
    std::cout << "OK\n";


    std::cout << "Тесты задания 6: \n";
    assert(calculateExpression("1+8")==9);
    std::cout << "OK\n";
    assert(calculateExpression("     90                             ")==90);
    std::cout << "OK\n";
    assert(calculateExpression("2")==2);
    std::cout << "OK\n";

    return 0;
}