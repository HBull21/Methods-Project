#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "book.h"
#include "user.h"

using namespace std;
using std::getline;

Book bok;
User currentUser; 
string response, username, newpass, shipAddress, email, pass, cardNum, cvv, emailpass, response4, newshipAddress;
ifstream infile;

void saveUser(User person){
  ofstream users("users.txt", ios::app);
  users << person.getEmail() << " " << person.getPass() << " " <<  person.getShippingAddress() << " " << person.getPaymentInformation() << "\n";
  users.close();
}

int main() {
  vector<Book> oneBooks;
  vector<User> oneUsers;
  
  bok.oneReadFile(oneBooks);
  currentUser.twoReadFile(oneUsers);
  //currentUser.display(oneUsers);
  cout << endl;
  //currentUser.display(oneUsers);

  //build login display here!
  while (1) {
    cout << "Welcome to the bookshop! Would you like to login or create an account?" << endl << "0. Exit " << endl << "1. Login to an existing account" << endl << "2. Create a new account" << endl;
		cin >> response;
    cin.ignore();
    cout << endl;
    
    if (response == "0") {
      cout << "Good-bye!" << endl;
      return 0;
    }
    if (response == "1") {
      cout << "Please enter your email address: (ex: johndoe@gmail.com-johnrocks1!" << endl;
      cin >> email;
      cin.ignore();
      getline(infile, email, ' ');
      cout << "Please enter your password: (no spaces)" << endl;  
      cin >> pass;
      cin.ignore();
      getline(infile, pass, ' ');
      if (!currentUser.search(email, pass)) {
        cout << "Error: Username and Password not found1" << endl << endl;
        continue;
        }
      }
     
    else if (response == "2") {
      // ofstream users("users.txt", ios::app);// Move this
      cout << "Please enter a valid email address: (ex: johndoe@gmail.com)" << endl;
      cin >> email;
      currentUser.setEmail(email);
      cout << endl << "Please create a password (no spaces!):" << endl;
      cin >> pass;
      currentUser.setPass(pass);
      //address
      cout << endl << "Enter your shipping address: (ex: 1234-DawgDrive-Starkvegas-MS-39759)" << endl;
      cin >> shipAddress;
      currentUser.setShippingAddress(shipAddress);
      //payment info
      cout << endl << "Enter your card number: (ex: 1111222233334444)" << endl;
      cin >> cardNum;
      cout << endl << "Enter the security code: (CVV)" << endl;
      cin >> cvv;
      cout << endl;
      currentUser.setPaymentInformation(cardNum, cvv);
      saveUser(currentUser);
      continue;
    }
    else {
      cout << "Unexpected input. Expected 0, 1, or 2" << endl << endl;
      return 1;
    }
    
  while (3) {
    cout << "Welcome to the bookstore! What would you like to do?";
    cout << endl << "Menu:" << endl << endl;
    cout << "0. Logout" << endl;
    cout << "1. Purchase a book" << endl;
    cout << "2. View Cart" << endl;
    cout << "3. View Order History" << endl;
    cout << "4. Check Out" << endl;
    cout << "5. Edit Account" << endl;
    cout << "6. Delete Account" << endl;
    cin >> response;
    cout << endl;
      
    if (response == "0") {
      cout << "Good-bye!";
      return 0;
    }
    else if (response == "1") {
      cout << "Welcome to the bookshop! Select which genre you would like to search!" << endl << "1. Epistolary" << endl << "2. PostApocalypticFiction" << endl << "3. Novel" << endl << "4. SouthernGothic" << endl << "5. Dystopian" << endl << "6. AmericanLiterature" << endl << "7. PsychologicalHorror" << endl;
      string response2, response3;
      cin >> response2;
        
      if (response2 == "1") {
        string search = "Epistolary";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else if (response2 == "2") {
        string search = "PostApocalypticFiction";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else if (response2 == "3") {
        string search = "Novel";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else if (response2 == "4") {
        string search = "SouthernGothic";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else if (response2 == "5") {
        string search = "Dystopian";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else if (response2 == "6") {
        string search = "AmericanLiterature";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else if (response2 == "7") {
        string search = "PsychologicalHorror";
        bok.searchGenre(search);
        cout << "Would you like to add this book to your cart? (y/n)" << endl;
        cin >> response3;
        if (response3 == "y") {
          //create user's shopping cart
          //add ISBN to shopping cart
          //return to menu - return 3
        }
        else if (response3 == "n") {
          return 1;
        }
        else {
          cout << "Not a valid response. Enter either y or n." << endl;
          continue;
        }
      }
      else {
        cout << "Not a valid input" << endl;
      }
        //purchase a book
        //go to search genre, display those books, **add to cart?
        //y - add to cart, go back to main menu
        //n - go back to search genre
    }
    else if (response == "2") {
      //view cart
      //get item(s) in user's cart
        //display the item(s)
        //press ... to return to main menu
    }
    else if (response == "3") {
      //view order history
        //get the user's order history
        //display order history
        //press ... to return to main menu
    }
    else if (response == "4") {
        //check out
        //pop up their shopping cart
        //"checking out"
        //get payment info
        //get shipping info
        //"is this correct?"
        //y - "success", clear their shopping cart, add order to order history
    }
    else if (response == "5") {
        //edit account
        //currentUser.updateInfo();
      cout << "0. Logout" << endl;
      cout << "1. Shipping Address" << endl;
      cout << "2. Payment Information" << endl;
      cin >> response4;
      ifstream filein("users.txt");
      if (response4 == "1") {
        cout << "What is your new shipping address?" << endl;
        cin >> newshipAddress;
        /*currentUser.setShippingAddress(newshipAddress);*/                     currentUser.changeShip(oneUsers);
        cout << "Shipping Address updated!" << endl << endl;
      }
      else if (response == "2") {
        cout << "Payment Info updated!";
      }
      else if (response == "0") {
        cout << "Good-bye!";
        return 0;
      }
      else {
        cout << "Invalid menu option." << endl;
      }
    }
    else if(response == "6") {
      ifstream infile;
      string line;
      size_t pos;
      string search = "x";
      infile.open("books.txt");
      while(infile.good()) {
        getline(infile,line); 
        pos=line.find(search); 
          if(pos!=string::npos) {
            cout << endl << line << endl << endl;
            break;
            }
        while (getline(infine,line)) {
          line.replace(line.find(deleteline),deleteline.length(),"");
          temp << line << endl;

        }
      cout << "Your account has been deleted" << endl;
    }
      }
    else {
      cout << "Invalid input.";
      return 1;
    }
    }
    } 
  return 1;
}   
