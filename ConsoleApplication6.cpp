#include <iostream>

using namespace std;
/**
 * @brief  real make class;
 */

//Эмир, у меня просто занятие - код тут не причем. Если честно, я даже не помню зачем он

class MyStack {
private:
    virtual void test(){
    }
    int size = -1;
    int mus[100];
public:
    MyStack() {}
    void push(int elem) {
        mus[size + 1] = elem;
        size++;
    }

    int top() {
        return mus[size];
    }

    void pop() {
        size--;
    }

    bool isEmpty() {
        return (size == -1);
    }

    int getSize() {
        return size;
    }
};

int main() {
    MyStack st;
    for (int i = 0; i < 10; i++) {
        int tmp = rand() % 20;
        cout << tmp << " ";
        st.push(tmp);
    }
    

    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << st.isEmpty() << endl;
}