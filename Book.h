/***********************************************************************
// OOP244 Workshop 10 p1: Book module header file
//
// File: Book.h
// Version 1.0
// Date: Oct 4, 2023
// Author: Jeevan Pant
// Description:
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
// Module supplied
/*/////////////////////////////////////////////////////////////////////////
						  Workshop - 10
Full Name  : jagjit kaur
Student ID#: 156806226
Email      : jkaur682@myseneca.ca
Section    : NII
Date       : 10 april2024

Authenticity Declaration:

I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/

#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include "Student.h"

namespace seneca {
	class Student;
	class Book {
		char m_title[256];
		int m_numPages;
		double m_price;
		char m_progs[5][32];
		int m_numProgs;
	public:
		Book();
		Book(const char* title, int pages, double price, const char* disciplines, int numDisciplines);
		const char* Discipline(int n) const;
		int NumDsicplines() const;
		bool operator==(int) const;
		bool operator==(double) const;
		bool operator==(const Student& stu) const;
		std::ostream& display(std::ostream&) const;
	};

	std::ostream& operator<<(std::ostream&, const Book&);




}

#endif
