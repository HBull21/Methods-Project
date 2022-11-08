#include <string>

using std::string;

#ifndef BOOK_H
#define BOOK_H


class Book
{
    private:
        string ISBN = "", Title = "", Author = "", Genre = "", Year = "";

    public:
        Book();
        Book(string ISBN, string Title, string Author, string Year, string Genre)
        {
            this->ISBN = ISBN;
            this->Title = Title;
            this->Author = Author;
            this->Year = Year;
            this->Genre = Genre;
        };

        // getters
        string getISBN() { return ISBN; };
        string getTitle() { return Title; };
        string getAuthor() { return Author; };
        string getYear() { return Year; };
        string getGenre() { return Genre; };

        // setters
        void setISBN(string ISBN) { this->ISBN = ISBN; };
        void setTitle(string Title) { this->Title = Title; };
        void setAuthor(string Author) { this->Author = Author; };
        void setYear(string Year) { this->Year = Year; };
        void setGenre(string Genre) { this->Genre = Genre; };
};

#endif // BOOK_H
