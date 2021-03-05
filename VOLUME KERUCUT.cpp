#include<iostream>
using namespace std;
main()
{
	float volume, phi = 3.14;
	int r,t;
	cout<<"masukan jari-jari = ";
	cin>>r;
	cout<<"masukan tinggi kerucut = ";
	cin>>t;
	volume = (phi*r*r*t)/3;
	cout<<"volume kerucut adalah = "<<volume<<endl;
	return 0;
}
