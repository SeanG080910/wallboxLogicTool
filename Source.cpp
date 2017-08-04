/*
Sean Gorni
Wallbox Project
*/
#include <iostream>;
#include <string>;
#include <fstream>;
using namespace std;

struct product {
	string Family;
	string SubFamily;
	string primeFunction;
	string secFunction;
	string primeClass;
	string protocol;
	string modelNum;
	string inVolt;
	string inc;
	string hal;
	string CFL;
	string LED;
	string MLV;
	string ELV;
	string eBall;
	string driver;
	string fan;
	string Motor;
	string MAXinc;
	string MAXhal;
	string MAXCFL;
	string MAXLED;
	string MAXMLV;
	string MAXELV;
	string MAXeBall;
	string MAXdriver;
	string MAXfan;
	string MAXMotor;
	string MINinc;
	string MINhal;
	string MINCFL;
	string MINLED;
	string MINMLV;
	string MINELV;
	string MINeBall;
	string MINdriver;
	string MINfan;
	string MINMotor;
	string application;
	string groundCon;
	string neutralCon;
	string gloss;
	string satin;
	product* nextPtr;
	product* LastPtr;
};

int main(){
	string input = "";
	string repeat = "";
	bool match = false;
	//cout << "test1" << endl;
	product structArray[100];
	product* firstPtr = NULL;
	product* lastPtr = NULL;
	product* tempPtr = NULL;
	int arrayCounter = 0;
	//variables end

	//cout << "test2" << endl;//test code feedback
	for (int counter = 0; counter < 100; counter++) {//inistialize array
		structArray[counter].Family = "";
		structArray[counter].SubFamily = "";
		structArray[counter].primeFunction = "";
		structArray[counter].secFunction = "";
		structArray[counter].primeClass = "";
		structArray[counter].protocol = "";
		structArray[counter].modelNum = "";
		structArray[counter].inVolt = "";
		structArray[counter].inc = "";
		structArray[counter].hal = "";
		structArray[counter].CFL = "";
		structArray[counter].LED = "";
		structArray[counter].MLV = "";
		structArray[counter].ELV = "";
		structArray[counter].eBall = "";
		structArray[counter].driver = "";
		structArray[counter].fan = "";
		structArray[counter].Motor = "";
		structArray[counter].MAXinc = "";
		structArray[counter].MAXhal = "";
		structArray[counter].MAXCFL = "";
		structArray[counter].MAXLED = "";
		structArray[counter].MAXMLV = "";
		structArray[counter].MAXELV = "";
		structArray[counter].MAXeBall = "";
		structArray[counter].MAXdriver = "";
		structArray[counter].MAXfan = "";
		structArray[counter].MAXMotor = "";
		structArray[counter].MINinc = "";
		structArray[counter].MINhal = "";
		structArray[counter].MINCFL = "";
		structArray[counter].MINLED = "";
		structArray[counter].MINMLV = "";
		structArray[counter].MINELV = "";
		structArray[counter].MINeBall = "";
		structArray[counter].MINdriver = "";
		structArray[counter].MINfan = "";
		structArray[counter].MINMotor = "";
		structArray[counter].application = "";
		structArray[counter].groundCon = "";
		structArray[counter].neutralCon = "";
		structArray[counter].gloss = "";
		structArray[counter].satin = "";
		structArray[counter].nextPtr = NULL;
		structArray[counter].LastPtr = NULL;
		//cout << counter << endl;//test code feedback
	}//initialize array end

	ifstream inFile("inputFile.txt",ios::in);

//	cout << "test3" << endl;//test code feedback
	for (int fileInputCounter = 0; fileInputCounter < 100; fileInputCounter++) {//read in values from file
		inFile >> structArray[fileInputCounter].Family;
		inFile >> structArray[fileInputCounter].SubFamily;
		inFile >> structArray[fileInputCounter].primeFunction;
		inFile >> structArray[fileInputCounter].secFunction;
		inFile >> structArray[fileInputCounter].primeClass;
		inFile >> structArray[fileInputCounter].protocol;
		inFile >> structArray[fileInputCounter].modelNum;
		inFile >> structArray[fileInputCounter].inVolt;
		inFile >> structArray[fileInputCounter].inc;
		inFile >> structArray[fileInputCounter].hal;
		inFile >> structArray[fileInputCounter].CFL;
		inFile >> structArray[fileInputCounter].LED;
		inFile >> structArray[fileInputCounter].MLV;
		inFile >> structArray[fileInputCounter].ELV;
		inFile >> structArray[fileInputCounter].eBall;
		inFile >> structArray[fileInputCounter].driver;
		inFile >> structArray[fileInputCounter].fan;
		inFile >> structArray[fileInputCounter].Motor;
		inFile >> structArray[fileInputCounter].MAXinc;
		inFile >> structArray[fileInputCounter].MAXhal;
		inFile >> structArray[fileInputCounter].MAXCFL;
		inFile >> structArray[fileInputCounter].MAXLED;
		inFile >> structArray[fileInputCounter].MAXMLV;
		inFile >> structArray[fileInputCounter].MAXELV;
		inFile >> structArray[fileInputCounter].MAXeBall;
		inFile >> structArray[fileInputCounter].MAXdriver;
		inFile >> structArray[fileInputCounter].MAXfan;
		inFile >> structArray[fileInputCounter].MAXMotor;
		inFile >> structArray[fileInputCounter].MINinc;
		inFile >> structArray[fileInputCounter].MINhal;
		inFile >> structArray[fileInputCounter].MINCFL;
		inFile >> structArray[fileInputCounter].MINLED;
		inFile >> structArray[fileInputCounter].MINMLV;
		inFile >> structArray[fileInputCounter].MINELV;
		inFile >> structArray[fileInputCounter].MINeBall;
		inFile >> structArray[fileInputCounter].MINdriver;
		inFile >> structArray[fileInputCounter].MINfan;
		inFile >> structArray[fileInputCounter].MINMotor;
		inFile >> structArray[fileInputCounter].application;
		inFile >> structArray[fileInputCounter].groundCon;
		inFile >> structArray[fileInputCounter].neutralCon;
		inFile >> structArray[fileInputCounter].gloss;
		inFile >> structArray[fileInputCounter].satin;
		//inFile>>structArray[fileInputCounter].nextPtr;
		//inFile>>structArray[fileInputCounter].LastPtr;
		//cout << fileInputCounter << endl;//test code feedback
	}//for input end

	cout << "Welcome to toolbox" << endl;//Interface Greeting


	/*BELOW CODE TO ITERATE THROUGH STRUCTURE ARRAY TO FIND MATCH FOR MODEL NUMBER FIELD*/
	do {
		cout << "Please input model number" << endl;//prompt for user input
		cin >> input;//user input
		for (int arrayCounter = 0; arrayCounter < 100; arrayCounter++) {//for loop to iterate through array to find match for model number
			if (structArray[arrayCounter].modelNum == input) {
				cout << "Family: " << structArray[arrayCounter].Family << endl;
				cout << "SubFamily: " << structArray[arrayCounter].SubFamily << endl;
				cout << "primeFunction: " << structArray[arrayCounter].primeFunction << endl;
				cout << "secFunction: " << structArray[arrayCounter].secFunction << endl;
				cout << "primeClass: " << structArray[arrayCounter].primeClass << endl;
				cout << "protocol: " << structArray[arrayCounter].protocol << endl;
				cout << "modelNum: " << structArray[arrayCounter].modelNum << endl;
				cout << "inVolt: " << structArray[arrayCounter].inVolt << endl;
				cout << "inc: " << structArray[arrayCounter].inc << endl;
				cout << "hal: " << structArray[arrayCounter].hal << endl;
				cout << "CFL: " << structArray[arrayCounter].CFL << endl;
				cout << "LED: " << structArray[arrayCounter].LED << endl;
				cout << "MLV: " << structArray[arrayCounter].MLV << endl;
				cout << "ELV: " << structArray[arrayCounter].ELV << endl;
				cout << "eBall: " << structArray[arrayCounter].eBall << endl;
				cout << "driver: " << structArray[arrayCounter].driver << endl;
				cout << "fan: " << structArray[arrayCounter].fan << endl;
				cout << "Motor: " << structArray[arrayCounter].Motor << endl;
				if (structArray[arrayCounter].MAXinc == "-") {
					//do nothing
				}
				else {
					cout << "Maximum inc: " << structArray[arrayCounter].MAXinc << endl;
				}
				if (structArray[arrayCounter].MAXhal == "-") {
					//do nothing
				}
				else {
					cout << "Maximum hal: " << structArray[arrayCounter].MAXhal << endl;
				}
				if (structArray[arrayCounter].MAXCFL == "-") {
					//do nothing
				}
				else {
					cout << "Maximum CFL: " << structArray[arrayCounter].MAXCFL << endl;
				}
				if (structArray[arrayCounter].MAXLED == "-") {
					//do nothing
				}
				else {
					cout << "Maximum LED: " << structArray[arrayCounter].MAXLED << endl;
				}
				if (structArray[arrayCounter].MAXMLV == "-") {
					//do nothing
				}
				else {
					cout << "Maximum MLV: " << structArray[arrayCounter].MAXMLV << endl;
				}
				if (structArray[arrayCounter].MAXELV == "-") {
					//do nothing
				}
				else {
					cout << "Maximum ELV: " << structArray[arrayCounter].MAXELV << endl;
				}
				if (structArray[arrayCounter].MAXeBall == "-") {
					//do nothing
				}
				else {
					cout << "Maximum eBall: " << structArray[arrayCounter].MAXeBall << endl;
				}
				if (structArray[arrayCounter].MAXdriver == "-") {
					//do nothing
				}
				else {
					cout << "Maximum driver: " << structArray[arrayCounter].MAXdriver << endl;
				}
				if (structArray[arrayCounter].MAXfan == "-") {
					//do nothing
				}
				else {
					cout << "Maximum fan: " << structArray[arrayCounter].MAXfan << endl;
				}
				if (structArray[arrayCounter].MAXMotor == "-") {
					//do nothing
				}
				else {
					cout << "Maximum Motor: " << structArray[arrayCounter].MAXMotor << endl;
				}
				if (structArray[arrayCounter].MINinc == "-") {
					//do nothing
				}
				else {
					cout << "Minimum inc: " << structArray[arrayCounter].MINinc << endl;
				}
				if (structArray[arrayCounter].MINhal == "-") {
					//do nothing
				}
				else {
					cout << "Minimum hal: " << structArray[arrayCounter].MINhal << endl;
				}
				if (structArray[arrayCounter].MINCFL == "-") {
					//do nothing
				}
				else {
					cout << "Minimum CFL: " << structArray[arrayCounter].MINCFL << endl;
				}
				if (structArray[arrayCounter].MINLED == "-") {
					//do nothing
				}
				else {
					cout << "Minimum LED: " << structArray[arrayCounter].MINLED << endl;
				}
				if (structArray[arrayCounter].MINMLV == "-") {
					//do nothing
				}
				else {
					cout << "Minimum MLV: " << structArray[arrayCounter].MINMLV << endl;
				}
				if (structArray[arrayCounter].MINELV == "-") {
					//do nothing
				}
				else {
					cout << "Minimum ELV: " << structArray[arrayCounter].MINELV << endl;
				}
				if (structArray[arrayCounter].MINeBall == "-") {
					//do nothing
				}
				else {
					cout << "Minimum eBall: " << structArray[arrayCounter].MINeBall << endl;
				}
				if (structArray[arrayCounter].MINdriver == "-") {
					//do nothing
				}
				else {
					cout << "Minimum driver: " << structArray[arrayCounter].MINdriver << endl;
				}
				if (structArray[arrayCounter].MINfan == "-") {
					//do nothing
				}
				else {
					cout << "Minimum fan: " << structArray[arrayCounter].MINfan << endl;
				}
				if (structArray[arrayCounter].MINMotor == "-") {
					//do nothing
				}
				else {
					cout << "Minimum Motor: " << structArray[arrayCounter].MINMotor << endl;
				}
				
				cout << "application: " << structArray[arrayCounter].application << endl;
				cout << "groundCon: " << structArray[arrayCounter].groundCon << endl;
				cout << "neutralCon: " << structArray[arrayCounter].neutralCon << endl;
				cout << "Color Offerings: " << endl;
				cout << "                gloss: " << structArray[arrayCounter].gloss << endl;
				cout << "                satin: " << structArray[arrayCounter].satin << endl;
				cout << "----------------------------------------" << endl;
				input = "";
				break;
			}//if end
			else {
				if (arrayCounter == 99) {//if no match found
					cout << input << " not found..." << endl;
				}//else > if end
			}//else end
		}//for end
		cout << "Would you like to search again?" << endl;
		cin >> repeat;
	}//search and print loop end
	while (repeat == "yes");


	/*cout<< "Family: " << structArray[arrayCounter].Family << endl;
	cout<< "SubFamily: " << structArray[arrayCounter].SubFamily << endl;
	cout<< "primeFunction: " << structArray[arrayCounter].primeFunction << endl;
	cout<< "secFunction: " << structArray[arrayCounter].secFunction << endl;
	cout<< "primeClass: " << structArray[arrayCounter].primeClass << endl;
	cout << "protocol: " << structArray[arrayCounter].protocol << endl;
	cout<< "modelNum: " << structArray[arrayCounter].modelNum << endl;
	cout<< "inVolt: " << structArray[arrayCounter].inVolt << endl;
	 cout << "inc: " << structArray[arrayCounter].inc << endl;
	 cout << "hal: " << structArray[arrayCounter].hal << endl;
	 cout << "CFL: " << structArray[arrayCounter].CFL << endl;
	 cout << "LED: " << structArray[arrayCounter].LED << endl;
	 cout << "MLV: " << structArray[arrayCounter].MLV << endl;
	 cout << "ELV: " << structArray[arrayCounter].ELV << endl;
	 cout << "eBall: " << structArray[arrayCounter].eBall << endl;
	 cout << "driver: " << structArray[arrayCounter].driver << endl;
	 cout << "fan: " << structArray[arrayCounter].fan << endl;
	 cout << "Motor: " << structArray[arrayCounter].Motor << endl;
	 cout << "Maximum inc: " << structArray[arrayCounter].MAXinc << endl;
	 cout << "Maximum hal: " << structArray[arrayCounter].MAXhal << endl;
	 cout << "Maximum CFL: " << structArray[arrayCounter].MAXCFL << endl;
	 cout << "Maximum LED: " << structArray[arrayCounter].MAXLED << endl;
	 cout << "Maximum MLV: " << structArray[arrayCounter].MAXMLV << endl;
	 cout << "Maximum ELV: " << structArray[arrayCounter].MAXELV << endl;
	 cout << "Maximum eBall: " << structArray[arrayCounter].MAXeBall << endl;
	 cout << "Maximum driver: " << structArray[arrayCounter].MAXdriver << endl;
	 cout << "Maximum fan: " << structArray[arrayCounter].MAXfan << endl;
	 cout << "Maximum Motor: " << structArray[arrayCounter].MAXMotor << endl;
	 cout << "Minimum inc: " << structArray[arrayCounter].MINinc << endl;
	 cout << "Minimum hal: " << structArray[arrayCounter].MINhal << endl;
	 cout << "Minimum CFL: " << structArray[arrayCounter].MINCFL << endl;
	 cout << "Minimum LED: " << structArray[arrayCounter].MINLED << endl;
	 cout << "Minimum MLV: " << structArray[arrayCounter].MINMLV << endl;
	 cout << "Minimum ELV: " << structArray[arrayCounter].MINELV << endl;
	 cout << "Minimum eBall: " << structArray[arrayCounter].MINeBall << endl;
	 cout << "Minimum driver: " << structArray[arrayCounter].MINdriver << endl;
	 cout << "Minimum fan: " << structArray[arrayCounter].MINfan << endl;
	 cout << "Minimum Motor: " << structArray[arrayCounter].MINMotor << endl;
	cout<< "application: " << structArray[arrayCounter].application << endl;
	cout<< "groundCon: " << structArray[arrayCounter].groundCon << endl;
	cout<< "neutralCon: " << structArray[arrayCounter].neutralCon << endl;
	cout << "glosses: " << structArray[arrayCounter].gloss << endl;
	cout<< "satin: " << structArray[arrayCounter].satin << endl;
	cout << "----------------------------------------" << endl;*/
	}//structure field input loop end

