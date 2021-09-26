// Jeremy Martin
// 10/24/20
// log entry functions

// File:        logentry.cpp
//
// Version:     1.0
// Date:
// Author:
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include "string.hpp"
#include "logentry.hpp"

//////////////////////////////////////////////////////////
// REQUIRES:
// ENSURES:
//
Date::Date() {
	day = String("");
	month = String("");
	year = 0;
}

Date::Date(String s) {
	day = String("");
	month = String("");
	year = 0;
	int counter = 0;
	for (int i = 0; s[i] != '\0'; ++i) {
		if (s[i] == '[')
			continue;
			
		// settig day
		else if ((s[i] != '/') && (counter == 0)) {
			day = day + s[i];
		}
		else if ((s[i] == '/') && (counter == 0)) {
			counter = 1;
		}
		
		// setting month
		else if ((s[i] != '/') && (counter == 1)) {
			month = month + s[i];
		}
		else if ((s[i] == '/') && (counter == 1)) {
			counter = 2;
		}
		// setting year
		else if (counter == 2) {
			char* p = &s[i];
			year = changeType(p);
			break;
		}
	}
}

Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(String s) {
	int counter = 0;
	for (int i = 0; s[i] != '\0'; ++i) {
		// hours
		if ((s[i] == ':') && (counter == 0)) {
			char* p = &s[i + 1];
			hour = changeType(p);
			counter = 1;
		}
		// minutes
		else if ((s[i] == ':') && (counter == 1)) {
			char* p = &s[i + 1];
			minute = changeType(p);
			counter = 2;
		}
		// seconds
		else if ((s[i] == ':') && (counter == 2)) {
			char* p = &s[i + 1];
			second = changeType(p);
			counter = 3;
		}
	}
}

LogEntry::LogEntry() {
	host = String("");
	date = Date();
	time = Time();
	request = String("");
	status = String("");
	number_of_bytes = 0;
}

LogEntry::LogEntry(String s) {
	
	std::vector<String> vec = s.split(' ');
	
	if (int(vec.size()) != 10)
		return;
	else {
		host = vec[0];
		date = Date(vec[3]);
		time = Time(vec[3] + vec[4]);
		String reqstr = vec[5];
		request = reqstr.substr(1, 10);
		status = vec[8];
		String temp = vec[9];
		char* p = &temp[0];
		number_of_bytes = changeType(p);
	}
	
}

std::ostream& operator<<(std::ostream& stream, const LogEntry& log) {
	stream << "host: " << log.host << '\n';
	stream << "date: " << log.date.getday() << log.date.getmonth() << log.date.getyear() << '\n';
	stream << "time: " << log.time.gethour() << ':' << log.time.getminute() << ':' << log.time.getsecond() << '\n';
	stream << "request: " << log.request << '\n';
	stream << "status: " << log.status << '\n';
	stream << "number of bytes: " << log.number_of_bytes << '\n';
	stream << std::endl;
	return stream;
}

//////////////////////////////////////////////////////////
// REQUIRES:
// ENSURES:
//
std::vector<LogEntry> parse(std::istream& in) {
	std::vector<LogEntry> result;
	
	String temp;
	char c = '0';
	in.get(c);
	while (!in.eof()) {
		if (c != '\n' && c != '\r'){
			temp = temp + c;
		}
		else {
			result.push_back(LogEntry(temp));
			temp = String();
		}
		in.get(c);
	}
	if(temp != "")
		result.push_back(LogEntry(temp));
	return result;
}

//////////////////////////////////////////////////////////
// REQUIRES:
// ENSURES:
//
void output_all(std::ostream& out, const std::vector<LogEntry>& log) {
	for (int i = 0; i < int(log.size()); ++i) {
		out << log[i];
	}
}

//////////////////////////////////////////////////////////
// REQUIRES:
// ENSURES:
//
void by_host(std::ostream& out, const std::vector<LogEntry>& log) {
	for (int i = 0; i < int(log.size()); ++i) {
		out << log[i].getHost() << '\n';
	}
}

//////////////////////////////////////////////////////////
// REQUIRES:
// ENSURES:
//
int byte_count(const std::vector<LogEntry>& log) {
	int totalBytes = 0;
	for (int i = 0; i < int(log.size()); ++i) {
		totalBytes = totalBytes + log[i].getBytes();
	}
	return totalBytes;
}

// converts numbers in a string to integer
int changeType(const char* c) {
	int index = 0;
	while (*c >= '0' && *c <= '9') {
		index = index * 10 + (*c - '0');
		++c;
	}
	return index;
}