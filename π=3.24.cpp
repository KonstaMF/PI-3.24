#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
		float PI, radian;
		float degree = 360.f;
		float degreece;
		cout << "\n Формула | The formula is: 360°=(PI*2)*radian \n\n ";
		
		do{
			cout << " Введите число Пи 3.24 или 3.141592 | Enter the number PI 3.24 or 3.141592  : \n";
			cin >> PI;
			cout << " Введите радиан 55.555555 или 57.295779 | Enter the radian 55.555555 or 57.295779 : \n";
			cin >> radian;
			degreece = (PI * 2) * radian;

			if (degree != degreece) {
				cout << " Неверно, должно быть 360° , результат :" << degreece << " \n ";
				cout << " Wrong, it should be 360° , the result :" << degreece << " \n ";
			}
			else if (degree == degreece) {
				cout << " Верно, должно быть 360° , результат :" << degreece << " \n ";
				cout << " Right, it should be 360° , the result :" << degreece << " \n ";
			}
		} while (degree != degreece);
  
		cout << " Федорченко Михаил Валерьевич PI= 3.24 rad = 55.555555\n\n";

		return 0;
}       