#include <stdio.h>
#include <constrea.h>
#include <iomanip.h>
garis()
{
cout<<"\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
}


main()
{
int login;
int username,password;

login=1;
do{
clrscr();
garis();
cout<<"\n************Honda************";
garis();
cout<<"\nUser         :";cin>>username;
cout<<"\nPassword     :";cin>>password;

	if(username==12&&password==16)
	{
	goto exis;
	}

	else
	login=login+1;
}
while(login<=3);
cout<<"\nGagal login sebanyak 3x akun anda kami block";
cout<<"\nUntuk Keluar tekan [y] atau klik sembarang";

int keluar;
keluar=getche();
if(keluar=='Y'||keluar=='y')
{
goto exit;
}

else
{
goto exit;
}


int i,data,jumbel[5];
char nakas[20],lg;
char napem[20],kode[5],barang[5][20];
long int harga[5],total[5],tobay,ukem,ubay;
exis:
clrscr();
tobay=0;
cout<<"..... HONDA ....."<<endl;
garis();
cout<<"\nnama kasir \t:";gets(nakas);
cout<<"\nnama pembeli \t:";gets(napem);
cout<<"\nbanyak data \t:";cin>>data;
garis();
for(i=1;i<=data;i++)
{
cout<<"\ndata ke-:"<<i<<endl;
cout<<"\nkode barang [A/B/C] \t:";cin>>kode[i];
if (kode[i]=='A'||kode[i]=='a')
{
strcpy(barang[i],"busi");
harga[i]=12000;
}
else if (kode[i]=='B'||kode[i]=='b')
{
strcpy(barang[i],"aki");
harga[i]=300000;
}
else if (kode[i]=='C'||kode[i]=='c')
{
strcpy(barang[i],"kampas rem");
harga[i]=40000;
}
else
{
cout<<"tidak ditemukan"<<endl;
}
cout<<"\nnama barang \t:"<<barang[i]<<endl;
cout<<"\nharga barang \t:"<<harga[i]<<endl;
cout<<"\njumlah beli \t:";cin>>jumbel[i];cout<<endl;
total[i]=harga[i]*jumbel[i];
}
clrscr();
cout<<"\nnama pembeli :"<<napem<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"no kode barang nama barang jumlah beli harga     total"<<endl;
cout<<"-----------------------------------------------------"<<endl;
	 //1234567890123456789012345678901234567890123456789012345
for(i=1;i<=data;i++)
{
gotoxy(1,5+i);cout<<i;
gotoxy(9,5+i);cout<<kode[i];
gotoxy(17,5+i);cout<<barang[i];
gotoxy(33,5+i);cout<<jumbel[i];
gotoxy(40,5+i);cout<<harga[i];
gotoxy(50,5+i);cout<<total[i]<<endl;

tobay+=total[i];
}
cout<<"-----------------------------------------------------"<<endl;
cout<<"\t\t\t total bayar = Rp. "<<tobay<<endl;
cout<<"\t\t\t uang bayar  = Rp. ";cin>>ubay;
ukem=ubay-tobay;
cout<<"\t\t\t kembalian   = Rp. "<<ukem<<endl;
cout<<"ingin input data [Y/T] :" ;
lg = getche();
if(lg=='Y'||lg=='y')
goto exis;
getch();
exit:
}
