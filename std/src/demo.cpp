#include <iostream>


class DemoClass {
public:
    // 默认构造函数
    DemoClass() {
        std::cout << "constructor 1" << std::endl;
    }
    
    // 构造函数
    DemoClass(int i, int j) {
        std::cout << "constructor 2" << std::endl;
        this->i = i;
        this->j = j;
        std::cout << this->i << "," << this->j << std::endl;
    }
    
    // 拷贝构造函数
    DemoClass(const DemoClass& myclass) {
        std::cout << "constructor 3" << std::endl;
        this->i = myclass.i;
        this->j = myclass.j;
        std::cout << this->i << "," << this->j << std::endl;
    }
    
    // 赋值构造函数
    DemoClass& operator =(const DemoClass& myclass) {
        std::cout << "constructor 4" << std::endl;
        if (this != &myclass) {
            this->i = myclass.i;
            this->j = myclass.j;
        }
        std::cout << this->i << "," << this->j << std::endl;
        
        return *this;
    }
    
    // 析构函数
    ~DemoClass() {
        std::cout << "destructor" << std::endl;
        i = 0;
        j = 0;
    }
   
/*
    std::string toString() {
        return std::string(i) + ", " + std::string(j);
    }
 */
    

    int i;
    int j;
};

int main(int argc, const char * argv[]) {
    {
        DemoClass myclass1(100, 2);   // constructor 2
        DemoClass myclass2(myclass1); // constructor 3
        std::cout << "i:" << myclass2.i << "j:" << myclass2.j << std::endl;  // 100, 2
    } {
        DemoClass myclass1(100, 2);   // constructor 2
        DemoClass myclass2;           // constructor 1
        myclass2 = myclass1;        // constructor 4
        //std::cout << myclass2.toString() << std::endl;  // 100, 2
        std::cout << "i:" << myclass2.i << "j:" << myclass2.j << std::endl;  // 100, 2
    }
    
    
    return 0;
}
