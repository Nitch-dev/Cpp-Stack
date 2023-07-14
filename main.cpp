#include "stacklib/stack.h"
int main() {

    stack <int>s;
    s.push(78);
    s.show();
    int hello = s.pop();
    s.show();
    cout << hello;


}

