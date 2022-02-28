/*Ad Soyad: Zehra Varan                                                                                                           19.05.2021
��renci Numaras�: 191216051
Dersin kodu_Dersin ad�: BIL102_Temel Programlama 2
Proje: 2-Olu�turulan Matrisin Transpozesini alma */

#include<stdio.h>

int main(){
	//de�i�kenler
	int m,n,matrix[9][9],transpoz[9][9],i,j;
	//kullan�c�dan al�nan sat�r ve s�tun de�erleri
	printf("Matrisin sat�r ve s�tun say�lar�n� belirleyiniz: ");
	printf("\nSat�r Say�s�: ");
	scanf("%d", &m);
	printf("S�tun Say�s�: ");
	scanf("%d",&n);
	//sat�r ve s�tun de�erlerinin 4ten k���k 9dan b�y�k olma durumlar�n� test etme
	if (m<4 || m>9 || n<4 || n>9){
		printf("Sat�r veya S�tun Say�s� 4ten k���k 9dan b�y�k olmamal�!");
		return 0;
	}
	//kullan�c�dan matris eleman� isteme
	printf("%d tane eleman giriniz:\n", m*n);
	for(i=0; i<m; ++i){
		for(j=0; j<n; ++j){
			printf("a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	//kullan�c�n olu�turdu�u matrisi ekrana basma
	printf("Olu�turulan matris:\n");
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	//olu�an matrisin transpozunu alma ve ekrana basma
	for(i=0; i<m; ++i){
		for(j=0; j<n; j++){
			transpoz[j][i] = matrix[i][j];
		}
	}
	printf("Olu�turulan matrisin transpozu:\n");
	for(i=0; i<n; ++i){
		for(j=0; j<m; j++){
			printf("%d ", transpoz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/* Raporlama */

/*	Kullan�c�dan al�nan sat�r ve s�tun de�erleri �nce if blo�unda test edilecektir. Soruda sat�r ve s�tun say�lar� 4 ve 9 aras�nda s�n�rl� tutuldu�undan
bu test ger�ekle�tirilecektir. Uygun ko�ullar�n sa�lanmas� durumunda kullan�c�dan matris elemanlar�n� girmesi istenir. for d�ng�s� kullan�larak,
kullan�c�dan her d�ng�de bir de�er al�n�r ve her d�ng�de al�nan de�erler matrix[9][9]e atan�r. En d��taki i d�ng�s� sat�rlar� olu�tururken
j d�ng�s� ise s�tun elemanlar�n� olu�turmaktad�r. Kod, matrisi sat�rlar� doldurarak olu�turur. Kullan�c� ka��nc� eleman� nereye yerle�tirdi�ini g�rmesi i�in 
printf i�ine i ve j de�erlerini yazarak ve onlar� artt�rarak s�rayla kullan�c�n�n ka��nc� sat�r ve s�tunda oldu�u g�sterilir. 
	Kullan�c�n�n olu�turdu�u matris bir ba�ka i� i�e ge�mi� for d�ng�s� ile ekrana bas�l�r. Ekrana basma s�ras�nda bir di�er sat�rdaki
Elemanlar yan yana de�il de alt alta yaz�lmas� i�in en d��taki for d�ng�s�ne printf i�inde \n yaz�larak, j d�ng�s� tamamland���nda kod, 
alt sat�ra ge�er ve di�er d�ng� ba�lar.
	Sorudan bir di�er istenen durum ise kullan�c�n�n olu�turdu�u matrisin transpozunu almak. Yeni olu�acak matrisin i�ine yaz�lmas� i�in
ayr� bir matris olu�turulur. Olu�turulan bu matrisin elemanlar� j ve i �eklinde ters yaz�larak d�ng�n�n en i� k�sm�nda ilk olu�turulan matrise e�itlenir.
B�ylelikle transpoz[j][i] �eklinde yaz�lan matris, matrix[i][j] elemanlar�na e�lenir yani transpozun j ve i elemanlar� matrixin i ve j elemanlar�yla e�le�ir.
	Transpozu ekrana basarken i ve j de�erleri transpoz[i][j] halinde yaz�larak atanan de�erler ters d�ner ve sat�r elemanlar� s�tun elemanlar�na,
s�tun elemanlar� da sat�r elemanlar�na yaz�l�r.
	B�ylelikle soruda bizden istenenler tamamlanm�� olur ve kod biter.
*/
