#include <iostream>
#include <vector>



int main(int argc, const char * argv[]) {
    
    std::vector<int> vec;
    for (int i=0; i<100; i++) {
        vec.push_back(i);
    }

    std::cout << "vec[50]:" << vec[50] << std::endl;
    std::cout << "vec front :" << vec.front() << std::endl;
    std::cout << "vec back :" << vec.back() << std::endl;

    //正序遍历
    int sum= 0;
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        sum += *it;
    }
    std::cout << "sum:" << sum << std::endl;

    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        if (*it>50 && *it<60) {
            std::cout << "vec:" << *it << std::endl;
        }
    }

    //逆序遍历
/*    for(std::vector<int>::iterator it = vec.rbegin(); it != vec.rend(); it--) {
        if (*it>50 && *it<60) {
            std::cout << "vec:" << *it << std::endl;
        }
    }
*/    
    
    return 0;
}
