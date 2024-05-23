int plusThree(int number) {
    int threeMore = number + 3;
    return threeMore;
}
/*
함수가 지역 변수인 threeMore의 참조를 반환하고 있습니다. 
하지만 함수가 끝난 후 이 변수는 소멸되므로, 
참조가 가리키는 메모리는 유효하지 않게 됩니다. 
이는 정의되지 않은 동작(Undefined Behavior)을 초래합니다.
*/
