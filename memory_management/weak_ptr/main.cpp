#include <iostream>
#include <memory>


class Parent;

class Child {
    public:
        std::weak_ptr<Parent> parent;

        void set_parent(std::shared_ptr<Parent> p) {
            parent = p;
        }

        void show_parent();
};


class Parent {
    public:
        std::string name;
        std::shared_ptr<Child> child;

        Parent(const std::string& n) : name(n) {}
};

void Child::show_parent() {
    if (auto p = parent.lock()) { // Check if the parent still exists
        std::cout << "Child's parent name is: " << p->name << "\n";
    } else {
        std::cout << "Parent is no longer available.\n";
    }
}


int main(int argc, char *argv[]) {
    std::shared_ptr<Parent> parent = std::make_shared<Parent>("Alice");
    std::shared_ptr<Child> child = std::make_shared<Child>();

    parent->child = child;
    child->set_parent(parent);

    std::cout << "Parent name: " << parent->name << std::endl;
    child->show_parent();

    parent.reset();
    std::cout << "Parent destroyed." << std::endl;
    child->show_parent();

    return 0;
}
