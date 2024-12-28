#include <iostream>
#include <memory>


class Resource {
    private:
        int data;

    public:
        Resource(int val) : data(val) {
            std::cout << "Resource acquired with value " << data << std::endl;
        }

        ~Resource() {
            std::cout << "Resource destroyed with value " << data << "\n";
        }

        void show() const {
            std::cout << "Resource value: " << data << std::endl;
        }
};


int main(int argc, char *argv[]) {
    std::shared_ptr<Resource> shared1 = std::make_shared<Resource>(42);
    std::cout << "Shared pointer count: " << shared1.use_count() << std::endl;

    {
        // Create another shared_ptr that shares ownership
        std::shared_ptr<Resource> shared2 = shared1;
        std::cout << "Shared pointer count inside block: " << shared1.use_count() << std::endl;
        shared2->show();
    }

    std::cout << "Shared pointer count after block: " << shared1.use_count() << std::endl;

    shared1->show();

    return 0;
}
