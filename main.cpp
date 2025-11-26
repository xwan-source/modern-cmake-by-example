#include <iostream>

#include <answer/answer.hpp>
## 回答器
int main(int argc, const char *argv[]) {
    for (;;) {
        std::cout << "What is the ultimate answer?" << std::endl;
        std::string answer;
        std::cin >> answer;
        auto expected_answer = answer::find_the_ultimate_answer();
        if (answer::check_the_answer(answer, expected_answer)) {
            std::cout << "Correct!" << std::endl;
            break;
        }
    }
    return 0;
}
