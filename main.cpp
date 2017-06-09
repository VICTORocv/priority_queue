//
//  main.cpp
//  priority_queue
//
//  Created by 郭悟清 on 2017/6/7.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    priority_queue<double> pq;
    pq.push(3.2);
    pq.push(9.8);
    pq.push(4.5);//最大元素会被放在队头
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
