#include "dma.h"
#include<cstring>

baseDMA::baseDMA(const char* l, int r)
{
	label = new char[std::strlen(l) + 1];
	strcpy_s(label, std::strlen(l) + 1, l);
	rating = r;
}

baseDMA::baseDMA(const baseDMA& rs)
{
	label = new char[std::strlen(rs.label) + 1];
	strcpy_s(label, std::strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	strcpy_s(label, std::strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

//lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r):baseDMA(l,r)
{
	strncpy_s(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs) : baseDMA(rs)
{
	strncpy_s(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
	os << (const baseDMA&)ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}

//hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r) :baseDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, std::strlen(s) + 1, s);
}

hasDMA::hasDMA(const char* s, const baseDMA& rs) :baseDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	strcpy_s(style, std::strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA& hs): baseDMA(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	strcpy_s(style, std::strlen(hs.style) + 1, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
		return *this;
	baseDMA::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	strcpy_s(style, std::strlen(hs.style) + 1, hs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os << (const baseDMA&)hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}