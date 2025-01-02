#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <set>
#include <queue>


int main(int argc, char *argv[]) {
    // Vector
    std::vector<int> vec = {10, 20, 30};
    vec.push_back(40);
    std::cout << "Vector: ";
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;


    // Deque
    std::deque<int> deq = {10, 20, 30};
    deq.push_front(5);
    deq.push_back(40);
    std::cout << "Deque: ";
    for (int d : deq) {
        std::cout << d << " ";
    }
    std::cout << std::endl;


    // List
    std::list<int> lst = {10, 20, 30};
    lst.push_front(5);
    lst.push_back(40);
    std::cout << "List: ";
    for (int l : lst) {
        std::cout << l << " ";
    }
    std::cout << std::endl;


    // Map
    std::map<std::string, int> m;
    m["apple"] = 2;
    m["banana"] = 3;
    m["cherry"] = 5;
    std::cout << "Map: ";
    for (const auto& p : m) {
        std::cout << "{" << p.first << ": " << p.second << "} ";
    }
    std::cout << std::endl;


    // Unordered Map
    std::unordered_map<std::string, int> um;
    um["dog"] = 4;
    um["cat"] = 3;
    um["bird"] = 2;
    std::cout << "Unordered Map: ";
    for (const auto& p : um) {
        std::cout << "{" << p.first << ": " << p.second << "} ";
    }
    std::cout << std::endl;


    // Set
    std::set<int> s = {10, 20, 30, 10};
    s.insert(40);
    for (int elem : s) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;


    // Priority Queue
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(15);
    std::cout << "Priority Queue (max): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}
