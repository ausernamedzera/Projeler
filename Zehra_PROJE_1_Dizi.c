/*Ad Soyad: Zehra Varan                                                                                                           9.05.2021
Dersin kodu_Dersin ad�: BIL102_Temel Programlama 2
Proje: 1-Kullan�c�dan Al�nan Dizideki En B�y�k Eleman� Bulma */

#include<stdio.h>

int main(){
//de�i�kenler
	int a, i, eleman[100], max; 
	
//dizinin boyutu ve elemanlar� belirlenir.
	printf("Olu�turulacak dizinin ka� elemanl� olaca��n� giriniz(Maximum eleman say�s� 100'd�r):");
	scanf("%d", &a);                                                 
	printf("%d tane dizi eleman� giriniz:\n", a); 
	for(i = 0; i<a; ++i){
		printf("%d. eleman: ", i+1); 
		scanf("%d", &eleman[i]);
	}
	
//kullan�c�n�n olu�turdu�u diziyi ekrana basar.
	printf("Olu�turdu�unuz dizi:[ ");
	for(i = 0; i<a; ++i){
		printf("%d ", eleman[i]);
	}
	printf("]");
	
//en b�y�k eleman� bulur ve ekrana basar.
	max = eleman[0];
	for(i = 0; i<a; ++i){
		if (max<eleman[i]){
			max = eleman[i];
		}
	}
	printf("\nOlu�turdu�unuz dizideki en b�y�k eleman: %d", max);
	return 0;
}

/* Raporlama */

/*	De�i�kenler tan�mlad�m. eleman dizisinin boyutunu 100 olarak s�n�rland�rd�m. E�er bunu yapmazsam, direkt de�i�kene g�re s�n�rland���nda 
program 6.elemandan sonra otomatik olarak kendini durdurdu. i de�i�keninin t�r�n� for d�ng�s�n�n i�inde tan�mlam��t�m.
Fakat derlemede hata ald���m i�in en ba�ta tan�mlad�m, ve sorun ��z�ld�. Dizinin boyutunu ve dizinin elemanlar�n� kullan�c�ya b�rakt�m.
Kullan�c�dan ald���m de�eri a de�i�kenine atad�m. B�ylelikle dizinin boyutu, ka� elemanl� olaca�� kullan�c� taraf�ndan belirlenmi� oldu.
for d�ng�s� a�arak a elemanl� dizinin her i de�eri i�in kullan�c�dan de�er belirlemesini istedim.
0'dan ba�layan i de�i�keni artarak, a'dan b�y�k oldu�u anda for d�ng�s� tamamland� ve elemanlar yaz�ld��� s�rayla 
eleman[a] dizisinin i�ine scanf ile atanm�� oldu.
	Olu�an diziyi yine bir for d�ng�s� kullanarak ekrana yazd�rd�m. Tek for d�ng�s�nde yazmay� denedim ama d�ng� kendini 
her d�nd�rd���nde ekrana bir �ey yazd��� i�in olmas�n� istedi�im sonucu alamad�m. Bu y�zden ayr� ayr� for d�ng�leri 
kullanarak i�lemlerimi tamamlad�m.
	En b�y�k eleman� yazd�r�rken bir ka� kez yazd���m� de�i�tirmek zorunda kald�m. �lk yazd���m kod g�r�n�rde do�ru �al���yor gibiydi ama 
de�erler kar���k yaz�ld���nda en b�y�k de�eri yanl�� g�steriyordu. �kinci denemede olu�an tek sorun yaz�lan dizinin bozulmas�yd�. 
Yani en b�y�k de�er dizideki ilk elemana atan�yor ve b�ylelikle g�r�nmese bile kullan�c�n�n girdi�i ilk dizi bozuluyordu.
Bunu �nlemenin bir yolu olarak ba�lang�� de�erini max de�i�kenine atad�m. For d�ng�s� ile b�t�n elemanlar� gezip max de�i�keninin
k���k oldu�u durumlarda max'�n de�eri b�y�k olan i'ninci eleman�n de�eri ile e�le�ti. B�t�n elemanlar dola��ld�ktan sonra,
max'�n de�erinin en b�y�k oldu�u durum olu�tu ve dizide herhangi bir de�i�iklik olmadan bulunan de�er ekrana bas�ld�. 
Bu �ekilde kod �al��mas�n� do�ru bir �ekilde tamamlam�� oldu.
*/
