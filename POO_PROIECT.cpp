#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

class Transport{
public:

    int nr;
    Transport()
    {
        nr=(892/50)+1;
    }
    int cost(int x)
    {
        int costul=nr*5680;

    }
};
class Cazare{
public:
    int nr_figuranti_caz;
    int nr_cast_caz;
    Cazare()
    {
        nr_figuranti_caz=(123/3)+1;
        nr_cast_caz=(869/2)+1;
    }
    int cost(int x,int y)
    {
        int costul=(nr_figuranti_caz*420)+(nr_cast_caz*350);

    }


};
class Machiaj{
public:
    int nr_machiaje_vampiri;
    int nr_machiaje_varcolaci;
    int nr_machiaje_sirene;
    int nr_machiaje_clarvazatori;
    int nr_machiaje_om;
    Machiaj()
    {
        nr_machiaje_vampiri=45;
        nr_machiaje_varcolaci=35;
        nr_machiaje_sirene=25;
        nr_machiaje_clarvazatori=35;
        nr_machiaje_om=40;
    }
    int cost(int x,int y,int z,int t,int k)
    {
        int costul=(nr_machiaje_vampiri*230)+(nr_machiaje_varcolaci*555)+(nr_machiaje_sirene*345)+(nr_machiaje_clarvazatori*157)+(nr_machiaje_om*55);

    }

};
class Mancare{
public:
    int nr_orice;
    int nr_veg;
    int nr_peste;
    Mancare()
    {
        nr_orice=700;
        nr_peste=92;
        nr_veg=100;
    }
    int cost(int x,int y,int z)
    {
        int costul=(nr_orice*40)+(nr_veg*33)+(nr_peste*46);

    }

};
class Bautura{
public:
    int nr_apa;
    int nr_cafea;
    int nr_suc;
    Bautura()
    {
        nr_apa=3;
        nr_cafea=15;
        nr_suc=3;
    }
    int cost(int x,int y,int z)
    {
        int costul=(nr_apa+nr_cafea+nr_suc)*892;

    }



};

int main()
{
int nr;
int nr_figuranti_caz,nr_cast_caz;
int nr_machiaje_vampiri,nr_machiaje_varcolaci,nr_machiaje_sirene,nr_machiaje_clarvazatori,nr_machiaje_om;
int nr_orice,nr_veg,nr_peste;
int nr_apa,nr_cafea,nr_suc;
float dolar=4.64;
int zile1=30;
int zile2=45;
int zile3=60;
int zile4=100;
 Transport autocar;
 Cazare caz;
 Machiaj makeup;
 Mancare hrana;
 Bautura lichid;
    fstream primul( "file1.csv", ios::app );
    fstream al_doilea("file2.csv",ios::out);
    fstream al_treilea("file3.csv",ios::out);


    srand(time(0));
    string Nume;
    string second[4]={"John","Angel","Mathews","Andrew"};
    string third[5]={"Maria","Stockton","Dimah","Conan","Rapunzel"};
    string fourth[4]={"Supa de legume","Ciorba de burta","Ciorbade vacuta","Supa de perisoare"};
    string fifth[5]={"Paste carbonara","Pizza quattro stagioni","Gujoane de pui","Pastrav","Amestec mexican"};
    string sixth[5]={"Lava cake","Tiramisu","Tarta de cirese","Negresa","Banane flambate"};
    for(int i=0;i<122;i++){
    Nume=second[rand() % 4]+" "+third[rand() % 5];
    primul<<Nume<<","<<"figurand"<<"\n";
    }
    float cost_autocar1=autocar.cost(nr)*zile1/dolar;
    float cost_caz1=caz.cost(nr_figuranti_caz,nr_cast_caz)*zile1/dolar;
    float cost_makeup1=makeup.cost(nr_machiaje_vampiri,nr_machiaje_varcolaci,nr_machiaje_sirene,nr_machiaje_clarvazatori,nr_machiaje_om)*zile1/dolar;
    float cost_hrana1=hrana.cost(nr_orice,nr_veg,nr_peste)*zile1/dolar;
    float cost_lichid1=(lichid.cost(nr_apa,nr_cafea,nr_suc)/2*6)*zile1/dolar;
    float cost_chirie1=(10000*zile1-zile1/10*(10/100)*10000*zile1)/dolar;
    float cost_autocar2=autocar.cost(nr)*zile2/dolar;
    float cost_caz2=caz.cost(nr_figuranti_caz,nr_cast_caz)*zile2/dolar;
    float cost_makeup2=makeup.cost(nr_machiaje_vampiri,nr_machiaje_varcolaci,nr_machiaje_sirene,nr_machiaje_clarvazatori,nr_machiaje_om)*zile2/dolar;
    float cost_hrana2=hrana.cost(nr_orice,nr_veg,nr_peste)*zile2/dolar;
    float cost_lichid2=lichid.cost(nr_apa,nr_cafea,nr_suc)*zile2/dolar;
    float cost_chirie2=(10000*zile2-zile2/10*(10/100)*10000*zile2)/dolar;
    float cost_autocar3=autocar.cost(nr)*zile3/dolar;
    float cost_caz3=caz.cost(nr_figuranti_caz,nr_cast_caz)*zile3/dolar;
    float cost_makeup3=makeup.cost(nr_machiaje_vampiri,nr_machiaje_varcolaci,nr_machiaje_sirene,nr_machiaje_clarvazatori,nr_machiaje_om)*zile3/dolar;
    float cost_hrana3=hrana.cost(nr_orice,nr_veg,nr_peste)*zile3/dolar;
    float cost_lichid3=lichid.cost(nr_apa,nr_cafea,nr_suc)*zile3/dolar;
    float cost_chirie3=(10000*zile3-zile3/10*(10/100)*10000*zile3)/dolar;
    float cost_autocar4=autocar.cost(nr)*zile4/dolar;
    float cost_caz4=caz.cost(nr_figuranti_caz,nr_cast_caz)*zile4/dolar;
    float cost_makeup4=makeup.cost(nr_machiaje_vampiri,nr_machiaje_varcolaci,nr_machiaje_sirene,nr_machiaje_clarvazatori,nr_machiaje_om)*zile4/dolar;
    float cost_hrana4=hrana.cost(nr_orice,nr_veg,nr_peste)*zile4/dolar;
    float cost_lichid4=lichid.cost(nr_apa,nr_cafea,nr_suc)*zile4/dolar;
    float cost_chirie4=(10000*zile4-zile4/10*(10/100)*10000*zile4)/dolar;
    al_doilea<<"Perioada de zile: "<<","<<zile1<<","<<zile2<<","<<zile3<<","<<zile4<<endl;
    al_doilea<<"Transport: "<<","<<(int)cost_autocar1<<"$"<<","<<(int)cost_autocar2<<"$"<<","<<(int)cost_autocar3<<"$"<<","<<(int)cost_autocar4<<"$"<<endl;
    al_doilea<<"Cazare: "<<","<<(int)cost_caz1<<"$"<<","<<(int)cost_caz2<<"$"<<","<<(int)cost_caz3<<"$"<<","<<(int)cost_caz4<<"$"<<endl;
    al_doilea<<"Machiaj: "<<","<<cost_makeup1<<"$"<<","<<cost_makeup2<<"$"<<","<<cost_makeup3<<"$"<<","<<cost_makeup4<<"$"<<endl;
    al_doilea<<"Mancare: "<<","<<cost_hrana1<<"$"<<","<<cost_hrana2<<"$"<<","<<cost_hrana3<<"$"<<","<<cost_hrana4<<"$"<<endl;
    al_doilea<<"Bautura: "<<","<<cost_lichid1<<"$"<<","<<cost_lichid2<<"$"<<","<<cost_lichid3<<"$"<<","<<cost_lichid4<<"$"<<endl;
    al_doilea<<"Chirie: "<<","<<cost_chirie1<<"$"<<","<<cost_chirie2<<"$"<<","<<cost_chirie3<<"$"<<","<<cost_chirie4<<"$"<<endl;
    al_treilea<<"Meniu"<<endl;
    al_treilea<<"Zi"<<","<<"Supa/Ciorba"<<","<<"Fel Principal"<<","<<"Desert"<<endl;
    for(int i=1;i<=3;i++)
    {
        al_treilea<<"ziua"<<i<<","<<fourth[rand() % 4]<<","<<fifth[rand() % 5]<<","<<sixth[rand()%5]<<endl;
    }

    primul.close();
    al_doilea.close();
    al_treilea.close();



    return 0;
}
