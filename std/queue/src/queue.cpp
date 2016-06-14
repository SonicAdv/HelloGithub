#include <iostream>
#include <queue>
#include <stack>
#include <deque>
#include "queue.h"

//stack, queue and priority queue

int main(int argc, const char * argv[]) {
    //stack
    std::stack<int> stk;
    for (int i = 0; i < 5; i++) {
        stk.push(i);//stack always push to back
    }
    std::cout << "size of stack: " << stk.size() << std::endl;          //size of stack: 5
    std::cout << "top of stack: " << stk.top() << std::endl;            //top of stack: 4

    stk.pop();  //stack always pop the 
    std::cout << "size of stack: " << stk.size() << std::endl;          //size of stack: 4
    std::cout << "top of stack: " << stk.top() << std::endl;            //top of stack: 3

    std::cout << "empty or not: " << stk.empty() << std::endl;          //empty or not: 0
    
    for (int i = 0; i < 4; i++) {
        stk.pop();
    }
    std::cout << "======empty or not: " << stk.empty() << std::endl;          //empty or not:1 
    //stack只有一个出入口:top/pop/push

    //queue
    std::queue<int> que;
    for(int i=0; i<5; i++) {
        que.push(i);    //queue always push to back
    }
    std::cout << "size of queue: " << que.size() << std::endl;          //size of queue: 5
    std::cout << "front of queue: " << que.front() << std::endl;        //front of queue: 0
    std::cout << "back of queue: " << que.back() << std::endl;          //back of queue: 4

    for(int i=0; i<6; i++) {
        que.pop();    //queue always pop the front
        std::cout << "front of queue: " << que.front() << std::endl;    //front of queue: 1 2 3 4 0
        std::cout << "back of queue: " << que.back() << std::endl;      //back of queue: 4 4 4 4 4
    }
    std::cout << "======empty or not: " << que.empty() << std::endl;          //empty or not:1 
    //0 什么鬼？

    
    return 0;
}
