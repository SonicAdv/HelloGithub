#include <iostream>
#include <list>

int main(int argc, const char * argv[]) {
    std::list<int> ls;
    ls.assign(3, 9);
    for (int i = 0; i < 5; i++) {
        ls.push_back(i);
        ls.push_front(i);
    }

    std::cout << "list has no define of capacity. " << std::endl;
    std::cout << "size of list: " << ls.size() << std::endl;

    std::cout << "list can not be accessed in '[]'" << std::endl;
    std::cout << "list front: " << ls.front() << std::endl;
    std::cout << "list back : " << ls.back() << std::endl;

    //正序遍历
    {
        int sum = 0;
        for( auto it = ls.begin(); it != ls.end(); ++it ) {
            sum += *it;
        }
        std::cout << "sum: " << sum << std::endl;
//sum: 47
        for( int x : ls ) {
            std::cout << "ls: " << x << std::endl;
        }
    }
/*
ls: 4
ls: 3
ls: 2
ls: 1
ls: 0
ls: 9
ls: 9
ls: 9
ls: 0
ls: 1
ls: 2
ls: 3
ls: 4
 */
    std::cout << "-----insert result below: insert ahead-----" << std::endl;
    //头部插入
    std::list<int>::iterator it_ins = ls.begin();
    ls.insert(it_ins, 100);

    std::list<int> ls2(2, 200);
    it_ins = ls.begin();
    ls.insert(it_ins, ls2.begin(), ls2.end());

    std::list<int> ls3(3, 300);
    it_ins = ls.begin();
    ls.insert(it_ins, ls3.begin(), ls3.end());

    std::cout << "size of ls: " << ls.size() << std::endl;

    //逆序遍历
    for(auto it = ls.rbegin(); it != ls.rend(); ++it) {
        std::cout << "ls: " << *it << std::endl;
    }
    /*
ls: 4
ls: 3
ls: 2
ls: 1
ls: 0
ls: 9
ls: 9
ls: 9
ls: 0
ls: 1
ls: 2
ls: 3
ls: 4
ls: 100
ls: 200
ls: 200
ls: 300
ls: 300
ls: 300
     */
    //中间插入
    std::cout << "-----insert result below: insert in middle-----" << std::endl;
    it_ins = ls.begin();
    ls.insert(++it_ins, 302);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }

    ls.insert(++it_ins, ls2.begin(), ls2.end());
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 300; 
ls: 302; 
ls: 300; 
ls: 200; 
ls: 200; 
ls: 300; 
ls: 200; 
ls: 200; 
ls: 100; 
ls: 4; 
ls: 3; 
ls: 2; 
ls: 1; 
ls: 0; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 0; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4;
 */
    //尾部插入
    std::cout << "-----insert result below: insert behind-----" << std::endl;
    it_ins = ls.end();
    ls.insert(it_ins, 401);

    ls.push_back(402);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 300; 
ls: 302; 
ls: 300; 
ls: 200; 
ls: 200; 
ls: 300; 
ls: 200; 
ls: 200; 
ls: 100; 
ls: 4; 
ls: 3; 
ls: 2; 
ls: 1; 
ls: 0; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 0; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4;
ls: 401;
ls: 402;
*/
    //删
    std::cout << "-----delete result below: head & tail-----" << std::endl;
    ls.pop_back();
    ls.pop_front();
    ls.erase(ls.begin());
    it_ins=ls.end();
    ls.erase(--it_ins);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 300; 
ls: 200; 
ls: 200; 
ls: 300; 
ls: 200; 
ls: 200; 
ls: 100; 
ls: 4; 
ls: 3; 
ls: 2; 
ls: 1; 
ls: 0; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 0; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4;
*/

    std::cout << "-----delete result below: mid-----" << std::endl;
    it_ins = ls.begin();
    for (int i=0; i<5; ++i){
        ++it_ins;
    }
    ls.erase(ls.begin(),it_ins);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 200; 
ls: 100; 
ls: 4; 
ls: 3; 
ls: 2; 
ls: 1; 
ls: 0; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 0; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4;
*/

    std::cout << "-----resize result below: -----" << std::endl;
    ls.resize(12);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 200; 
ls: 100; 
ls: 4; 
ls: 3; 
ls: 2; 
ls: 1; 
ls: 0; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 0; 
ls: 1; 
*/

    std::cout << "-----sort result below: -----" << std::endl;
    ls.sort();
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 0; 
ls: 0; 
ls: 1; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 100; 
ls: 200; 
*/

    std::cout << "-----merge result below: -----" << std::endl;
    ls.merge(ls2);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 0; 
ls: 0; 
ls: 1; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4; 
ls: 9; 
ls: 9; 
ls: 9; 
ls: 100; 
ls: 200; 
ls: 200; 
ls: 200; 
*/

    std::cout << "-----splice result below: -----" << std::endl;
    it_ins = ls.begin();
    std::advance(it_ins,9);
    ls3.splice(ls3.begin(),ls,it_ins,ls.end());
    for(std::list<int>::iterator it = ls3.begin(); it != ls3.end(); ++it) {
        std::cout << "ls3: " << *it << "; " << std::endl;
    }
    /*
ls3: 9; 
ls3: 100; 
ls3: 200; 
ls3: 200; 
ls3: 200; 
ls3: 300; 
ls3: 300; 
ls3: 300; 
*/
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
/*
ls: 0; 
ls: 0; 
ls: 1; 
ls: 1; 
ls: 2; 
ls: 3; 
ls: 4; 
ls: 9; 
ls: 9; 
 */
    std::cout << "-----swap result below: -----" << std::endl;
    ls.swap(ls3);
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
    /*
ls: 9; 
ls: 100; 
ls: 200; 
ls: 200; 
ls: 200; 
ls: 300; 
ls: 300; 
ls: 300; 
*/
    std::cout << "-----remove result below: -----" << std::endl;
    ls.remove(9);
    ls.remove_if([](int n){return n==100;});
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
    /*
ls: 9; 
ls: 200; 
ls: 200; 
ls: 200; 
ls: 300; 
ls: 300; 
ls: 300; 
*/

    std::cout << "-----clear result below: -----" << std::endl;
    ls.clear();
    for(std::list<int>::iterator it = ls.begin(); it != ls.end(); ++it) {
        std::cout << "ls: " << *it << "; " << std::endl;
    }
    /*
     */
    
    return 0;
}
