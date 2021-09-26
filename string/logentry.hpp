
// Jeremy Martin
// 10/24/2020
// logentry header file

#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp
//
// Version:     1.0
// Date:
// Author:
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include "string.hpp"

////////////////////////////////////////////////////////////
class Date {
public:
	Date();
	Date(String);
	String getday() const { return day; }
	String getmonth() const { return month; }
	int getyear() const { return year; }
private:
	String  day, month;
	int     year;
};

////////////////////////////////////////////////////////////
class Time {
public:
	Time();
	Time(String);
	int gethour() const { return hour; }
	int getminute() const { return minute; }
	int getsecond() const { return second; }
private:
	int     hour, minute, second;
};

////////////////////////////////////////////////////////////
class LogEntry {
public:
	LogEntry();
	LogEntry(String);
	friend  std::ostream& operator<<(std::ostream&, const LogEntry&);
	String getHost() const { return host; }
	int getBytes() const { return number_of_bytes; }

private:
	String  host;
	Date    date;
	Time    time;
	String  request;
	String  status;
	int     number_of_bytes;
};

////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>parse(std::istream&);
void output_all(std::ostream&, const std::vector<LogEntry> &);
void by_host(std::ostream&, const std::vector<LogEntry> &);
int byte_count(const std::vector<LogEntry>&);
int changeType(const char*);

#endif
