#include<stdio.h>

void foo() {	
    puts("foo");
}

int main() {
    void (*p1_foo)() = foo;
    void (*p2_foo)() = *foo;
    void (*p3_foo)() = &foo;
    void (*p4_foo)() = *&foo;
    void (*p5_foo)() = &*foo;
    void (*p6_foo)() = **foo;
    void (*p7_foo)() = **********************foo;

    (*p1_foo)();
    (*p2_foo)();
    (*p3_foo)();
    (*p4_foo)();
    (*p5_foo)();
    (*p6_foo)();
    (*p7_foo)();
}
