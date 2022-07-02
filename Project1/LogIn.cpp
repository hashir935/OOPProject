#include "LogIn.h"
#include <string>
#include <fstream>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include<cstddef>
#pragma warning(disable : 4996)

void SignUp::setusername(std::string u) {
	username = u;
}
void SignUp::setpassword(std::string p) {
	password = p;
}
std::string SignUp::getusername() {
	return username;
}
bool SignUp::comparepass(std::string p, std::string cp) {
	int x = p.compare(cp);
	if (x != 0) {
		return false;
	}
	else
		return true;
}
int SignUp::userexists()
{
	std::ifstream ptr("usernames.txt");
	std::string fileline;
	std::string name;
	std::size_t sep_pos;
	while (std::getline(ptr, fileline))
	{
		name = "";
		sep_pos = fileline.find(',');
		name = fileline.substr(1, sep_pos - 1);
		if (!name.compare(username))
		{
			ptr.close();
			return 1;
		}
	}
	return 0;
}
void SignUp::NewUser()
{
	std::ofstream ptr;
	ptr.open("usernames.txt", std::ios_base::app);
	ptr << "!" + username + "," + password;
	ptr << '\n';
	ptr.close();
}

void Login::setUsername(std::string u) {
	username = u;
}
void Login::setPassword(std::string p) {
	password = p;
}
bool Login::userexists() {
	std::ifstream ptr("usernames.txt");
	std::string fileline;
	std::string name;
	std::size_t sep_pos;
	while (std::getline(ptr, fileline))
	{
		name = "";
		sep_pos = fileline.find(',');
		name = fileline.substr(1, sep_pos - 1);
		if (!name.compare(username))
		{
			ptr.close();
			return true;
		}
	}
	return false;
}
bool Login::passwordmatch(std::string p) {
	std::ifstream ptr("usernames.txt");
	std::fstream ptr1, ptr2;
	std::string fileline;
	std::string uname, pass, newline;
	std::size_t sep_pos;
	std::size_t end_pos;
	bool retval;
	while (std::getline(ptr, fileline))
	{
		pass = "";
		sep_pos = fileline.find(',');
		end_pos = fileline.find('\n');
		pass = fileline.substr(sep_pos + 1, end_pos - sep_pos);
		if (!pass.compare(p))
		{
			password = p;
			newline = "@" + username + "," + password;
			ptr.close();
			retval = true;
		}
		else
			retval = false;
	}
	if (retval == true) {
		ptr1.open("usernames.txt", std::ios::in);
		ptr2.open("usernames1.txt", std::ios::out);
		while (std::getline(ptr1, fileline))
		{
			sep_pos = fileline.find(',');
			uname = fileline.substr(1, sep_pos - 1);
			if (!uname.compare(username)) {
				ptr2 << newline << std::endl;
			}
			else {
				ptr2 << fileline << std::endl;
			}
		}
		ptr1.close();
		ptr2.close();
		remove("usernames.txt");
		rename("usernames1.txt", "usernames.txt");
	}
	return retval;
}
void Login::logout() {
	std::fstream ptr1, ptr2;
	std::string uname, pass, fileline, newline, str;
	int seppos, endpos;
	ptr1.open("usernames.txt", std::ios::in);
	ptr2.open("usernames1.txt", std::ios::out);
	while (std::getline(ptr1, fileline)) {
		str = fileline.substr(0, 1);
		if (!str.compare("!")) {
			ptr2 << fileline << std::endl;
		}
		else if (!str.compare("@")) {
			seppos = fileline.find(',');
			endpos = fileline.find('\n');
			uname = fileline.substr(1, seppos - 1);
			pass = fileline.substr(seppos + 1, endpos - seppos);
			newline = "!" + uname + "," + pass;
			ptr2 << newline << std::endl;
		}
	}
	ptr1.close();
	ptr2.close();
	remove("usernames.txt");
	rename("usernames1.txt", "usernames.txt");
}
std::string Login::trueUsername() {
	std::fstream ptr;
	std::string fileline, str, uname;
	int seppos;
	ptr.open("usernames.txt", std::ios::in);
	while (std::getline(ptr, fileline)) {
		str = fileline.substr(0, 1);
		if (!str.compare("@")) {
			seppos = fileline.find(',');
			uname = fileline.substr(1, seppos - 1);
		}
	}
	return uname;
}
void routine::modifyRoutine(std::string s1, std::string s2, std::string newrout) {
	std::fstream ptr;
	ptr.open("Routines.txt", std::ios::in);
	std::string fileline, substring1, substring2, substring3, newline, day, uday, rout;
	int sep_pos, end_pos, lineEnd, userday, userst, userend;
	int startpos, endpos, x, y = 0, a, b = 0;
	char c;
	bool flag = false, flag2 = false;
	uday = DetermineDay();

	ptr >> std::noskipws;
	while (ptr >> c) { rout += c; }	//storing file in string details
	ptr.close();	//closing the file
	startpos = rout.find(username);	//setting start position with respect to workout selected
	endpos = rout.find_first_of('~', startpos);	//setting end position
	rout = rout.substr(startpos, endpos - startpos);
	x = rout.find(uday);
	y = rout.find_first_of('\n', x);
	day = rout.substr(x, y - x);
	newline = newrout;
	sep_pos = day.find(s1);
	end_pos = day.find(s2);
	lineEnd = day.find('\n');
	if (stoi(s1, nullptr, 10) > 9) {
		substring1 = day.substr(0, sep_pos + 2);
		substring2 = day.substr(sep_pos + 2, end_pos - sep_pos - 1);
		substring3 = day.substr(end_pos, lineEnd - end_pos);
	}
	else {
		substring1 = day.substr(0, sep_pos + 1);
		substring2 = day.substr(sep_pos + 1, end_pos - sep_pos - 1);
		substring3 = day.substr(end_pos, lineEnd - end_pos);
	}
	substring2 = newline;
	newline = substring1 + substring2 + " " + substring3;

	std::fstream ptr2, ptr3;
	ptr3.open("Routines.txt", std::ios::in);
	ptr2.open("Routines2.txt", std::ios::out);
	while (std::getline(ptr3, fileline)) {
		if (!fileline.find(username)) {
			flag2 = true;
		}
		if (flag2 == true)
		{
			//std::getline(ptr3, fileline);
			day = fileline.substr(0, 3);
			if (flag == false) {
				b = fileline.find('~');
			}
			else if (flag == true)
			{
				b = 1;
			}
			if (!day.compare(uday) && b < 0) {
				ptr2 << newline << std::endl;
				flag = true;
				flag2 = false;
			}
			else {
				ptr2 << fileline << std::endl;
			}
		}
		else {
			ptr2 << fileline << std::endl;
		}
	}
	ptr2.close();
	ptr3.close();
	remove("Routines.txt");
	rename("Routines2.txt", "Routines.txt");
}
std::string routine::DetermineDay() {
	std::string date, day;
	struct tm* newtime;
	time_t ltime;
	time(&ltime);
	newtime = localtime(&ltime);
	date = asctime(newtime);
	day = date.substr(0, 3);
	return day;
}
void routine::NewUserRoutine(int x) {
	std::string data;
	data = getNewRoutine(x);
	std::fstream ptr;
	ptr.open("Routines.txt", std::ios::app);
	ptr << data;
	ptr.close();
}
std::string routine::getNewRoutine(int x) {
	std::string data;
	if (x == 1) {
		data = username + "\nMon: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Tue: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Wed: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Thu: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Fri: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Sat : 1 2 3Breakfast 4Watch TV 5 6 7 8Have Lunch 9 10Play outside 11Have Dinner 12Sleep 13 14 15\n" +
			"Sun : 1 2 3Breakfast 4Watch TV 5 6 7 8Have Lunch 9 10Play outside 11Have Dinner 12Sleep 13 14 15 ~\n";
	}
	else if (x == 2) {
		data = username + "\nMon: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7SIxth Class 8Lab Work 9Internship work 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Tue: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Wed: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Thu: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Fri: 1Breakfast, get ready for school. 2First Class 3Second Class 4Third Class 5Lunch Break 6Fifth Class 7Physical Education 8Home Time, Have Lunch 9Take a Nap 10Play Outside 11Homework 12 13Sleep 14 15\n" +
			"Sat : 1 2 3Breakfast 4Watch TV 5 6 7 8Have Lunch 9 10Play outside 11Have Dinner 12Sleep 13 14 15\n" +
			"Sun : 1 2 3Breakfast 4Watch TV 5 6 7 8Have Lunch 9 10Play outside 11Have Dinner 12Sleep 13 14 15 ~\n";
	}
	else if (x == 3) {
		data = username + "\nMon: 1Shower and breakfast 2Enroute to office 3Start work 4 5Lunch break 6Back to work 7 8Back home 9Dinner 10Gym 11Read 12Sleep 13 14 15\n" +
			"Tue: 1Shower and breakfast 2Enroute to office 3Start work 4 5Lunch break 6Back to work 7 8Back home 9Dinner 10Gym 11Read 12Sleep 13 14 15\n" +
			"Wed: 1Shower and breakfast 2Enroute to office 3Start work 4 5Lunch break 6Back to work 7 8Back home 9Dinner 10Gym 11Visit parents 12 13 14Sleep 15\n" +
			"Thu: 1Shower and breakfast 2Enroute to office 3Start work 4 5Lunch break 6Back to work 7 8Back home 9Dinner 10Gym 11 12sleep 13 14 15\n" +
			"Fri: 1Shower and breakfast 2Enroute to office 3Start work 4 5Lunch break 6Back to work 7 8Back home 9Dinner 10Gym 11 12Out with friends 13 14Sleep 15\n" +
			"Sat: 1 2Shower 3Breakfast 4 5Grocerry shopping 6Lunch 7Check mail 8Watch a movie 9 10Dinner 11Visit family 12 13Sleep 14 15\n" +
			"Sun: 1 2 3Shower 4Brunch 5Walk in park 6Volunteer work 7Coffee break 8Laundry 9House clean up 10Dinner 11 12Sleep 13 14 15 ~\n";
	}
	else if (x == 4) {
		data = username + "\nMon: 1Breakfast and lunch prep 2Breakfast 3Clean up kitchen 4Shower 5Check mail 6Chores 5Pick up kids from school 6Have lunch 7Change and shower kids 7Help out kids in schoolwork 8Kids nap 9Relax 10Dinner prep 11Dinner with family 12Put kids to sleep 13 14Sleep 15\n" +
			"Tue: 1Breakfast/lunch prep 2Breakfast 3Kitchen clean up 4Shower 5Spa appointment 6Pick up kids 7Check mail 8Lunch 9Crafts with kids 10 11Dinner prep 12Dinner with family 13Put kids to sleep 14Read, sleep 15\n" +
			"Wed: 1Breakfast and lunch prep 2Breakfast 3Clean up kitchen 4Shower 5Gym 6Chores, Pick up kids from school 7Have lunch 8Change and shower kids 9Help out kids in schoolwork 10Kids nap 11 12Dine out with family 13Put kids to sleep 14Read, Sleep 15\n" +
			"Thu: 1Breakfast and lunch prep 2Breakfast 3Clean up kitchen 4Shower, Chores 5Pick up kids from school 6Have lunch with grandparents 7Change and shower kids 8Help out kids in schoolwork 9Kids nap 10Read 11Dinner prep 12Dinner with family 13Put kids to sleep 14Sleep 15\n" +
			"Fri: 1Breakfast and lunch prep 2Breakfast 3Clean up kitchen 4Shower 5Check mail, Pick up kids from school 6Have lunch 7Change and shower kids 8Kids nap 9Relax 10BBQ prep 11Dinner with friends 12Put kids to sleep 13 14Sleep 15\n" +
			"Sat: 1 2Breakfast prep with kids 3Shower 4Go to park 5Grocerry 6House clean up 7 8Tea 9Check mail 10Dinner prep 11Dinner 12 13Sleep 14 15\n" +
			"Sun: 1 2shower 3Brunch 4Sight seeing with kids 5Meal prep for next week 6Gardening 7Visit a friend 8 9Dinner prep 10Dinner 11Put kids to sleep 12Sleep 13 14 15 ~\n";
	}
	else if (x == 5) {
		data = username + "\nMon: 1Shower 2Set weekly goals 3Breakfast 4Off to work 5Superwise marketing and promotions, check mail 6Coffee break 7Meet up with clients 8Sign documents 9Work 10 11Back home 12Dinner 13Sleep 14 15\n" +
			"Tue: 1Gym 2Shower 3Breakfast 4Recruiting 5Visit communications department 6Check mail 7Leef through documnets 8Manage taxes 9Work 10Dine out 11Back home 12Read 13 14Sleep 15\n" +
			"Wed: 1Meditate 2Shower 3Breakfast 4Visit parents 5Visit HR 6Meeting with investors 7Attend seminar 8Check CVs 9Work 10Document signing 11Dinner 12Relax 13Sleep 13 14 15\n" +
			"Thu: 1Work out 2Shower 3Breakfast 4Follow up on weekly tasks 5Meeting with investor 6Visit liaison office 7Meeting with HR 8Document signing 9Work 10 11Dinner 12 13Sleep 14 15\n" +
			"Fri: 1Shower 2Breakfast 3Visit investors 4Meeting with finance department 5Lunch 6Coffee with tax officer 7Work 8Document signing 9Respond to mail 10Dinner 11Work out 12Sleep 13 14 15\n" +
			"Sat: 1 2Shower 3Walk 4Breakfast 5 6Grocerries 7Lunch 8Visit friend 9Coffee 10Visit parents 11Dinner 12Sleep 13 14 15\n" +
			"Sun: 1 2Shower 3Work out 4 5Brunch 6Movie 7Check mail 8Work 9Snack 10Dinner prep 11Dinner 12Sleep 13 14 15 ~\n";
	}
	return data;
}
void routine::modifyUserRoutine(int x) {
	std::string data, fileline;
	data = getNewRoutine(x);
	std::fstream ptr1, ptr2;
	int startpos;
	ptr1.open("Routines.txt", std::ios::in);
	ptr2.open("Routines1.txt", std::ios::out);
	while (std::getline(ptr1, fileline)) {
		if (fileline.compare(username)) {
			ptr2 << fileline << std::endl;
		}
		else if (!fileline.compare(username)) {
			for (int i = 0; i < 7; i++) {
				std::getline(ptr1, fileline);
			}
			ptr2 << data << std::endl;
		}
	}
	ptr1.close();
	ptr2.close();
	remove("Routines.txt");
	rename("Routines1.txt", "Routines.txt");
}
std::string routine::getRoutine(std::string s1, std::string s2) {
	std::fstream ptr;
	ptr.open("Routines.txt", std::ios::in);
	std::string fileline, substring, day, uday, rout;
	int sep_pos, end_pos;
	int startpos, endpos, x, y = 0;
	char c;
	bool flag = false, flag2 = false;
	uday = DetermineDay();
	ptr >> std::noskipws;
	while (ptr >> c) { rout += c; }	//storing file in string details
	ptr.close();	//closing the file
	startpos = rout.find(username);	//setting start position with respect to username
	endpos = rout.find_first_of('~', startpos);	//setting end position
	rout = rout.substr(startpos, endpos - startpos);
	std::cout << rout << std::endl;
	x = rout.find(uday);
	y = rout.find_first_of('\n', x);
	day = rout.substr(x, y - x);
	sep_pos = day.find(s1);
	end_pos = day.find(s2);
	if (stoi(s1, nullptr, 10) > 9) {
		substring = day.substr(sep_pos + 2, end_pos - sep_pos - 2);
	}
	else {
		substring = day.substr(sep_pos + 1, end_pos - sep_pos - 1);
	}
	return substring;
}
void qoutes::readQoute() {
	std::string fileline, qstr, str2;
	std::fstream qts;
	int qnum, start_pos, end_pos;
	qts.open("Qoutes.txt", std::ios::in);
	while (std::getline(qts, fileline)) {
		srand(time(NULL));
		qnum = rand() % 107 + 1;
		qstr = std::to_string(qnum);
		if (qnum < 10)
			str2 = fileline.substr(0, 1);
		else if (qnum >= 10 && qnum < 100)
			str2 = fileline.substr(0, 2);
		else
			fileline.substr(0, 3);
		if (!qstr.compare(str2)) {
			end_pos = fileline.find('\n');
			if (qnum < 10)
				Qoute = fileline.substr(2, end_pos - 2);
			else if (qnum >= 10 && qnum < 100)
				Qoute = fileline.substr(3, end_pos - 3);
			else
				Qoute = fileline.substr(4, end_pos - 4);
			break;
		}
	}

}
std::string qoutes::getQoute() {
	return Qoute;
}



//umer abids code

Register::Register(std::string name)
{
	Username = name;
}
void Register::AddUserData(std::string temp, std::string diet, std::string workout)
{
	std::string str;
	std::fstream ptr;
	ptr.open("Userdata.txt", std::ios::app);
	str = "\n" + Username + "," + temp + "," + diet + "," + workout + ",0,0";
	ptr << str;
	ptr.close();
}
//user class
User::User()
{
	username = trueUsername();
	std::fstream ptr;
	std::string fileline, name;
	bool match = false;
	ptr.open("Userdata.txt", std::ios::in);
	while ((!ptr.eof()) && (!match))
	{
		std::getline(ptr, name, ',');
		if (!username.compare(name))
		{
			std::getline(ptr, fileline, ',');
			Template = fileline;
			std::getline(ptr, fileline, ',');
			Diet = fileline;
			std::getline(ptr, fileline, ',');
			Workout = fileline;
			std::getline(ptr, fileline, ',');
			Prescription = stoi(fileline);
			std::getline(ptr, fileline);
			match = true;
		}
		else
		{
			std::getline(ptr, fileline);
		}
	}
	ptr.close();
}

//medication
void Medication::LoadPrescriptions()
{
	prescriptions = new std::string[Prescription];
	times = new std::string[Prescription];
	int loaded_presc = 0;
	std::fstream ptr;
	std::string fileline, name;
	ptr.open("Medications.txt", std::ios::in);
	while ((!ptr.eof()) && (loaded_presc != Prescription))
	{
		std::getline(ptr, name, ',');
		if (!username.compare(name))
		{
			std::getline(ptr, fileline, ',');
			prescriptions[loaded_presc] = fileline;
			std::getline(ptr, fileline);
			times[loaded_presc] = fileline;
			loaded_presc++;
		}
		else
		{
			std::getline(ptr, fileline);
		}
	}
	ptr.close();
}
void Medication::AddPrescription(std::string presc, std::string time)
{
	std::fstream ptr;
	std::fstream ptr1;
	std::string fileline, name, newfileline;
	ptr.open("Medications.txt", std::ios::app);
	ptr << username << "," << presc << "," << time << "\n";
	ptr.close();
	Prescription++;
	ptr.open("Userdata1.txt", std::ios::out);
	ptr1.open("Userdata.txt", std::ios::in);
	while (!ptr1.eof())
	{
		std::getline(ptr1, name, ',');
		if (username.compare(name))
		{
			std::getline(ptr1, fileline);
			ptr << name + "," + fileline + "\n";
		}
		else
		{
			newfileline = username + ",";
			for (int i = 0; i < 3; i++)
			{
				std::getline(ptr1, fileline, ',');
				newfileline += fileline + ",";
			}
			newfileline += std::to_string(Prescription) + ",";
			std::getline(ptr1, fileline);
			newfileline += fileline[fileline.length() - 1];
		}
	}
	ptr << newfileline;
	ptr.close();
	ptr1.close();
	remove("Userdata.txt");
	rename("Userdata1.txt", "Userdata.txt");
}

//settings class
void ourSettings::ModifyDiet(std::string new_diet)
{
	std::fstream ptr, ptr1;
	std::string fileline, name, newfileline;
	ptr.open("Userdata.txt", std::ios::in);
	ptr1.open("Userdata1.txt", std::ios::out);
	while (!ptr.eof())
	{
		std::getline(ptr, name, ',');
		if (username.compare(name))
		{
			std::getline(ptr, fileline);
			ptr1 << name + "," + fileline + "\n";
		}
		else
		{
			std::getline(ptr, fileline, ',');
			newfileline = username + "," + fileline + "," + new_diet + ",";
			std::getline(ptr, fileline, ',');
			std::getline(ptr, fileline);
			newfileline += fileline;
		}
	}
	ptr1 << newfileline;
	ptr.close();
	ptr1.close();
	remove("Userdata.txt");
	rename("Userdata1.txt", "Userdata.txt");
}
void ourSettings::ModifyTemplate(std::string new_template)
{
	std::fstream ptr, ptr1;
	std::string fileline, name, newfileline;
	ptr.open("Userdata.txt", std::ios::in);
	ptr1.open("Userdata1.txt", std::ios::out);
	while (!ptr.eof())
	{
		std::getline(ptr, name, ',');
		if (username.compare(name))
		{
			std::getline(ptr, fileline);
			ptr1 << name + "," + fileline + "\n";
		}
		else
		{
			std::getline(ptr, fileline, ',');
			std::getline(ptr, fileline);
			newfileline = username + "," + new_template + "," + fileline;
		}
	}
	ptr1 << newfileline;
	ptr.close();
	ptr1.close();
	remove("Userdata.txt");
	rename("Userdata1.txt", "Userdata.txt");
}
void ourSettings::ModifyWorkout(std::string new_workout)
{
	std::fstream ptr, ptr1;
	std::string fileline, name, newfileline;
	ptr.open("Userdata.txt", std::ios::in);
	ptr1.open("Userdata1.txt", std::ios::out);
	while (!ptr.eof())
	{
		std::getline(ptr, name, ',');
		if (username.compare(name))
		{
			std::getline(ptr, fileline);
			fileline = name + "," + fileline + "\n";
			ptr1 << fileline;
		}
		else
		{
			newfileline = username + ",";
			for (int i = 0; i < 2; i++)
			{
				std::getline(ptr, fileline, ',');
				newfileline += fileline + ",";
			}
			newfileline += new_workout + ",";
			std::getline(ptr, fileline, ',');
			std::getline(ptr, fileline);
			newfileline += fileline;
		}
	}
	ptr1 << newfileline;
	ptr.close();
	ptr1.close();
	remove("Userdata.txt");
	rename("Userdata1.txt", "Userdata.txt");
}
void ourSettings::ModifyPassword(std::string newPassword) {
	std::fstream ptr1, ptr2;
	std::string newline, str, fileline;
	int seppos;
	ptr1.open("usernames.txt", std::ios::in);
	ptr2.open("usernames1.txt", std::ios::out);
	while (std::getline(ptr1, fileline)) {
		str = fileline.substr(0, 1);
		if (!str.compare("@")) {
			seppos = fileline.find(',');
			newline = "@" + username + "," + newPassword + "\n";
			ptr2 << newline;
		}
		else if (!str.compare("!")) {
			ptr2 << fileline << std::endl;
		}
	}
	ptr1.close();
	ptr2.close();
	remove("usernames.txt");
	rename("usernames1.txt", "usernames.txt");
}
//LoginCount
int GetLoginCount(std::string username)
{
	std::fstream ptr;
	ptr.open("Userdata.txt", std::ios::in);
	int count = -1;
	std::string fileline, name;
	while (!ptr.eof())
	{
		std::getline(ptr, name, ',');
		if (!username.compare(name))
		{
			std::getline(ptr, fileline);
			count = stoi(fileline.substr(fileline.length() - 1, 1));
			break;
		}
		else
			std::getline(ptr, fileline);
	}
	return count;
	ptr.close();
}

void IncrementLoginCount(std::string username)
{
	std::fstream ptr, ptr1;
	ptr.open("Userdata.txt", std::ios::in);
	ptr1.open("Userdata1.txt", std::ios::out);
	int count = -1;
	std::string fileline, name, newfileline;
	while (!ptr.eof())
	{
		std::getline(ptr, fileline, ',');
		if (fileline.compare(username))
		{
			ptr1 << fileline + ",";
			for (int i = 0; i < 4; i++)
			{
				std::getline(ptr, fileline, ',');
				ptr1 << fileline + ",";
			}
			std::getline(ptr, fileline);
			ptr1 << fileline + "\n";
		}
		else
		{
			std::getline(ptr, fileline);
			count = stoi(fileline.substr(fileline.length() - 1, 1));
			count++;
			fileline = fileline.substr(0, fileline.length() - 1) + std::to_string(count);
			newfileline = username + "," + fileline;
		}
	}
	ptr1 << newfileline;
	ptr.close();
	ptr1.close();
	remove("Userdata.txt");
	rename("Userdata1.txt", "Userdata.txt");
}
//kumail's code
std::string PLANS::determineday()	//defining function to return current day respective system date
{
	std::string date, day;
	struct tm* newtime;
	time_t ltime;
	time(&ltime);
	newtime = localtime(&ltime);
	date = asctime(newtime);
	day = date.substr(0, 3);	//Shortens the day to 3 characters std::string
	return day;	//returns day
}
int PLANS::determinetime()	//defining function to return current time (just hours) respective to system time
{
	time_t t = time(0);
	tm* newtime = localtime(&t);
	return newtime->tm_hour;	//returns current time (hour part)
}

void DIET::setdiet(std::string x) { diet = x; }	//defining setter function to set diet
void DIET::setday(std::string x) { day = x; }	//defining setter function to set day
void DIET::setmeal(std::string x) { meal = x; }	//defining setter function to setmeal
std::string DIET::getdiet() { return diet; }	//defining getter function to return diet
std::string DIET::getday() { return day; }	//defining getter function to return day
std::string DIET::getmeal() { return meal; }	//defining getter function to return meal
std::string DIET::getdetails() { return details; }	//defining getter function to display details
std::string DIET::getbreakfast(std::string x)
{
	size_t startpos, endpos, seppos;
	setdiet(x);
	day = determineday();
	setday(day);
	char c;
	std::ifstream file("DIET.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { breakfast += c; }	//storing file in std::string details
	file.close();	//closing the file
	startpos = breakfast.find(x);	//setting start position with respect to diet selected
	seppos = breakfast.find_first_of('~', startpos);	//setting end position
	breakfast = breakfast.substr(startpos, seppos - startpos);	//storing the substring from startpos to seppos in details
	startpos = breakfast.find(day);	//setting start position with respect to current day
	seppos = breakfast.find_first_of('\n', startpos);	//updating end position
	breakfast = breakfast.substr(startpos, seppos - startpos);	//storing the substring from startpos to seppos in details
	startpos = breakfast.find("Breakfast");	//setting start position with respect to the meal
	endpos = breakfast.find_first_of('.', startpos);	//setting end position with '.' with respect to file
	breakfast = breakfast.substr(startpos, endpos - startpos);	//storing the substring from startpos to seppos in details
	return breakfast;
}
std::string DIET::getlunch(std::string x)
{
	size_t startpos, endpos, seppos;
	setdiet(x);
	day = determineday();
	setday(day);
	char c;
	std::ifstream file("DIET.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { lunch += c; }	//storing file in std::string details
	file.close();	//closing the file
	startpos = lunch.find(x);	//setting start position with respect to diet selected
	seppos = lunch.find_first_of('~', startpos);	//setting end position
	lunch = lunch.substr(startpos, seppos - startpos);	//storing the substring from startpos to seppos in details
	startpos = lunch.find(day);	//setting start position with respect to current day
	seppos = lunch.find_first_of('\n', startpos);	//updating end position
	lunch = lunch.substr(startpos, seppos - startpos);	//storing the substring from startpos to seppos in details
	startpos = lunch.find("Lunch");	//setting start position with respect to the meal
	endpos = lunch.find_first_of('.', startpos);	//setting end position with '.' with respect to file
	lunch = lunch.substr(startpos, endpos - startpos);	//storing the substring from startpos to seppos in details
	return lunch;
}
std::string DIET::getdinner(std::string x)
{
	size_t startpos, endpos, seppos;
	setdiet(x);
	day = determineday();
	setday(day);
	char c;
	std::ifstream file("DIET.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { dinner += c; }	//storing file in std::string details
	file.close();	//closing the file
	startpos = dinner.find(x);	//setting start position with respect to diet selected
	seppos = dinner.find_first_of('~', startpos);	//setting end position
	dinner = dinner.substr(startpos, seppos - startpos);	//storing the substd::string from startpos to seppos in details
	startpos = dinner.find(day);	//setting start position with respect to current day
	seppos = dinner.find_first_of('\n', startpos);	//updating end position
	dinner = dinner.substr(startpos, seppos - startpos);	//storing the substd::string from startpos to seppos in details
	startpos = dinner.find("Dinner");	//setting start position with respect to the meal
	endpos = dinner.find_first_of('.', startpos);	//setting end position with '.' with respect to file
	dinner = dinner.substr(startpos, endpos - startpos);	//storing the substd::string from startpos to seppos in details
	return dinner;
}
std::string DIET::displayPlan(std::string Plan)	//defining function to display weekly menu of selected diet
{
	size_t startpos, endpos;
	char c;
	diet = Plan;
	setdiet(diet);
	std::ifstream file("DIET.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { menu += c; }	//storing file in std::string details
	file.close();	//closing the file
	startpos = menu.find(diet);	//setting start position with respect to diet selected
	endpos = menu.find_first_of('~', startpos);	//setting end position
	menu = menu.substr(startpos, endpos - startpos);
	return menu;
}
void DIET::search(std::string diet)	//defining function to search for required meal for respective date and time
{
	size_t startpos, endpos, seppos;
	setdiet(diet);
	day = determineday();
	setday(day);
	char c;
	std::ifstream file("DIET.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { details += c; }	//storing file in std::string details
	file.close();	//closing the file
	startpos = details.find(diet);	//setting start position with respect to diet selected
	seppos = details.find_first_of('~', startpos);	//setting end position
	details = details.substr(startpos, seppos - startpos);	//storing the substd::string from startpos to seppos in details
	startpos = details.find(day);	//setting start position with respect to current day
	seppos = details.find_first_of('\n', startpos);	//updating end position
	details = details.substr(startpos, seppos - startpos);	//storing the substd::string from startpos to seppos in details
	startpos = details.find(meal);	//setting start position with respect to the meal
	endpos = details.find_first_of('.', startpos);	//setting end position with '.' with respect to file
	details = details.substr(startpos, endpos - startpos);	//storing the substd::string from startpos to seppos in details
}

void Workout::setworkout(std::string x) { workout = x; }	//defining setter function to set planm
void Workout::setday(std::string x) { day = x; }	//defining setter function to set day
void Workout::settime(int x) { time = x; }	//defining setter function to set time
std::string Workout::getworkout() { return workout; }	//defining getter function to return plan
std::string Workout::getday() { return day; }	//defining getter function to return day
int Workout::gettime() { return time; }	//defining getter function to return time
std::string Workout::getdetails() { return details; }	//defining getter function to display details
std::string Workout::displayPlan(std::string Plan)	//defining function to display weekly plan of selected workout
{
	size_t startpos, endpos;
	char c;
	workout = Plan;
	setworkout(workout);
	std::ifstream file("Workout.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { plan += c; }	//storing file in string details
	file.close();	//closing the file
	startpos = plan.find(workout);	//setting start position with respect to workout selected
	endpos = plan.find_first_of('~', startpos);	//setting end position
	plan = plan.substr(startpos, endpos - startpos);
	return plan;
}
std::string  Workout::search(std::string wo)	//defining function to search for required workout for respective date and time
{
	size_t startpos, endpos, seppos;
	setworkout(wo);
	day = determineday();
	setday(day);
	char c;
	std::ifstream file("Workout.txt");	//Opening file for reading
	file >> std::noskipws;
	while (file >> c) { details += c; }	//storing file in string details
	file.close();	//closing the file
	startpos = details.find(workout);	//setting start position with respect to diet selected
	seppos = details.find_first_of('~', startpos);	//setting end position
	details = details.substr(startpos, seppos - startpos);	//storing the substring from startpos to seppos in details
	startpos = details.find(day);	//setting start position with respect to current day
	seppos = details.find_first_of('\n', startpos);	//updating end position
	details = details.substr(startpos, seppos - startpos);	//storing the substring from startpos to seppos in details
	startpos = details.find(" ");
	endpos = details.find_first_of('.', startpos);	//setting end position with '.' with respect to file
	details = details.substr(startpos, endpos - startpos);	//storing the substring from startpos to seppos in details
	return details;
}