// max_priority_queue.cpp
#include<queue> // for priority_queue
#include<iostream>
#include<cassert>

using namespace std;

class Compare{
public:
  bool operator() (int a,int b){
    if(a < b) return 0;
    else return 1;
  }
};

int main(void) {
  priority_queue<int,vector<int>,Compare> pq;
 // push some numbers on the pqueue
 pq.push(5);
 pq.push(7);
 pq.push(1);
 pq.push(2);
 pq.push(3);

 // elements are prioritized by operator<
 // so the biggest int should be on top

  assert(pq.top() == 1);

 // remove two times the top of the pqueue
 pq.pop(); // removes the top, i.e. 7
 pq.pop(); // removes the top, i.e. 5
  assert(pq.top() == 3);

 cout << "Tests passed" << endl;
 return 0;
}

