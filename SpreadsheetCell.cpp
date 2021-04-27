#include "SpreadsheetCell.h"
using namespace std;

SpreadsheetCell::SpreadsheetCell() :mValue{ 0.0 } {};
SpreadsheetCell::SpreadsheetCell(double inValue) {
    setValue(inValue);
}
SpreadsheetCell::SpreadsheetCell(string& inValue) {
    setString(inValue);
}

SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell& src) :mValue(src.mValue) {};

SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell& rhs) {
    if (this == &rhs) {
        return *this;
    }
    mValue = rhs.mValue;
    return *this;
}

void SpreadsheetCell::setValue(double inValue) {
    mValue = inValue;
}


double SpreadsheetCell::getValue()const {
    return mValue;

}

void SpreadsheetCell::setString(string& inString) {
    mValue = stringToDouble(inString);

}

string SpreadsheetCell::getString()const {
    return doubleToString(mValue);
}

string SpreadsheetCell::doubleToString(double inValue)const {
    return to_string(inValue);
}

double SpreadsheetCell::stringToDouble(string& inString)const {
    return strtod(inString.data(), nullptr);
}