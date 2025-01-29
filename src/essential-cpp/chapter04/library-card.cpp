#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::endl;

struct Card {
    const char* title {};
    const char* author {};
    const char* publisher {};
    const char* subject {};
    const char* isbn {};
    short int yearPublished {};
    short int yearAcquired {};
    short int quantityInStock {};
};

int main()
{
    Card lc {
        "The C++ Programming Language",
        "Bjarne Stroustrup",
        "Person Education, Inc.",
        "Computer Programming Language",
        "978-0-321-56384-2",
        2013,
        2024,
        1
    };

    cout << format("Title: {}", lc.title) << endl;
    cout << format("Author: {}", lc.author) << endl;
    cout << format("Publisher: {}", lc.publisher) << endl;
    cout << format("Subject: {}", lc.subject) << endl;
    cout << format("ISBN: {}", lc.isbn) << endl;
    cout << format("Year Published: {}", lc.yearPublished) << endl;
    cout << format("Year Acquired: {}", lc.yearAcquired) << endl;
    cout << format("Quantity In Stock: {}", lc.quantityInStock) << endl;
    return 0;
}