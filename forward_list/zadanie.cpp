#include <iostream>
#include <forward_list>

void print(std::forward_list <int>& list) {
    for (const auto& item : list) {
        std::cout << item << ' ';
    }
    std::cout << '\n';

}

int main() {
    std::forward_list <int> list {0, 1, 2, 3, 4, 5, 6};
    // std::forward_list <int> list {};
    
    // auto it = list.begin();
    // for (int i = 6; i >= 0; i--) {
    //      list.push_front(i);
    // }
    print(list);
    auto it = list.begin();
    auto it2 = list.begin();
    std::advance(it, 1);
    std::advance(it2, 3);
    list.erase_after(it, it2);
    print(list);
    list.push_front(10);
    it = list.begin();
    it = list.end();
    // for (it = list.begin(); *it != 6; it++) {
    //     std::cout << *it << ' ';
    // }
    for (it2 = list.begin(); it2 != list.end(); it2++) {
        it = it2;
    }
    list.insert_after(it, 10);   
    print(list);
}