#include<iostream>
using namespace std;
main()
{
	float volume, phi = 3.14;
	int r,t;
	cout<<"masukan jari-jari lingkaran = ";
	cin>>r;
	cout<<"masukan tinggi tabung = ";
	cin>>t;
	volume = phi*r*r*t;
	cout<<"volume tabung adalah = "<<volume<<endl;
	return 0;
}
