#pragma once
#include <iostream>
#include<string>
//using namespace 
class qoutes {
public:
	std::string Qoute;
public:
	std::string getQoute();
	void readQoute();
};
class SignUp {
protected:
	std::string username;
	std::string password;
public:
	void setusername(std::string);
	bool comparepass(std::string, std::string);
	void setpassword(std::string);
	std::string getusername();
	int userexists();
	void NewUser();
};
class Login {
protected:
	std::string username;
	std::string password;
public:
	void setUsername(std::string);
	void setPassword(std::string);
	bool userexists();
	bool passwordmatch(std::string);
	void logout();
	std::string trueUsername();
};
class routine :public Login { //inheritence
//protected:
public:
	std::string getRoutine(std::string, std::string);
	void modifyRoutine(std::string, std::string, std::string);
	void NewUserRoutine(int);
	std::string getNewRoutine(int);
	std::string DetermineDay();
	void modifyUserRoutine(int);
};
//umer's code

class Register {
public:
	std::string Username;
	Register(std::string name);
	void AddUserData(std::string temp, std::string diet, std::string workout);
};
class User : public Login {
public:
	std::string Template;
	std::string Diet;
	std::string Workout;
	int Prescription = 0;
	User();
};
class Medication : public User {
public:
	std::string* prescriptions;
	std::string* times;
	void LoadPrescriptions();
	void AddPrescription(std::string presc, std::string time);
};
class ourSettings : public User
{
public:
	void ModifyDiet(std::string new_diet);
	void ModifyTemplate(std::string new_template);
	void ModifyWorkout(std::string new_workout);
	void ModifyPassword(std::string newPassword);
};
int GetLoginCount(std::string username);
void IncrementLoginCount(std::string username);
//kumail's code
class PLANS
{
public:
	std::string determineday();	//defining function to return current day respective system date
	int determinetime();
	std::string virtual displayPlan(std::string Plan) = 0;	//defining function to return current time (just hours) respective to system time
};
class Workout : public PLANS	//Defining class Workout
{	//Declaring privata data members of the class
	std::string workout, plan, day, details = "";
	int time;
public:	//public portion of the class
	void setworkout(std::string);	//declaring setter function to set workout plan
	void setday(std::string);	//declaring setter function to set day
	void settime(int);	//declaring setter function to set time for workout
	std::string getworkout();	//declaring getter function to return workout plan
	std::string getday();	//declaring getter function to return day
	std::string getdetails();//declaring getter function to return details
	int gettime();	//declaring getter function to return time (hours only)
	std::string displayPlan(std::string Plan);//declaring function to display weekly plan of selected workout
	std::string search(std::string);	//declaring function to search for required workout for respective date and time
};

class DIET : public PLANS	//Defining class DIET
{	//Declaring privata data members of the class
	std::string diet, day, meal, menu = "", details = "", breakfast, lunch, dinner;
public:	//public portion of the class
	void setdiet(std::string);	//declaring setter function to set diet
	void setday(std::string);	//declaring setter function to set day
	void setmeal(std::string);	//declaring setter function to setmeal
	std::string getdiet();	//declaring getter function to return diet
	std::string getday();	//declaring getter function to return day
	std::string getmeal();	//declaring getter function to return meal
	std::string getdetails();//declaring getter function to display details
	std::string getbreakfast(std::string);
	std::string getlunch(std::string);
	std::string getdinner(std::string);
	std::string displayPlan(std::string Plan);//declaring function to display weekly menu of selected diet
	void search(std::string);	//declaring function to search for required meal for respective date and time
};