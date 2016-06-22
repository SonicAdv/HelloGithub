#include <functional>
#include <vector>
#include <list>
#include <iostream>
#include <queue>
#include <stack>
#include <deque>
#include <sstream>
#include "queue.h"

// stack, queue and priority queue

int main(int argc, const char * argv[]) {
    {
        // stack
        std::stack<int> stk;
        for (int i = 0; i < 5; i++) {
            stk.push(i);// stack always push to back
        }
        std::cout << "size of stack: " << stk.size() << std::endl;          //size of stack: 5
        std::cout << "top of stack: " << stk.top() << std::endl;            //top of stack: 4

        stk.pop();  // stack always pop the top
        std::cout << "size of stack: " << stk.size() << std::endl;          //size of stack: 4
        std::cout << "top of stack: " << stk.top() << std::endl;            //top of stack: 3

        std::cout << "empty or not: " << stk.empty() << std::endl;          //empty or not: 0
    
        for (int i = 0; i < 4; i++) {
            stk.pop();
        }
        std::cout << "======empty or not: " << stk.empty() << std::endl;          //empty or not:1 
        // stack只有一个出入口:top/pop/push
    }

    {
        // queue
        std::queue<int> que;
        for(int i=0; i<5; i++) {
            que.push(i);    // queue always push to back
        }   
        std::cout << "size of queue: " << que.size() << std::endl;          // size of queue: 5
        std::cout << "front of queue: " << que.front() << std::endl;        // front of queue: 0
        std::cout << "back of queue: " << que.back() << std::endl;          // back of queue: 4

        for(int i=0; i<6; i++) {
            if(que.empty() == 1) {
                que.pop();    // queue always pop the front
            }
                std::cout << "front of queue: " << que.front() << std::endl;    // front of queue: 1 2 3 4 0
                std::cout << "back of queue: " << que.back() << std::endl;      // back of queue: 4 4 4 4 4
            }
        
        std::cout << "======empty or not: " << que.empty() << std::endl;    // empty or not:1 
        //0 什么鬼？
    }

    {
        // priority queue: sorted queue
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;
        std::list<element_t> ele;
        for(int n : {1,8,5,6,3,4,0,9,7,2}) {
            pq1.push(n);

            element_t e;
            std::stringstream ss;
            e.n = n;
            ss << n;
            e.desc = ss.str();
            ele.push_back(e);
        }
        //priority_queue不能像下面这样遍历，vector\list这种定义了begin()end()的可以
        //for(int n : vec) {
        //    std::cout << n;
        //}
        for (int n = 0; n < pq1.size(); n++) {
            std::cout << n;
        }
        /*遍历还没搞定
        for (std::iterator<element_t> it = ele.begin(); it != ele.end(); ++it) {
            std::cout << it->second.n << "; " << it->second.desc << std::endl;
        }
        */



    }

    
    return 0;
}
