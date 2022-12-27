#pragma once

template <typename T>
class Queue
{
    T* mem;
    size_t sz;
    int begin; 
    int end;

public:
    static const size_t MAX_SIZE = 10000;
    Queue() {
        mem = new T[MAX_SIZE];
        sz = 0;
        begin = 0;
        end = -1;
    }

    size_t size() {
        return sz;
    }
    bool empty() {
        return sz == 0;
    }
    bool full() {
        return sz == MAX_SIZE;
    }

    void push(const T& x) {
        if (full()) {
            throw std::length_error("Queue is full");
        }
        end = (end + 1) % MAX_SIZE;
        mem[end] = x;
        sz++;
    }
    T top() {
        if (empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return mem[begin];
    }
    void pop() {
        if (empty()) {
            throw std::out_of_range("Queue is empty");
        }
        begin++;
        sz--;
    }


};
