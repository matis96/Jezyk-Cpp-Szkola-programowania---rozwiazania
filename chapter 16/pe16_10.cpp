//zad10.cpp
// vect3.cpp -- użycie funkcji biblioteki STL
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool worseThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool costMore(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool FillReview(std::shared_ptr<Review> & rr);
void ShowReview(const std::shared_ptr<Review> & rr);
int main()
{system("chcp 65001  > nul");
    using namespace std;

    //vector<Review> books;
    vector<shared_ptr<Review> > books;
    shared_ptr<Review> temp;
    while (FillReview(temp))
        books.push_back(temp);

    vector<shared_ptr<Review> > byName(books);
    vector<shared_ptr<Review> > byRating(books);
    vector<shared_ptr<Review> > byPrice(books);
    sort(byName.begin(), byName.end());
    sort(byRating.begin(), byRating.end(), worseThan);
    sort(byPrice.begin(), byPrice.end(), costMore);

    if  (books.size() == 0)
    {
        cout<<"Koniec!";
        return 0;
    }
    string test = "abcdefk";
    char ch;
    //menu
    cout<<"Podaj literke, aby wybrac sposob sortowania:\n";
    cout<<"a) po kolejnosci wprowadzania\n";
    cout<<"b) w kolejnosci alfabetycznej\n";
    cout<<"c) wedlug ocen rosnaco\n";
    cout<<"d) wedlug ocen malejaco\n";
    cout<<"e) wedlug cen rosnaco\n";
    cout<<"f) wedlug cen malejaco\n";
    cout<<"k) koniec\n";
    while (cin>>ch)
    {
        while (cin.get() != '\n')
            continue;
        if (test.find(ch) == string::npos)
        {
            cout<<"Sprobuj jeszcze raz\n";
                continue;
        }
        switch (ch)
        {
            case 'a': for_each(books.begin(), books.end(), ShowReview);
                      break;
            case 'b': for_each(byName.begin(), byName.end(), ShowReview);
                      break;
            case 'c': for_each(byRating.begin(), byRating.end(), ShowReview);
                      break;
            case 'd': for_each(byRating.rbegin(), byRating.rend(), ShowReview);
                      break;
            case 'e': for_each(byPrice.begin(), byPrice.end(), ShowReview);
                      break;
            case 'f': for_each(byPrice.rbegin(), byPrice.rend(), ShowReview);
                      break;
            case 'k': goto exit_loop;
        }
        cout<<"Podaj literke, aby wybrac sposob sortowania:\n";

    }
    exit_loop: ;

    cout << "Koniec.\n";
    return 0;
}

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worseThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}
bool costMore(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}

bool FillReview(std::shared_ptr<Review> & rr)
{
    rr = (std::shared_ptr<Review>) new Review;
    std::cout << "Wpisz tytuł książki (koniec, aby zakończyć): ";
    std::getline(std::cin, rr->title);
    if (rr->title == "koniec")
        return false;
    std::cout << "Wpisz ocenę: ";
    std::cin >> rr->rating;
    if (!std::cin)
        return false;
    // pozbycie się reszty danych wejściowych
    while (std::cin.get() != '\n')
        continue;
        std::cout << "Wpisz cenę: ";
    std::cin >> rr->price;
    if (!std::cin)
        return false;
    // pozbycie się reszty danych wejściowych
    while (std::cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(const std::shared_ptr<Review> & rr)
{
    std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}

