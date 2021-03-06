// Created by Abhinav Rathi on 07/14/2016

#include <iostream>
#include "Chapter3_main.hpp"
#include "Problem_1_Three_In_One.hpp"
#include "Problem_2_Stack_Min.hpp"
#include "Problem_3_Stack_Of_Plates.hpp"
#include "Problem_4_My_Queue.hpp"
#include "Problem_5_Sort_Stack.hpp"
#include "Problem_6_Animal_Shelter.hpp"
#include "Problem_1_Three_In_One.hpp"
using namespace std;
void Chapter3_main::init(){
	Problem_1_Three_In_One P1;
	Problem_2_Stack_Min P2;
	Problem_3_Stack_Of_Plates P3;
	Problem_4_My_Queue P4;
	Problem_5_Sort_Stack P5;
	Problem_6_Animal_Shelter P6;
	int choice;
	do{
		cout<<"\n======================\nSTACKS AND QUEUES MENU\n======================\n";
		cout<<"Press 1 for 3.1 Three In One\n";
		cout<<"Press 2 for 3.2 Stack Min\n";
		cout<<"Press 3 for 3.3 Stack of Plates\n";
		cout<<"Press 4 for 3.4 My Queue\n";
		cout<<"Press 5 for 3.5 Sort Stack\n";
		cout<<"Press 6 for 3.6 Animal Shelter\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nGoing back to Main Menu!\n";
				break;
			case 1: P1.menu();
				break;
			case 2: P2.menu();
				break;
			case 3: P3.menu();
				break;
			case 4: P4.menu();
				break;
			case 5: P5.menu();
				break;
			case 6: P6.menu();
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(choice!=-1);
};