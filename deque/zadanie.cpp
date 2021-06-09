#include <iostream>
#include <deque>

void print(const std::deque <int>& deque) {
    for (const auto& item : deque) {
        std::cout << item << ' ';
    }    
    std::cout << '\n';
}

int main() {
    std::deque <int> deque {};
    for (int i = 0; i < 5; i++) {
        deque.push_back(i);
    }
    print(deque);
    auto it = deque.begin();
    std::advance(it, 1);
    deque.erase(it);
    it = deque.begin();
    std::advance(it, 2);
    deque.erase(it);
    print(deque);
    deque.push_front(30);
    deque.push_back(30);
    print(deque);
    it = deque.begin();
    std::advance(it, 3);
    deque.insert(it, 20);
    print(deque);

}