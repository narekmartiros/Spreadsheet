#pragma once

#include "SpreadsheetCell.h"

class Spreadsheet {
public:
	Spreadsheet(size_t width, size_t height);
	~Spreadsheet();
	Spreadsheet(const Spreadsheet& src);
	Spreadsheet& operator=(const Spreadsheet& rhs);
	Spreadsheet(Spreadsheet&& src);
	Spreadsheet& operator=(Spreadsheet&& rhs);
	void swap(Spreadsheet& other) noexcept;
	void setCellAt(size_t x, size_t y, const SpreadsheetCell& cell);
	SpreadsheetCell& getCellAt(size_t x, size_t y);
	void verifyCoordinate(size_t x, size_t y) const;

private:
	
	size_t m_width{ 0 };
	size_t m_height{ 0 };
	SpreadsheetCell** m_cells{ nullptr };
};