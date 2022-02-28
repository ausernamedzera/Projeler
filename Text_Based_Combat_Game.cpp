/* Text Based Combat Game */


#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <typeinfo>
using namespace std;

class oyuncu
{
	public:
		string k_adi;
		int can;
};

//This void function writes gamers hp status on screen
void can(int can1, int can2,string oyuncu1, string oyuncu2){
	cout<<oyuncu1<<"'s HP["<<can1<<"] {";
		for (int i=0; i<can1; i++){
			cout<<"|";
			i++;
		}
		cout<<"}     ";
		cout<<oyuncu2<<"'s HP["<<can2<<"] {";
		for (int i=0; i<can2; i++){
			cout<<"|";
			i++;
		}
		cout<<"}"<<endl;
}


int main(){
	cout<<"****TEXT BASED KOMBAT GAME****"<<endl;
	cout<<"*Welcome To The TEXT BASED KOMBAT Game*"<<endl;
	cout<<"*Guide: Every player has 50% chance to make the damage!!*"<<endl<<endl;
	cout<<"*No one wins or no one loses. Just for the project!*"<<endl;
	
	oyuncu o1,o2, c1, c2;
	int dmg,hasar;
	int menu,isim,ilk,attack,attack2,attack3, attack4;
	int hasarsansi1, hasarsansi2;
	char cevap;
//Gamers' info take in from here
	menu:
	c1.can=100;
	c2.can=100;
	cout<<"Enter a name for first gamer: ";
	cin>>o1.k_adi;
	isim:
	cout<<"Enter a name for second gamer: ";
	cin>>o2.k_adi;
	if (o2.k_adi==o1.k_adi){
		cout<<o1.k_adi<<" already taken, please ";
		goto isim;
	}
//gameplay 
	while(true){
		//Which player to start first is chosen by half chance
			srand(time(0));
			ilk= rand() % 2+1;
			can(c1.can,c2.can,o1.k_adi,o2.k_adi);
		
		if(ilk==1){
	cout<<o1.k_adi<<" got the first chance to attack!"<<endl;
	attack:
	cout<<o1.k_adi<<" Attack!: "<<endl;
	cout<<" choose the damage of the attack(max=50, min=1): ";
	cin>>dmg;
	
	if(dmg<=0||dmg>50)
	{
		cout<<"your attack damage must be between 0-51"<<endl;
	goto attack;
	}
	//Players has 50% chance to carry out an attack
	hasarsansi1= rand() % 2+1;
	if (hasarsansi1==1){
	cout<<o1.k_adi<<" made "<<dmg<<" damage!!!"<<endl;
	c2.can=c2.can-dmg;
	}
	else
	cout<<"Attack failed"<<endl;
	can(c1.can,c2.can,o1.k_adi,o2.k_adi);
	
	if (c2.can<=0){
			cout<<o2.k_adi<<" lost:("<<endl; 
			cout<<"The WINNER is: "<<o1.k_adi<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y'){
			goto menu;
		}
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	attack2:
	cout<<o2.k_adi<<" Attack!: "<<endl;
	cin>>dmg;
	if(dmg<=0||dmg>50)
	{
		cout<<"your attack damage must be between 0-51"<<endl;
	goto attack2;
	}
	hasarsansi2= rand() % 2+1;
	if (hasarsansi2==1){
	cout<<o2.k_adi<<" made "<<dmg<<" damage!!!"<<endl;
	c1.can=c1.can-dmg;
	}
	else
	cout<<"Attack Failed :::("<<endl;
	can(c1.can,c2.can,o1.k_adi,o2.k_adi);
	if (c1.can<=0){
			cout<<o1.k_adi<<" lost:("<<endl; 
			cout<<"The WINNER is: "<<o2.k_adi<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y')
			goto menu;
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	goto attack;
	
	}
	
	//If second player got a chance to first attack, this block works.
	else{
	
	cout<<o2.k_adi<<" got the first chance to attack!"<<endl;
	attack3:
	cout<<o2.k_adi<<" Attack!: "<<endl;
	cout<<"Choose the damage of the attack(max=50, min=1): ";
	cin>>dmg;
	if (dmg<=0||dmg>50){
	cout<<"your attack damage must be between 0-51"<<endl;
	goto attack3;
	}
	hasarsansi1= rand() % 2+1;
	if (hasarsansi1==1){
	cout<<o2.k_adi<<" made "<<dmg<<" damage!!!"<<endl;
	c1.can=c1.can-dmg;}
	else
	cout<<"Attack Failed :::("<<endl;
	can(c1.can,c2.can,o1.k_adi,o2.k_adi);
	
	if (c1.can<=0){
			cout<<o1.k_adi<<" lost."<<endl; 
			cout<<"The WINNER is: "<<o2.k_adi<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y')
			goto menu;
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	attack4:	
	cout<<o1.k_adi<<" Attack!: "<<endl;
	cin>>dmg;
	if(dmg<=0||dmg>50)
	{
		cout<<"your attack damage must be between 0-51"<<endl;
	goto attack4;
	}
	hasarsansi2= rand() % 2+1;
	if (hasarsansi2==1){
	cout<<o1.k_adi<<" made "<<dmg<<" damage!!!"<<endl;
	c2.can=c2.can-dmg;
	}
	else{
		cout<<"Attack Failed :::("<<endl;
	}
	can(c1.can,c2.can,o1.k_adi,o2.k_adi);
	
		if (c2.can<=0){
			cout<<o2.k_adi<<" lost."<<endl; 
			cout<<"The WINNER is: "<<o1.k_adi<<endl;
			cout<<"Do you wanna play again? (y(for yes)/n(for no)): ";
			cin>>cevap;
			if (cevap=='y'||cevap=='Y'){
			goto menu;
		}
			else if(cevap=='n'||cevap=='n')
			cout<<"see you next time!";
			break;
		}
	goto attack3;

	}
	break;
	}
	return 0;
}

