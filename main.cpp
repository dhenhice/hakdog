#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main ()

{
    char choice[2] = {'y', 'n'};
    string str;
    
    cout << "We offer a wide selection of preloved books." << endl;
    cout << "Here is the list of books we sell: " << endl;
    cout << "---------------------------------------------------------------------" << endl ;
    cout << setw(5) << "Inventory:" << endl;
    cout << setw(10) << " 1. Pride and Prejudice" << setw(30) << "Jane Austen" << endl;
    cout << setw(10) << " 2. A Tale of Two Cities" << setw(33) << "Charles Dickens" << endl;
    cout << setw(10) << " 3. Around the World in 80 Days" << setw(22) << "Jules Verne"<< endl;
    cout << setw(10) << " 4. Wuthering Heights" << setw(33) << "Emily Bronte" << endl;
    cout << setw(10) << " 5. The Scarlet Letter" << setw(39) << "Nathaniel Hawthorne" << endl;
    cout << setw(8) << " 6. 1984" << setw(47) << "George Orwell" << endl;
    cout << setw(10) << " 7. The Great Gatsby" << setw(41) << "F. Scott Fitzgerald" << endl;
    cout << setw(10) << " 8. Gulliver's Travels" << setw(34) << "Jonathan Swift" << endl;
    cout << setw(10) << " 9. Les Miserables" << setw(35) << "Victor Hugo" << endl;
    cout << setw(10) << " 10.The Count of Monte Cristo" << setw(28) << "Alexandre Dumas" << endl;
    cout << setw(10) << " 11. Frankenstein" << setw(37) << "Mary Shelley" << endl;
    cout << setw(10) << " 12. The Catcher in the Rye" << setw(28) << "J.D. Salinger" << endl;
    cout << setw(10) << " 13. Jane Eyre" << setw(44) << "Charlotte Bronte" << endl;
    cout << setw(10) << " 14. Anne of Green Gables" << setw(32) << "L.M. Montgomery" << endl;
    cout << setw(10) << " 15. The Hobbit" << setw(41) << "J.R.R. Tolkien" << endl;
    cout << setw(10) << " 16. Treasure Island" << setw(44) << "Robert Louis Stevenson" << endl;
    cout << setw(10) << " 17. The Last of the Mohicans" << setw(34) << "James Fenimore Cooper" << endl;
    cout << setw(10) << " 18. The Wizard of Oz" << setw(34) << "L. Frank Baum" << endl;
    cout << setw(10) << " 19. Moby Dick" << setw(43) << "Herman Melville" << endl;
    cout << setw(10) << " 20. The Secret Garden" << setw(43) << "Frances Hodgson Burnett" << endl;
    cout << setw(10) << " 21. Uncle Tom's Cabin" << setw(41) << "Harriet Beecher Stowe" << endl;
    cout << setw(10) << " 22. Anna Karenina" << setw(35) << "Leo Tolstoy" << endl;
    cout << setw(10) << " 23. Crime and Punishment" << setw(34) << "Fyodor Dostoevsky" << endl;
    cout << setw(10) << " 24. Sherlock Holmes" << setw(40) << "Arthur Conan Doyle" << endl;
    cout << setw(10) << " 25. Little Women" << setw(42) << "Louise May Alcott" << endl;
    cout << "---------------------------------------------------------------------" << endl ;

    cout << "Would you like to purchase a book?" << endl;
    cout << " " << endl ;
    cout << " 'y' or yes, 'n' for no " ;
    cin >> choice;
    
    if (*choice == 'y')
    {
        cout << " " << endl;
        cout << "Enter book title you'd like to purchase: " ;
        
        cin.ignore();
        getline(cin, str);
        
        
        
        {
    
        if (str == "Pride and Prejudice" )
        { cout << "By Jane Austen? That would be P 150.00" << endl ;

        }
        
        else if (str == "A Tale of Two Cities")
        {
            cout << "A Dickens book never disappoints. That's P 200.00" << endl ;

        }
        
        else if (str == "Around the World in 80 Days")
        {
            cout << "Love that book! P 150.00 please" << endl ;
        }
        
        else if (str == "Wuthering Heights")
        {
            cout << "Bronte! That's P 150.00" << endl ;
        }
        
        else if (str == "The Scarlet Letter")
        {
            cout << "A must read indeed. P 200.00 please." << endl ;
        }
        
        else if (str == "1984")
        {
            cout << "That book was revolutionary! And that would be P 75.00" << endl ;
        }
        
        else if (str == "The Great Gatsby")
        {
            cout << "That was turned into a movie recently! That would be P 75.00" << endl ;
        }
        
        else if (str == "Les Miserables")
        {
            cout << "Love that book, the play even more! P 200.00 please." << endl ;
        }
        
        else if (str == "Gulliver's Travels")
        {
            cout << "By Jonathan Swift! That's only P 75.00 " << endl ;
        }
        
        else if (str == "The Count of Monte Cristo")
        {
            cout << "That novel is splendid and it's only P 100.00 " << endl ;
        }
    
        else if (str == "Frankenstein" )
        {
            cout << "Oooooh. Perfect for the season! That would be P 75.00" << endl ;
        }
    
        else if (str == "The Catcher in the Rye" )
        {
            cout << "Can never go wrong with that one! P 75.00 please" << endl ;
        }
    
        else if (str == "Jane Eyre" )
        {
            cout << "That book makes my heart flutter! That's P 200.00" << endl ;
        }
    
        else if (str == "Anne of Green Gables" )
        {
            cout << "My sister said that book is superb! P 150.00 please. " << endl;
        }
    
        else if (str == "The Hobbit" )
        {
            cout << "J.R.R. Tolkien is my favorite author! That's P 100.00" << endl ;
        }
    
        else if (str == "Treasure Island" )
        {
            cout << "Ahoy, that'll be P 200.00 , mate. " << endl ;
        }
    
        else if (str == "The Last of the Mohicans" )
        {
            cout << "Excellent choice! That's P 150.00" << endl ;
        }
    
        else if (str == "The Wizard of Oz" )
        {
            cout << "That story never gets old! P 75.00 please" << endl ;
        }
    
        else if (str == "Alice in Wonderland" )
        {
            cout << "One of my favorite books! Please give P 75.00. " << endl ;
        }
    
        else if (str == "Moby Dick" )
        {
            cout << "Such a gem of a book! P 100.00 please" << endl ;
        }
    
        else if (str == "The Secret Garden" )
        {
            cout << "Unequivocally underrated! P 150.00" << endl ;
        }
    
        else if (str == "Uncle Tom's Cabin" )
        {
            cout << "One of the books that changed the world! P 150.00 only!" << endl ;
        }
    
        else if (str == "Anna Karenina" )
        {
            cout << "A person of taste, I see. P 200.00 please" << endl ;
        }
    
        else if (str == "Crime and Punishment" )
        {
            cout << "By Fyodor Dostoevsky! That's P 200.00" << endl ;
        }
    
        else if (str == "Sherlock Holmes" )
        {
            cout << "Iconic! That's  150.00. " << endl ;
        }
    
        else if (str == "Little Women")
        {
                   cout << "You'll love this one. P 200.00 please " << endl ;
        }
        
            
        else
        {
        cout << "Oops. It's either we don't own that book or we ran out of stocks. Try another bookstore!" << endl ;
        }
        
       }
        
        cout << " " << endl;
        cout << "Would you like to purchase some more?" << endl;
        cout << " " << endl ;
        cout << " 'y' or yes, 'n' for no " ;
        cin >> choice;
        
        if (*choice == 'n')
        {
            cout << "Thank you have a nice day!" ;
        }
        
        while (*choice == 'y')
          {
              cout << "Enter book title you'd like to purchase: "  ;
                  
                  cin.ignore();
                  getline(cin, str);
                  
                  
                  
                  {
              
                  if (str == "Pride and Prejudice" )
                  { cout << "By Jane Austen? That would be P 150.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                      cout << " " << endl ;
                      cout << " 'y' or yes, 'n' for no " ;
                      cin >> choice;
                      
                      if(*choice == 'n')
                      {cout << "Thank you have a nice day!" ;
                          break; }

                  }
                  
                  else if (str == "A Tale of Two Cities")
                  {
                      cout << "A Dickens book never disappoints. That's P 200.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                      cout << " " << endl ;
                      cout << " 'y' or yes, 'n' for no " ;
                      cin >> choice;
                      
                      if(*choice == 'n')
                      {cout << "Thank you have a nice day!" ;
                          break; }
                  }
                  
                  else if (str == "Around the World in 80 Days")
                  {
                      cout << "Love that book! P 150.00 please" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "Wuthering Heights")
                  {
                      cout << "Bronte! That's P 150.00" ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "The Scarlet Letter")
                  {
                      cout << "A must read indeed. P 200.00 please." << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "1984")
                  {
                      cout << "That book was revolutionary! That'll  be P 75.00 please." << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "The Great Gatsby")
                  {
                      cout << "That was turned into a movie recently! That would be P 75.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "Les Miserables")
                  {
                      cout << "Love that book, the play even more! P 200.00 please." << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "Gulliver's Travels")
                  {
                      cout << "By Jonathan Swift! That's only P 75.00 " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                  else if (str == "The Count of Monte Cristo")
                  {
                      cout << "That novel is splendid. That would be P 100.00 " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Frankenstein" )
                  {
                      cout << "Oooooh. Perfect for the season! That would be P 75.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "The Catcher in the Rye" )
                  {
                      cout << "Can never go wrong with that one! P 75.00 please" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Jane Eyre" )
                  {
                      cout << "That book makes my heart flutter! That's P 200.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Anne of Green Gables" )
                  {
                      cout << "My sister said that book is superb! P 150.00 please. " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "The Hobbit" )
                  {
                      cout << "J.R.R. Tolkien is my favorite author! That's P 100.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Treasure Island" )
                  {
                      cout << "Ahoy, that'll be P 200.00 , mate. " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "The Last of the Mohicans" )
                  {
                      cout << "Excellent choice! That's P 150.00"<< endl  ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "The Wizard of Oz" )
                  {
                      cout << "That story never gets old! P 75.00 please" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Alice in Wonderland" )
                  {
                      cout << "One of my favorite books! Please give P 75.00. " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Moby Dick" )
                  {
                      cout << "Such a gem of a book! P 100.00 please" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "The Secret Garden" )
                  {
                      cout << "Unequivocally underrated! P 150.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Uncle Tom's Cabin" )
                  {
                      cout << "One of the books that changed the world! That would be P 150.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Anna Karenina" )
                  {
                      cout << "A person of taste, I see. P 200.00 please" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Crime and Punishment" )
                  {
                      cout << "By Fyodor Dostoevsky! That's P 200.00" << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Sherlock Holmes" )
                  {
                      cout << "Iconic! That's  150.00. " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
              
                  else if (str == "Little Women")
                  {
                             cout << "You'll love this one. P 200.00 please " << endl ;
                      cout << " " << endl ;
                      cout << "Would you like to purchase some more?" << endl;
                                           cout << " " << endl ;
                                           cout << " 'y' or yes, 'n' for no " ;
                                           cin >> choice;
                                           
                                           if(*choice == 'n')
                                           {cout << "Thank you have a nice day!" ;
                                               break; }
                  }
                  
                      
                  else
                  {
                  cout << "Oops. It's either we don't own that book or we ran out of stocks. Try another bookstore!" << endl ;
                  }
               
                        
                      
                                  
                    }
              
              
          }
        
       
        
    
    }
        
        else if (*choice == 'n')
    {
        cout << "See you next time!" << endl;
    }
        
    else
    {
        cout << "Ok scroll around first." << endl ;
    }
    
   
    
  
    
    return 0;
    
}
  
