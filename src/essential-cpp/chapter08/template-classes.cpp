#include <iostream>
#include <memory>
#include <string>
#include <exception>
#include <format>

using std::cout;
using std::endl;
using std::format;
using std::string;

namespace bw
{
    class S_err : public std::exception
    {
        const char *msg;

    public:
        S_err() = delete;
        explicit S_err(const char *s) noexcept : msg(s) {}
        const char *what() const noexcept { return msg; }
    };

    template <typename T>
    class Stack
    {
        static const int default_size{10};
        static const int max_size{1000};
        int S_size{};
        int S_top{};
        std::unique_ptr<T[]> S_ptr{};

    public:
        explicit Stack(int s = default_size);
        ~Stack()
        {
            if (S_ptr)
            {
                S_ptr.release();
            }
        }
        T &push(const T &);
        T &pop();
        bool is_empty() const { return S_top < 0; }
        bool is_full() const { return S_top >= S_size - 1; }
        int top() const { return S_top; }
        int size() const { return S_size; }
    };

    template <typename T>
    Stack<T>::Stack(int s)
    {
        if (s > max_size || s < 1)
        {
            throw S_err("Invalid stack size");
        }
        else
        {
            S_size = s;
        }
        S_ptr.reset(new T[S_size]);
        S_top = -1;
    };

    template <typename T>
    T &Stack<T>::push(const T &i)
    {
        if (is_full())
        {
            throw S_err("Stack is full");
        }

        return S_ptr[++S_top] = 1;
    };

    template <typename T>
    T &Stack<T>::pop()
    {
        if (is_empty())
        {
            throw S_err("Stack is empty");
        }

        return S_ptr[S_top--];
    };
};

int main()
{
    bw::Stack<int> si{5};
    bw::Stack<string> ss{5};
    try
    {
        cout << format("si size: {}", si.size()) << endl;
        cout << format("si top: {}", si.top()) << endl;

        for (const auto i : {1, 2, 3, 4, 5})
        {
            si.push(i);
        }

        cout << format("si top after pushes: {}", si.top()) << endl;
        cout << format("si is {}full", si.is_full() ? "" : "not ") << endl;

        while (!si.is_empty())
        {
            cout << format("popped {}", si.pop()) << endl;
        }

        cout << format("ss size: {}", ss.size()) << endl;
        cout << format("ss top: {}", ss.top()) << endl;

        for (const char * s : {"one", "two", "three", "four", "five"})
        {
            ss.push(s);
        }

        cout << format("ss top after pushes: {}", ss.top()) << endl;
        cout << format("ss is {}full", ss.is_full() ? "" : "not ") << endl;

        while (!ss.is_empty())
        {
            cout << format("popped {}", ss.pop()) << endl;
        }
    }
    catch (bw::S_err &e)
    {
        cout << format("Stack error: {}", e.what()) << endl;
        return 1;
    }
    return 0;
};