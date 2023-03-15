#include <iostream>
#include <cstdio>

using namespace std;

struct node {
  int info;
  node *next;
};

class queue {
public:
  queue();
  bool empty();
  void enqueue (int x);
  int dequeue();
  int peek ();

private:
  node *front, *rear;
};

queue::queue() {
  front=rear=NULL;
}

bool queue::empty() {
  return (front==NULL);
}

void queue::enqueue(int x) {
  node *p = new node;
  p->info = x;
  p->next = NULL;
  if (front == NULL) {
    front = p;
  }
  else {
    rear->next = p;
  }
  rear=p;
}

int queue::dequeue() {
  node *p = front;
  int result = front->info;
  if (front == rear) {
    rear = NULL;
  }
  front = front->next;
  delete p;
  return result;
}

int queue::peek() {
  return front->info;
}

int main() {
  queue a,b;
  int eq=0,size=0,n;
  bool flag=true;

  while(scanf("%d", &n)==1) {
    if (n>0) {
      a.enqueue(n);
      eq++;
      size++;
    }
    else {
      b.enqueue(n);
      eq--;
    }
  }

  if (eq!=0) {
    flag=false;
  }
  else {
    while (size>0) {
      if (a.dequeue()+b.dequeue()!=0) {
        flag=false;
      }
      size--;
    }
  }
  if (flag) {
    cout << "yes" << endl;
  }
  else {
    cout << "no" << endl;
  }
  return 0;
}
