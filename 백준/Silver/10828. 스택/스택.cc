#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int data[10000];
    int topIndex;
    
public:
    Stack() : topIndex(-1) {}
    
    void push(int x) {
        data[++topIndex] = x;
    }
    
    int pop() {
        if (topIndex == -1) return -1;
        return data[topIndex--];
    }
    
    int size() {
        return topIndex + 1;
    }
    
    int empty() {
        return topIndex == -1 ? 1 : 0;
    }
    
    int top() {
        if (topIndex == -1) return -1;
        return data[topIndex];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    Stack stack;
    
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        
        if (command == "push") {
            int x;
            cin >> x;
            stack.push(x);
        }
        else if (command == "pop") {
            cout << stack.pop() << '\n';
        }
        else if (command == "size") {
            cout << stack.size() << '\n';
        }
        else if (command == "empty") {
            cout << stack.empty() << '\n';
        }
        else if (command == "top") {
            cout << stack.top() << '\n';
        }
    }
    
    return 0;
}