 //Написати програму для знаходження обсягу і температури в посудині.
#include <iostream>
#include <iomanip>
using namespace std;
 int main() 
{
	//Оголошуєм змінні
	//Змінюєм v1,v2,v3,t1,t2,t3 на a,b,c,d,g,h;
	int a,b,c,d,g,h,obem,temperatura;
	//Виводимо повідомлення для користувача
	cout <<"Vvedit chisla ";
	//Заносимо дані які ввели
	cin>>a>>b>>c>>d>>g>>h;
	obem=a+b+c;
    temperatura=(a*b*c+d*g*h)/obem;
    //Заносимо дані які ввів користувач в змінну
    int resultat_obema,resultat_temperatyru;
    //Виводимо результат праграми
    //Вивід в десятковій системі
    cout<<"Obem stanovut v decatcovi="<<obem<<endl;
    cout<<setbase(10)<<obem<<endl;
    //Вивід в вісімковій системі
    cout<<"Obem stanovut v visimcovi="<<obem<<endl;
    cout<<setbase(8)<<obem<<endl;
    //Вивід в шістнадцятковій системі
    cout<<"Obem stanovut v shitnadcatcovi="<<obem<<endl;
    cout<<setbase(16)<<obem<<endl;
    //Вивід в десятковій системі
    cout<<"Temperatyra stanovut v decatcovi="<<temperatura<<endl;
    cout<<setbase(10)<<temperatura<<endl;
    //Вивід в вісімковій системі
    cout<<"Temperatyra stanovut v visimcovi="<<temperatura<<endl;
    cout<<setbase(8)<<temperatura<<endl;
    //Вивід в шістнадцятковій системі
    cout<<"Temperatyra stanovut v shitnadcatcovi ="<<temperatura<<endl;
    cout<<setbase(16)<<temperatura<<endl;
    return 0;
}






