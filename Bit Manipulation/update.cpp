#include <iostream>
void updateFun(int num,int i,int val){

    num = num & ~(1<<i);

    num = num |  (val<<i);

    std::cout << num << std::endl;
}

int main() {
    std::cout << "Hello World!\n";
    updateFun(7,3,1);
}