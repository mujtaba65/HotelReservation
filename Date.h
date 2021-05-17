#ifndef DATE_H
#define DATE_H

/*
This is the Date class, the data members are initialized accordingly. After that it has a lessThan() member function compares this date with a given date. The print() prints details about the date. There is also an additional equals() function which handles the edge case when two dates are same.
*/

class Date
{
  public:
    Date(int=2000, int=0, int=0);
   ~Date();
    void setDate(int, int, int);
    bool lessThan(Date&);
    bool equals(Date&);
    void print();
    void add(int);

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr() const;
};

#endif
