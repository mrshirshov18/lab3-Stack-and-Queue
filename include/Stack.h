#pragma once
#include <vector>
using namespace std;

template <typename T>
class Stack
{
    vector<T> mem;
    size_t sz; 
public:
    Stack() {
        sz = 0;
    }
    Stack(size_t size) : Stack() {
        mem.reserve(size);
    }
    Stack(size_t size, const T* arr) : Stack(size) {
        for (int i = 0; i < size; i++)
            mem.push_back(arr[i]);
        sz = size;
    }
    Stack(const Stack& st) : Stack(st.size(), &st.mem[0]) {
    }

    size_t size() const noexcept {
        return sz;
    }
    bool empty() {
        if (sz == 0) {
            return 1;
        }
        return 0;
    }
    void push(const T& x) {
        mem.push_back(x);
        sz++;
    }
    T top() {
        if (sz == 0) {
            throw out_of_range("STACK IS EMPTY");
        }
        return mem[sz - 1];
    }
    void pop() {
        if (empty() == 1) {
            throw out_of_range("STACK  EMPTY");
        }
        mem.pop_back();
        sz--;
    }
    bool operator==(const Stack& st) {
        if (this == &st)
            return true;
        return st.mem == mem;
    }
};