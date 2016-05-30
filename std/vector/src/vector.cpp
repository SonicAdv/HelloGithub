#include <iostream>
#include <vector>



int main(int argc, const char * argv[]) {
    
    std::vector<int> vec;
    for (int i=0; i<10; i++) {
        vec.push_back(i);
    }

    std::cout << "capacity of vec: " << vec.capacity() << std::endl;
    std::cout << "size of vec: " << vec.size() << std::endl;

    std::cout << "vec[5]: " << vec[5] << std::endl;
    std::cout << "vec front: " << vec.front() << std::endl;
    std::cout << "vec back : " << vec.back() << std::endl;

    //正序遍历
    int sum= 0;
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        sum += *it;
    }
    std::cout << "sum: " << sum << std::endl;

    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        if (*it >= 3 && *it <= 6) {
            std::cout << "vec: " << *it << std::endl;
        }
    }

    //逆序遍历
/*    for(std::vector<int>::iterator it = vec.rbegin(); it != vec.rend(); ++it) {
        if (*it >= 3 && *it <= 6) {
            std::cout << "vec: " << *it << std::endl;
        }
    }
    */
    std::cout << "-----insert result below: insert ahead-----" << std::endl;

    //头部插入
    std::vector<int>::iterator it_ins = vec.begin();
    vec.insert(it_ins, 100);
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    std::vector<int> vec2(2, 200);
    it_ins = vec.begin();
    vec.insert(it_ins, vec2.begin(), vec2.end());
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    std::vector<int> vec3(5, 300);
    it_ins = vec.begin();
    vec.insert(it_ins, vec3.begin(), vec3.end());
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    std::cout << "capacity of vec: " << vec.capacity() << std::endl;
    std::cout << "size of vec: " << vec.size() << std::endl;
    //中间插入
    std::cout << "-----insert result below: insert in middle-----" << std::endl;
    it_ins = vec.begin();
    vec.insert(it_ins+1, 302);
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    vec.insert(it_ins+2, vec2.begin()+1, vec2.end());
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    //尾部插入
    std::cout << "-----insert result below: insert behind-----" << std::endl;
    it_ins = vec.end();
    vec.insert(it_ins, 401);

    vec.push_back(402);
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    //删
    std::cout << "-----delete result below: -----" << std::endl;
    vec.pop_back();
    vec.erase(vec.begin());
    vec.erase(vec.begin(),vec.begin()+5);
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    std::cout << "-----resize result below: -----" << std::endl;
    vec.pop_back();
    vec.resize(12);
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }
    std::cout << "capacity of vec: " << vec.capacity() << std::endl;
    std::cout << "size of vec: " << vec.size() << std::endl;

    std::cout << "-----swap result below: -----" << std::endl;
    vec.swap(vec3);
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }

    std::cout << "-----clear result below: -----" << std::endl;
    vec.clear();
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "vec: " << *it << "; " << std::endl;
    }
    
    return 0;
}
