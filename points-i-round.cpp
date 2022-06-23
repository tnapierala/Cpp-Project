// zagrajSAM.pl

var wynik1=new Array(4);
var stan_gracza=new Array(4);
for(i=0;i<4;i++) wynik1[i]=new Array(16);
for(j=0;j<4;j++)
{
stan_gracza[j]=0;
	for(i=0;i<14;i++) wynik1[j][i]=-1;
wynik1[j][14]=0;
}
var opis=new Array("(111**) [punkty:1*liczba jedynek]","(222**) [punkty:2*liczba dwójek]","(333**)  [punkty:3*liczba trójek]","(444**) [punkty:4*liczba czwórek]","(555**) [punkty:5*liczba piątek]","(666**) [punkty:6*liczba szóstek]","BONUS: suma oczek w polach 1..6 >=63","(AAA**) [punkty:liczba oczek]","(AAAA*) [punkty:liczba oczek]","(AAABB) [punkty:25]","(1234/2345/3456) [punkty:30]","(12345/23456) [punkty:40]","(AAAAA)  [punkty:50]","(dowolny)  [punkty:liczba oczek]","");
var nazwy=new Array("1","2","3","4","5","6","bonus","trójka","kareta","full","mały strit","duży strit","poker","szansa","suma");
var tura=1;
var funkcje_sum=new Array("sum_cyfry(1)","sum_cyfry(2)","sum_cyfry(3)","sum_cyfry(4)","sum_cyfry(5)","sum_cyfry(6)","", "sum_fig(3)" ,"sum_fig(4)","sum_ful()","sum_strit(0)","sum_strit(1)","sum_poker()","sum_szansa()", "");
var kosc=new Array(0,0,0,0,0);
il_rzut=0;
var gracze=1;
var suma_pom = new Array(6);
var strona=0;


for(j=0;j<gracze;j++)
	stan_gracza[j]=1;


function Zamien(arg)
{
if(il_rzut<3)
{
kosc[arg]=-kosc[arg];
if(kosc[arg]>0)
document["kosc_"+arg].src = "obrazki/kostki/kostka"+kosc[arg]+".png";
else document["kosc_"+arg].src = "obrazki/kostki/kostka0.png";
}
}


function Rzut()
{
if(il_rzut<3)
{
zmiana=0;
for(arg=0;arg<5;arg++)
if(kosc[arg]<=0)
{
zmiana=1;
n=Math.floor(Math.random()*1000*6);
n-=Math.floor(n/6)*6;
 kosc[arg]=1+n;
 document["kosc_"+arg].src = "obrazki/kostki/kostka"+kosc[arg]+".png";
}
if(zmiana)  // jeśli zaznaczono kość do zmiany
{
il_rzut++;
document["tura_"+il_rzut].src = "obrazki/0d"+gfx_ext;
}
}
}

function nowy_rzut()
{
pom=0;
if(strona==gracze-1)
{
for(i_arg=0;i_arg<14;i_arg++)
  if(i_arg!=6&&wynik1[strona][i_arg]<0) pom=1;
}
else pom=1;

if(pom)
for(i_arg=1;i_arg<4;i_arg++)
	document["tura_"+i_arg].src = "obrazki/10"+gfx_ext;
for(i_arg=0;i_arg<5;i_arg++)
{
	kosc[i_arg]=0;
	document["kosc_"+i_arg].src = "obrazki/kostki/kostka0"+gfx_ext;
}
il_rzut=0;
if(!pom)
{
stan_gracza[strona]=0;
tura=0;
//for(i_arg=0;i_arg<gracze;i_arg++) if(stan_gracza[i_arg]) tura=1;
//if(tura==0)
{
if(gracze>1)
{
il_rzut=0;  // wykorzystaj najpierw do znalezienia max
il_rzut=wynik1[0][14];
pom=1;
remis=0;
for(i_arg=1;i_arg<gracze;i_arg++)
	if(il_rzut<	wynik1[i_arg][14])
		{
		il_rzut=wynik1[i_arg][14];
		pom=i_arg+1;
		remis=0;
		}
	else if (il_rzut==	wynik1[i_arg][14]) remis=1;
wynik=il_rzut;
if(remis) alert("Gra skończyła się remisem.");
else alert ("Wygrał Gracz"+pom+" z wynikiem: "+il_rzut);
ZapiszRekord(kod_gry,wynik)
}
else
{
wynik=wynik1[strona][14];
if (ZapiszRekord(kod_gry,wynik)==1) setTimeout("alert(\"NOWY REKORD.\")",500);
else  alert("Koniec gry.");
}
AktualizujWynik(top_scr[0],'rekord',3);
il_rzut=4;
pom=0;
}
}

strona++;
document["gracz_"+strona].src = "obrazki/0d"+gfx_ext;
if(strona>= gracze) strona=0;
if(pom)  document["gracz_"+(strona+1)].src = "obrazki/10"+gfx_ext;
}



function bonus()
{
if(wynik1[strona][6]<0)
{
sum=0;
wolny=0;
for(i_arg=0;i_arg<6;i_arg++)
{
	if(wynik1[strona][i_arg]<0) wolny=1;
	if(wynik1[strona][i_arg]>0) sum+=wynik1[strona][i_arg];
}

if(sum>62) sum=35;
else sum=0;
if(sum||!wolny)
{
  wynik1[strona][6]=sum;
  wynik1[strona][14]+=sum;
  document.forms[1+strona+6*gracze].elements[0].value=sum;
  document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
 }
}
}


function dodatnie()    // zamienia kości <0 na dodatnie (przy obróconych)
{
for(i_sum=0;i_sum<6;i_sum++) if(kosc[i_sum]<0) kosc[i_sum]=-kosc[i_sum];
}

//  ***********************    FUNKCJE SUMUJĄCE POLA   **********************

function sum_cyfry(arg)
{
if(il_rzut&&tura && wynik1[strona][arg-1]<0)
{
dodatnie();
sum=0;
for(i_sum=0;i_sum<5;i_sum++) if(kosc[i_sum]==arg) sum++;
sum*=arg;
wynik1[strona][arg-1]=sum;
wynik1[strona][14]+=sum;
document.forms[1+strona+(arg-1)*gracze].elements[0].value=sum;
document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
bonus();
nowy_rzut();
}
}

function sum_fig(arg)
{
if(il_rzut&&tura &&wynik1[strona][arg+4]<0)
{
dodatnie();
sum=0;
for(i_sum=0;i_sum<6;i_sum++)
	suma_pom[i_sum]=0;
for(i_sum=0;i_sum<5;i_sum++)
	sum-=kosc[i_sum];


for(i_sum=0;i_sum<5;i_sum++) suma_pom[kosc[i_sum]-1]++;
for(i_sum=0;i_sum<6;i_sum++)
		if(suma_pom[i_sum]>=arg) sum=-sum;

if(sum<0) sum=0;
wynik1[strona][4+arg]=sum;
wynik1[strona][14]+=sum;
document.forms[1+strona+(arg+4)*gracze].elements[0].value=sum;
document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
nowy_rzut();
}
}

function sum_ful()
{
if(il_rzut&&tura && wynik1[strona][9]<0)
{
dodatnie();
sum=1;
for(i_sum=0;i_sum<6;i_sum++)
	suma_pom[i_sum]=0;
for(i_sum=0;i_sum<5;i_sum++) suma_pom[kosc[i_sum]-1]++;
for(i_sum=0;i_sum<6;i_sum++) if(suma_pom[i_sum]) sum*=suma_pom[i_sum];

if(sum==5||sum==6) sum=25;
else sum=0;

wynik1[strona][9]=sum;
wynik1[strona][14]+=sum;
document.forms[1+strona+9*gracze].elements[0].value=sum;
document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
nowy_rzut();
}
}

function sum_strit(arg)
{
if(il_rzut&&tura && wynik1[strona][10+arg]<0)
{
dodatnie();
sum=0;
pocz=0;
licz=0;
for(i_sum=0;i_sum<6;i_sum++)
	suma_pom[i_sum]=0;
for(i_sum=0;i_sum<5;i_sum++)
	suma_pom[kosc[i_sum]-1]=1;
for(i_sum=0;i_sum<6;i_sum++)
{
	if(suma_pom[i_sum]&&pocz==0) pocz=i_sum;
	if(suma_pom[i_sum]) licz++;
	else if(licz<4)
	{
	 licz=0;
	 pocz=0;
	 }
}
if(licz>3+arg) sum=30+10*arg;
wynik1[strona][10+arg]=sum;
wynik1[strona][14]+=sum;
document.forms[1+strona+(10+arg)*gracze].elements[0].value=sum;
document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
nowy_rzut();
}
}

function sum_poker()
{
if(il_rzut&&tura)
{
dodatnie();
sum=kosc[0];
for(i_sum=1;i_sum<5;i_sum++) if(kosc[i_sum]!=sum) sum=0;
if(sum) sum=50;
if((sum&&wynik1[strona][12]!=0)||(!sum&&wynik1[strona][12]<0))
{
if(wynik1[strona][12]<0) wynik1[strona][12]=sum;
else wynik1[strona][12]+=sum;
wynik1[strona][14]+=sum;
document.forms[1+strona+12*gracze].elements[0].value=wynik1[strona][12];
document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
nowy_rzut();
}
}
}


function sum_szansa()
{
if(il_rzut&&tura && wynik1[strona][13]<0)
{
dodatnie();
sum=0;
for(i_sum=0;i_sum<5;i_sum++) sum+=kosc[i_sum];
wynik1[strona][13]=sum;
wynik1[strona][14]+=sum;
document.forms[1+strona+13*gracze].elements[0].value=sum;
document.forms[1+strona+14*gracze].elements[0].value=wynik1[strona][14];
nowy_rzut();
}
}



//  ********************    KONIEC FUNKCJi SUMUJĄCYCH   ********************








var kod_gry='gra_18';


