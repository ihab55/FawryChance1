#pragma once
#include <string>
#include "clsProduct.h";
using namespace std;
class clsProdactExpier : public clsProduct
{
public:
        clsProdactExpier(string name, float price, int quantity, int YearDate,
            int MonthDate,int DayDate)
            : clsProduct(name, price, quantity){
			_year = YearDate;
			_month = MonthDate;
			_day = DayDate;
			_expirationDate = to_string(_year) + "-" + to_string(_month) + "-" + to_string(_day);
            }
        string getExpirationDateAsString(){
            return _expirationDate;
        }
        void setExpirationDate( int year,int month,int day) {
			_year = year;
			_month = month;
			_day = day;
		}
		bool isExpired(int currentYear, int currentMonth, int currentDay) {
			if (currentYear > _year) return true;
			if (currentYear == _year && currentMonth > _month) return true;
			if (currentYear == _year && currentMonth == _month && currentDay > _day) return true;
			return false;
		}
 private:
			string _expirationDate;
			int _year;
			int _month;
			int _day;
};

