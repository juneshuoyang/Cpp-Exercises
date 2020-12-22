//
//  ClassDate.cpp
//  
//


#include <iostream>
#include <string>

enum class Month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

class Date {
    
    int dd;
    Month mm;
    int yy;
    
    public:
    
    Date(int d, Month m, int y) : dd(d), mm{m}, yy{y} {
        std::cout << "custom ctor" << std::endl;
    }
    
//    Month NextMonth() {
//        int m{int(mm)};
//        ++m;
//        mm = Month(m);
//        return mm;
//    }
    
    int day() const {return dd;}
    Month month() const {return mm;}
    int year() const {return yy;}
    
    void Tomorrow();
    
    void add_days(const unsigned int n) {
        for (auto i = 0u; i < n; ++i) {
            Tomorrow();
        }
    }
    
    void print() {
        std::cout << "The expected date is " << dd << "/" << int(mm) << "/" << yy << std::endl;
    }
};

bool operator==(const Date& lhs, const Date& rhs)
{
    return lhs.day() == rhs.day() && lhs.month() == rhs.month() && lhs.year() == rhs.year();
}

bool operator!=(const Date& lhs, const Date& rhs)
{
    return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& os, const Date& d)
{
    std::string mst;
    switch (d.month()) {
        case Month::Jan:
            mst = "Jan";
            break;
        case Month::Feb:
            mst = "Feb";
            break;
        case Month::Mar:
            mst = "Mar";
            break;
        case Month::Apr:
            mst = "Apr";
            break;
        case Month::May:
            mst = "May";
            break;
        case Month::Jun:
            mst = "Jun";
            break;
        case Month::Jul:
            mst = "Jul";
            break;
        case Month::Aug:
            mst = "Aug";
            break;
        case Month::Sep:
            mst = "Sep";
            break;
        case Month::Oct:
            mst = "Oct";
            break;
        case Month::Nov:
            mst = "Nov";
            break;
        case Month::Dec:
            mst = "Dec";
            break;
    }
    os << d.day() << " " << mst << " " << d.year();
    return os;
}


int main () {
    
    Date ladata{26, Month::Oct, 2020};
    const unsigned int ad = 365;
    
    std::cout << "The current date is " << ladata << "." << std::endl;
    ladata.add_days(365);
    std::cout << "After " << ad << " days, it will be " << ladata << "." << std::endl;
    
    Date ladata0{26, Month::Oct, 2020};
    Date ladata1{26, Month::Oct, 2020};
    Date ladata2{26, Month::Oct, 2021};
    
    if (ladata0 == ladata1) {
        std::cout << ladata0 << std::endl << ladata1 << std::endl;
        std::cout << "Same!" << std::endl;
    }
    else {
        std::cout << ladata0 << std::endl << ladata1 << std::endl;
        std::cout << "Different!" << std::endl;
    }
    
    if (ladata0 != ladata2) {
        std::cout << ladata0 << std::endl << ladata2 << std::endl;
        std::cout << "Different!" << std::endl;
    }
    else {
        std::cout << ladata0 << std::endl << ladata2 << std::endl;
        std::cout << "Same!" << std::endl;
    }
    
    //M.NextMonth();
    
    return 0;
}


void Date::Tomorrow() {
    
    switch (mm) {
            
        case Month::Jan:
        case Month::Mar:
        case Month::May:
        case Month::Jul:
        case Month::Aug:
        case Month::Oct:
            {
                if (dd == 31) {
                    int m{int(mm)};
                    ++m;
                    mm = Month(m);
                    dd = 1;
                }
                else {
                    ++dd;
                }
                break;
            }
            
        case Month::Apr:
        case Month::Jun:
        case Month::Sep:
        case Month::Nov:
            {
                if (dd == 30) {
                    int m{int(mm)};
                    ++m;
                    mm = Month(m);
                    dd = 1;
                }
                else {
                    ++dd;
                }
                break;
            }
            
        case Month::Feb:
            {
                if (dd == 28) {
                    int m{int(mm)};
                    ++m;
                    mm = Month(m);
                    dd = 1;
                }
                else {
                    ++dd;
                }
                break;
            }
            
        case Month::Dec:
            {
                if (dd == 31) {
                    dd = 1;
                    mm = Month::Jan;
                    ++yy;
                }
                else {
                    ++dd;
                }
                break;
            }
    }
}
