#include "Book.h"

Book::Book()
{

}

// setter functions
void Book::setISBN(string num)
{
    this->ISBN = num;
}

void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(string num)
{
    this->author = author;
}

void Book::setGenre(string num)
{
    this->genre = genre;
}

void Book::setPrice(float price)
{
    this->price = price;
}


//getter functions
string Book::getISBN()
{
    return this->ISBN;
}

string Book::getTitle()
{
    return this->title;
}

string Book::getISBN()
{
    return this->author;
}

string Book::getISBN()
{
    return this->genre;
}

float Book::getPrice()
{
    return this->price;
}
