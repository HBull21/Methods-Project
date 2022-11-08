#include <string>

using std::string;

#ifndef BOOK_H
#define BOOK_H


class Book
{
    private:
        string ISBN = "", Title = "", Author = "", Genre = "", Year = "", Price = "";

    public:
        Book();
        Book(string ISBN, string Title, string Author, string Year, string Genre, float Price)
        {
            this->ISBN = ISBN;
            this->Title = Title;
            this->Author = Author;
            this->Year = Year;
            this->Genre = Genre;
            this->Price = Price;
        };

        // getters
        string getISBN() { return ISBN; };
        string getTitle() { return Title; };
        string getAuthor() { return Author; };
        string getYear() { return Year; };
        string getGenre() { return Genre; };
        float getPrice() { return Price; };

        // setters
        void setISBN(string ISBN) { this->ISBN = ISBN; };
        void setTitle(string Title) { this->Title = Title; };
        void setAuthor(string Author) { this->Author = Author; };
        void setYear(string Year) { this->Year = Year; };
        void setGenre(string Genre) { this->Genre = Genre; };
        void setPrice(float Price) { this->Price = Price; };
};

#endif // BOOK_H
