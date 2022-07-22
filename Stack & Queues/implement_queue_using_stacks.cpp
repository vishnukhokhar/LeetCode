#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
public:
    stack<int> input;
    stack<int> output;
    MyQueue()
    {
    }

    void push(int x)
    {
        input.push(x);
    }

    int pop()
    {
        if (output.empty())
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
        }

        int z = output.top();
        output.pop();
        return z;
    }

    int peek()
    {
        if (output.empty())
        {
            while (input.size())
            {
                output.push(input.top());

                input.pop();
            }
        }
        return output.top();
    }

    bool empty()
    {
        if (input.empty() && output.empty())
        {
            return true;
        }

        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */