#include <iostream>
#include <vector>


#include "Operand.hpp"
#include "Operand.cpp"

int main() {

    Operand<int> test = Operand<int>(INTEGER); //TO DO INTEGER instead of int

//    enum Type { INTEGER, DOUBLE, /* ... */ };
//
//    union Data {
//        uint64_t as_integer;
//        double as_double;
//        // ...
//    };
//
//    struct Value {
//        Type type;
//        Data data;
//         public:     //by default also it is public
//            hello();
//            ~hello();
//    };
//
//    std::vector<Value> stack;
//
//    Value v = Value();
//    // v.type = INTEGER;
//    // v.data = 1;
//
//    stack.push_back(v);
//    // for (Value i: stack)
//    //     std::cout << i.data << ' ';


    return 0;
}


// https://stackoverflow.com/questions/21805574/how-to-have-a-c-stack-with-more-than-one-data-type