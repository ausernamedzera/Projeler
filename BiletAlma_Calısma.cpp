#include <iostream>
using namespace std;

int main(){
	int bilet=50, istenilenbilet, menu;
	char biletal;
	menu: 
	cout<<"bilet almak isterseniz 'e' istemiyorsan�z 'h'ye bas�n: "<<endl;
	cin>>biletal;
	for (;bilet>0;){
		if(biletal=='e'|| biletal=='E'){
		cout << "ka� bilet istersiniz? "<<endl;
		cin >> istenilenbilet;
		if (bilet>= istenilenbilet){
		bilet-=istenilenbilet;
		cout<<bilet<<"kadar bilet kald�!" << endl;
		cout<<"Bilet almaya devam etmek ister misiniz?";
		cin>>biletal;
		if(biletal=='h'|| biletal=='H'){
			cout<<"Bilet almaya her zaman bekleriiz Tukenmeden Geliiin!!!"<<endl;
			break;
		}
		}
	}
		else if(biletal=='h'||biletal=='H'){
			cout<<"Bilet almaya her zaman bekleriiz Tukenmeden Geliiin!!!"<<endl;
			break;
		}
		else{
			cout<<"Hatali giris!!"<<endl;
			goto menu;
		}
		if(bilet==0){
			cout<<"Biletler T�kendiiiiii";
		}
	}
	return 0;
}

