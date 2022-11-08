#include <iostream>
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book
{
    private:
        string ISBN;
        string title;
        string author;
        string genre;
        float price;

    public:

        Book()
        {
            ISBN = "isbn";
            title = "title";
            author = "author";
            genre = "genre";
            price = 0.00;
        }

        Book(int ISBN, string title, string author, string genre, float price)
        {
            this->ISBN = ISBN;
            this->title = title;
            this->author = author;
            this->genre = genre;
            this->price = price;
        }

        // setter functions
        void setISBN(string num);
        void setTitle(string data);
        void setAuthor(string name);
        void setGenre(string genre);
        void setPrice(float data);

        // getter functions
        string getISBN();
        string getTitle();
        string getAuthor();
        string getGenre();
        float getPrice();

};

#endif // BOOK_H
