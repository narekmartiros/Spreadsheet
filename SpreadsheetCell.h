#pragma once
#include <string>
#include <string_view>

class SpreadsheetCell {
public:
    SpreadsheetCell();
    SpreadsheetCell(double inValue);
    SpreadsheetCell(std::string& inValue);
    SpreadsheetCell(const SpreadsheetCell& src);
    SpreadsheetCell& operator=(const SpreadsheetCell& rhs);
    void setValue(double inValue);
    double getValue() const;

    void setString(std::string& inString);
    std::string getString() const;

private:
    std::string doubleToString(double inValue)const;
    double stringToDouble(std::string& inString)const;
    double mValue;
};