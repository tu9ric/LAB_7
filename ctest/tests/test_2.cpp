#include <cassert>
#include "example.h"

void test_correct(){
    assert(countNumbersWithoutConsecutiveOnes(10)==8);
}

int main(){
    test_correct();
}