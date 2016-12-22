#include <conio.h>
#include <iostream.h>
#include <stdio.h>

siswa(float uts,float uas);
garis()

	{
	printf("\n\t=============\n");
	}
	main()
	{
	char nim[10],nama[20],ket[10],lagi;
	float a,b,rata;
	garis();
	cout<<"\n\t perhitungan nilai siswa"<<endl;
cout<<"\t";garis();
cout<<"\t masukan nim :";cin>>nim;                  
cout<<"\t masukan nama :";cin>>nama;
cout<<"\t nilai uts :";cin>>a;
cout<<"\t nilai uas   :";cin>>b;

rata=siswa(a,b);
printf("\n\t nilai rata-rata :%3.2f",rata);
if(rata>59)

strcpy(ket,"lulus");
else
strcpy(ket,"gagal");

cout<<"\n\t keterengan  :"<<ket<<endl;

getch();
	}
siswa(float uts,float uas)
	{
return((uts+uas)/2);
	}