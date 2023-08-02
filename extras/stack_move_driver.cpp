#include <iostream>
#include <memory>

#include <stack.hpp>

int main(int argc, char** argv)
{
    auto stack = Stack<std::unique_ptr<float>>(10);

    // Create a new `float` object
    auto data = std::make_unique<float>(1);
    std::cout << "`data` points to " << data.get() << std::endl;

    // Push the oobject on the stack by transferring ownership to it
    stack.push(std::move(data));
    std::cout << "`data` points to " << data.get() << std::endl;

    // Retrieve the object and its ownership
    auto popped = std::move(stack.top());
    stack.pop();
    std::cout << "`popped` points to " << popped.get() << std::endl;

    // The object will be automaticallly deleted
    // by exting the function as the variable `retrieved`, which owns
    // it, falls out of scope (RAII idiom)
    return 0;
}
