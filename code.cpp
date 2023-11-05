#include <iostream>
#include <limits.h>
//#include "graphics.h"
#include<string.h>
#define V 38
#define INFINITY 9999
#include<unistd.h>
using namespace std;

void mainMenu();
void graph();

void title()
{
	system("cls");
	cout<<"\n\n\n\n\t\t\t\t-*-*-*-*-*-*-*-*-*-\n\n";
	cout<<"\t\t\t\t\tRIDOOO\n\n";
	cout<<"\t\t\t\t-*-*-*-*-*-*-*-*-*-\n\n";
}

string districtPath(int dis)
{
	string pt;
	if(dis==0)
		pt = "Kanyakumari";
	else if(dis==1)
		pt = "Tirunelveli";
	else if(dis==2)
		pt = "Toothukudi";
	else if(dis==3)
		pt = "Thenkasi";
	else if(dis==4)
		pt = "Virudhunagar";
	else if(dis==5)
		pt = "Ramanathapuram";
	else if(dis==6)
		pt = "Theni";
	else if(dis==7)
		pt = "Madurai";
	else if(dis==8)
		pt = "Sivagangai";
	else if(dis==9)
		pt = "Dindugal";
	else if(dis==10)
		pt = "Pudukottai";
	else if(dis==11)
		pt = "Tanjore";
	else if(dis==12)
		pt = "Tiruvarur";
	else if(dis==13)
		pt = "Nagapattinam";
	else if(dis==14)
		pt = "Tirupur";
	else if(dis==15)
		pt = "Coimbatore";
	else if(dis==16)
		pt = "Trichirapalli";
	else if(dis==17)
		pt = "Karur";
	else if(dis==18)
		pt = "Nilgiris";
	else if(dis==19)
		pt = "Erode";
	else if(dis==20)
		pt = "Namakal";
	else if(dis==21)
		pt = "Perambalur";
	else if(dis==22)
		pt = "Ariyalur";
	else if(dis==23)
		pt = "Mayiladuthurai";
	else if(dis==24)
		pt = "Salem";
	else if(dis==25)
		pt = "Cuddlore";
	else if(dis==26)
		pt = "Darmapuri";
	else if(dis==27)
		pt = "Kallakurchi";
	else if(dis==28)
		pt = "Krishnagiri";
	else if(dis==29)
		pt = "Vilupuram";
	else if(dis==30)
		pt = "Tirupatur";
	else if(dis==31)
		pt = "Tiruvanamalai";
	else if(dis==32)
		pt = "Chengalpattu";
	else if(dis==33)
		pt = "Vellore";
	else if(dis==34)
		pt = "Ranipet";
	else if(dis==35)
		pt = "Kanchipuram";
	else if(dis==36)
		pt = "Chennai";
	else if(dis==37)
		pt = "Tiruvallur";

	return pt;

}

int districtNum(string dis)
{
	if(dis=="Kanyakumari" || dis=="kanyakumari" || dis=="KANYAKUMARI")
		return 0;
	else if(dis=="Tirunelveli" || dis=="trinelveli" || dis=="TRINELVELI")
		return 1;
	else if(dis==" Toothukudi" || dis=="toothukudi" || dis=="TOOTHUKUDI")
		return 2;
	else if(dis=="Thenkasi" || dis=="thenkasi" || dis=="THENKASI")
		return 3;
	else if(dis=="Virudhunagar" || dis=="virudhunagar" || dis=="VIRUDHUNAGAR")
		return 4;
	else if(dis=="Ramanathapuram" || dis=="ramanathapuram" || dis=="RAMANATHAPURAM")
		return 5;
	else if(dis=="Theni" || dis=="theni" || dis=="THENI")
		return 6;
	else if(dis=="Madurai" || dis=="madurai" || dis=="MADURAI")
		return 7;
	else if(dis=="Sivagangai" || dis=="sivagangai" || dis=="SIVAGANGAI")
		return 8;
	else if(dis=="Dindugal" || dis=="dindugal" || dis=="DINDUGAL")
		return 9;
	else if(dis=="Puthukotai" || dis=="puthukotai" || dis=="PUTHUKOTAI")
		return 10;
	else if(dis=="Tanjore" || dis=="tanjore" || dis=="TANJORE")
		return 11;
	else if(dis=="Tiruvarur" || dis=="tiruvarur" || dis=="TIRUVARUR")
		return 12;
	else if(dis=="Nagapattinam" || dis=="nagapattinam" || dis=="NAGAPATTINAM")
		return 13;
	else if(dis=="Tirupur" || dis=="tirupur" || dis=="TIRUPUR")
		return 14;
	else if(dis=="Coimbatore" || dis=="coimbatore" || dis=="COIMBATORE")
		return 15;
	else if(dis=="Trichirapalli" || dis=="trichirapalli" || dis=="TRICHIRAPALLI")
		return 16;
	else if(dis=="Karur" || dis=="karur" || dis=="KARUR")
		return 17;
	else if(dis==" Nilgiris" || dis=="nilgiris" || dis=="NILGIRIS")
		return 18;
	else if(dis=="Erode" || dis=="erode" || dis=="ERODE")
		return 19;
	else if(dis=="Namakal" || dis=="namakal" || dis=="NAMAKAL")
		return 20;
	else if(dis=="Perambalur" || dis=="perambalur" || dis=="PERAMBALUR")
		return 21;
	else if(dis=="Ariyalur" || dis=="ariyalur" || dis=="ARIYALUR")
		return 22;
	else if(dis=="Mayiladuthurai" || dis=="mayiladuthurai" || dis=="MAYILADUTHURAI")
		return 23;
	else if(dis=="Salem" || dis=="salem" || dis=="SALEM")
		return 24;
	else if(dis=="Cuddlore" || dis=="cuddlore" || dis=="CUDDLORE")
		return 25;
	else if(dis=="Darmapuri" || dis=="darmapuri" || dis=="DARMAPURI")
		return 26;
	else if(dis=="Kallakurchi" || dis=="kallakurchi" || dis=="KALLAKURCHI")
		return 27;
	else if(dis=="Krishnagiri" || dis=="krishnagiri" || dis=="KRISHNAGIRI")
		return 28;
	else if(dis=="Vilupuram" || dis=="vilupuram" || dis=="VILUPURAM")
		return 29;
	else if(dis=="Tirupatur" || dis=="tirupatur" || dis=="TIRUPATUR")
		return 30;
	else if(dis=="Tiruvanamalai" || dis=="tiruvanamalai" || dis=="TIRUVANAMALAI")
		return 31;
	else if(dis=="Chengalpattu" || dis=="chengalpattu" || dis=="CHENGALPATTU")
		return 32;
	else if(dis=="Vellore" || dis=="vellore" || dis=="VELLORE")
		return 33;
	else if(dis=="Ranipet" || dis=="ranipet" || dis=="RANIPET")
		return 34;
	else if(dis=="Kanchipuram" || dis=="kanchipuram" || dis=="KANCHIPURAM")
		return 35;
	else if(dis=="Chennai" || dis=="chennai" || dis=="CHENNAI")
		return 36;
	else if(dis=="Tiruvallur" || dis=="tiruvallur" || dis=="TIRUVALLUR")
		return 37;
}

struct Node {
	int data;
	Node* right=NULL, *down=NULL;
};

Node* initialize(int a,void *x,int i,int j,int m, int n)
{
	int (*district)[m] = static_cast<int (*)[m]>(x);
	if (i > n - 1 || j > m - 1)
		return NULL;

	Node* temp = new Node();
	temp->data = district[i][j];
	temp->right = initialize(a,district, i, j + 1, m, n);
	temp->down = initialize(a,district, i + 1, j, m, n);
	return temp;
}

void display(Node* head)
{
	Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			Rp = Rp->right;
		}

	}
	cout << "\n";
	while(Dp){
	    while (Rp) {
			Dp = Dp->down;
		}
	}
}

int famNum(string place)
{
	int val;
    if(place == "Tiruvallur statue")
    {
        val=1;
    }
    else if(place == "Tiruchendur beach")
    {
         val=3;
    }
     else if(place == "Pilavakkal dam")
     {
         val=5;
     }
    else if( place == "Dr. APJ Memorial")
    {
       val=6;
    }
    else if(place == "Meenakshi Amman Temple")
    {
        val=8;
    }
    else if(place == "Kodaikanal")
    {
        val=10;
    }
    else if(place == "AADI YOGI")
    {
        val=16;
    }
    else if(place=="Rock Fort")
    {
        val=17;
    }
    else if(place=="Tanjavur Periya Temple")
    {
         val=12;
    }
    else if(place == "Ooty boat house")
    {
        val=19;
    }
    else if( place == "Yercaud Lake")
    {
         val=25;
    }
    else if(place == "Silver Beach")
    {
         val=26;
    }
    else if(place == "Virupaksha cave")
    {
         val=32;
    }
    else if(place == "Golden Temple")
    {
        val=30;
    }
    else if( place == "Varadaraja Perumal Temple")
    {
        val=36;
    }
    else if(place == "Marina Beach")
    {
         val=37;
    }
    else
    {
        val=0;
    }
    return val;
}


string famousPlace(string path)
{
	string place;
	if(path=="Kanya kumari")
	{
        place = "Tiruvallur statue";
	}
	else if(path=="Toothukudi")
    {
       place = "Tiruchendur beach";
    }
	else if(path=="Virudhunagar")
    {
        	place = "Pilavakkal dam";
    }
	else if(path=="Ramanathapuram")
    {
        place = "Dr. APJ Memorial";
    }
	else if(path=="Madurai")
    {
        place = "Meenakshi Amman Temple";
    }
	else if(path=="Dindugal")
        {
           place = "Kodaikanal";
        }
	else if(path=="Coimbatore")
    {
        place = "AADI YOGI";
    }
	else if(path == "Trichirapalli")
    {
        place="Rock Fort";
    }
	else if(path == "Tanjore")
    {
        place="Tanjavur Periya Temple";
    }
	else if(path == "Nilgiris")
    {
        place = "Ooty boat house";
    }
	else if(path == "Salem")
    {
        place = "Yercaud Lake";
    }
	else if(path =="Cuddlore")
    {
        place = "Silver Beach";
    }
	else if(path == "Tiruvanamalai")
	{
	    place = "Virupaksha cave";
	}
	else if(path == "Vilupuram")
    {
        place = "Golden Temple";
    }
	else if(path =="Kanchipuram")
    {
        place = "Varadaraja Perumal Temple";
    }
	else if(path == "Chennai")
    {
        place = "Marina Beach";
    }
	else
    {
        place ="";
    }

	return place;

}


string famPlace(int val)
{
    string place;
    if(val==2)
    {
        place = "Tiruvallur statue";

    }
    else if(val==4)
    {
        place = "Tiruchendur beach";

    }
     else if(val==6)
     {
         place = "Pilavakkal dam";
     }
    else if(val==7 )
    {
        place = "Dr. APJ Memorial";

    }
    else if(val==9)
    {
        place = "Meenakshi Amman Temple";

    }
    else if( val==11)
    {
        place = "Kodaikanal";

    }
    else if(val==17)
    {
        place = "AADI YOGI";

    }
    else if( val==18)
    {
        place="Rock Fort";

    }
    else if( val==13)
    {
        place="Tanjavur Periya Temple";

    }
    else if( val==20)
    {
        place ="Ooty boat house";

    }
    else if( val==26)
    {
        place ="Yercaud Lake";

    }
    else if( val==27)
    {
        place = "Silver Beach";

    }
    else if(val==33)
    {
        place ="Virupaksha cave";

    }
    else if( val==31)
    {
        place = "Golden Temple";

    }
    else if(val==37 )
    {
        place ="Varadaraja Perumal Temple";

    }
    else if(val==38)
    {
        place ="Marina Beach";

    }
    else
    {
        place="";
    }
    return place;
}

void placesToVisit(int a,int m,void *x)
{
    int (*district)[m] = static_cast<int (*)[m]>(x);
    for(int i=0;i<a;i++)
    {
        district[1][i]+=1;;
    }
    for(int i=0;i<a;i++)
    {
        cout<<districtPath(district[0][i])<<" -> "<<famPlace(district[1][i]);
        cout<<endl;
    }
}

void linkedDistrict(string pathDistrict[],int a)
{
	string loc;
	int district[2][a]={0};
		for(int i=0;i<a;i++)
		{
		    district[0][i] = districtNum(pathDistrict[i]);
		}
		for(int j=0;j<a;j++)
		{
		    string  num = famousPlace(pathDistrict[j]);
			district[1][j]=famNum(num);
		}

		cout<<"\t\tFAMOUS PLACES YOU NEED TO VISIT\n\n";
		for(int i=0;i<a;i++)
        {

            cout<<pathDistrict[i]<<" -> "<<famousPlace(pathDistrict[i]);
            cout<<endl;
        }
       	string op;
		cout<<"\n\nWANNA SWITCH TO MAIN MENU ?\n";
		cin>>op;
		if(op=="yes")
        	mainMenu();

	Node* head = initialize(a,district,0,0,2,a);
	display(head);
	cout<<endl;

}

void pathplace(int path[],int a)
{
	int count=0;
	cout<<endl<<endl;
	for(int i=0;i<V;i++)
	{
		if(path[i]!=0)
		{
			count+=1;
		}
	}
	string district[count+1];
	for(int i=0;i<a;i++)
	{
		district[i]=districtPath(path[i]);
	}
	linkedDistrict(district,a);

}

void bill(int distance,string prefer,string fam,int people)
{
	float split;
	int tot=distance*24;
	string op;
	cout<<endl<<endl;
	cout<<endl<<endl;

	if(fam=="yes"||fam=="YES")
	{
	if(prefer == "A/C" || prefer == "a/c" || prefer =="ac" || prefer =="AC")
		cout<<"Dear coustomer you are asked to pay the bill of Rs. "<<tot*2;
	else
		cout<<"Dear coustomer you are asked to pay the bill of Rs. "<<tot;
	cout<<endl<<endl;
	}

	else
	{
		if(prefer == "A/C" || prefer == "a/c" || prefer =="ac" || prefer =="AC")
			tot*=2;
		split=tot/people;
		cout<<"Each individual is asked to pay Rs. "<<split;
	}
	cout<<endl<<endl;
	cout<<endl<<endl;
	cout<<"\t\tDEAR User do you wanna check out some famous places all the way you go....!!!\n";
	cin>>op;
	system("cls");
}


void dijkstra(int districts[V][V],int n,string fDistrict,string tDistrict,string prefer,string fam,int people) {

   int startnode=districtNum(fDistrict);
   int x=districtNum(tDistrict);

   int cost[V][V],distance[V],pred[V];
   int visited[V],count,mindistance,nextnode,i,j;

   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
   if(districts[i][j]==0)
      cost[i][j]=INFINITY;
   else
      cost[i][j]=districts[i][j];


   for(i=0;i<n;i++)
    {
      distance[i]=cost[startnode][i];
      pred[i]=startnode;
      visited[i]=0;
   }

   distance[startnode]=0;
   visited[startnode]=1;
   count=1;

   while(count<n-1) {
      mindistance=INFINITY;
      for(i=0;i<n;i++)
      {

         if(distance[i]<mindistance&&!visited[i])
		  {
        	 mindistance=distance[i];
         		nextnode=i;
      	}
  	  }

      visited[nextnode]=1;

      for(i=0;i<n;i++)
      {
         if(!visited[i])
      		if(mindistance+cost[nextnode][i]<distance[i])
			{
         		distance[i]=mindistance+cost[nextnode][i];
         		pred[i]=nextnode;
      		}
      }
      count++;
   }

   string dis;
   int path[38],a=0;
   if(i!=startnode) {
   	  cout<<endl<<endl;
      cout<<"\nDistance from "<<fDistrict<<" and "<<tDistrict<< " is "<<distance[x]<<" km";
      dis=districtPath(x);
      cout<<"\n\n\nPath = "<<dis;
      path[0]=x;
      a=1;
     for(i=0;i<=x;i++)
     if(i!=startnode)
      j=i;
      do {
         j=pred[j];
         if(j!=startnode)
         {
             path[a]=j;
             a++;
         }

         dis=districtPath(j);
         cout<<"<-"<<dis;
      }while(j!=startnode);
   }
    //graph();
   string op;
   cout<<endl<<endl;

   cout<<"Wanna check your bill ? ";
   cin>>op;
   system("cls");
   if(op=="yes")
   {
   		bill(distance[x],prefer,fam,people);
   }
   pathplace(path,a);
}

void recheck(string name,string fDistrict,string tDistrict,int people,string date,string prefer,int districts[V][V],string fam)
{
	system("cls");
	cout<<"Dear "<<name<<" this is the recheck of the details which you entered\n\n";
	cout<<endl<<endl;
	cout<<"\t\tTHE FROM DISTRICT IS "<<fDistrict;
	cout<<endl<<endl;
	cout<<"\t\tTHE TO DISTRICT IS "<<tDistrict;
	cout<<endl<<endl;
	cout<<"\t\tNO OF PEOPLE TRAVELLING IS "<<people;
	cout<<endl<<endl;
	cout<<"\t\tTHE DATE ON WHICH YOU ARE TRAVELLING IS "<<date;
	cout<<endl<<endl;
	cout<<"\t\tTHE PREFERABLE A/C OR Non A/C IS "<<prefer;
	cout<<endl<<endl;

	int  st,end;
	string op;
	cout<<endl<<endl;
	cout<<"\t\tWANT TO CHECK UR ROUTE FROM "<<fDistrict<<" TO "<<tDistrict <<" ? "<<endl;
	cin>>op;
	system("cls");
	if(op=="yes")
	{
		cout<<endl<<endl;
		cout<<endl<<endl;
		cout<<"Dear "<<name<<" this is your route and the distance from "<<fDistrict<<" and "<<tDistrict <<endl<<endl;
		dijkstra(districts,V,fDistrict,tDistrict,prefer,fam,people);
	}
}



void booking(int districts[V][V])
{
	string fDistrict,tDistrict,prefer,date,name,fam;
	int people;
 	system("cls");
    system("color 4");
    title();
    cout<<"ENTER YOUR NAME : ";
    cin>>name;
    cout<<endl<<endl;
   	cout<<"ENTER THE FROM DISTRICT :";
   	cin>>fDistrict;
   	cout<<endl<<endl;
   	cout<<"ENTER THE TO DISTRICT :";
   	cin>>tDistrict;
   	cout<<endl<<endl;
   	cout<<"ENTER No. OF PEOPLE :";
   	cin>>people;
   	cout<<endl<<endl;
   	cout<<"FAMILY / INDIVIDUALS(yes/no) : ";
   	cin>>fam;
   	cout<<endl<<endl;
   	cout<<"ENTER THE DATE :";
   	cin>>date;
   	cout<<endl<<endl;
   	cout<<"A/C or Non A/C :";
   	cin>>prefer;
   	cout<<endl<<endl;
   	recheck(name,fDistrict,tDistrict,people,date,prefer,districts,fam);
}
/*
void graph()
{
	initwindow(900,900);
	settextstyle(9, 0, 3);
	//outtextxy(100,100,"YOUR CAR ROUTE !");
	setcolor(LIGHTBLUE);
	line(100,480,130,456);
	line(130,456,160,450);
	line(130,456,135,420);
	line(160,450,225,390);
	line(160,450,135,420);
	line(135,420,135,390);
	line(160,450,135,390);
	line(135,390,225,390);
	line(135,390,110,360);
	line(135,390,150,350);
	line(135,390,200,355);
	line(110,360,150,350);
	line(150,350,200,355);
	line(225,390,200,355);
	line(200,355,225,350);
	line(225,390,225,350);
	line(225,350,260,330);
	line(260,330,290,330);
	line(290,330,290,330);
	line(110,360,130,330);
	line(150,350,130,330);
	line(130,330,100,300);
	line(100,300,80,300);
	line(80,300,60,260);
	line(130,330,160,300);
	line(160,300,190,295);
	line(225,350,190,295);
	line(260,330,190,295);
	line(60,260,110,260);
	line(80,300,110,260);
	line(100,300,110,260);
	line(160,300,110,260);
	line(160,300,165,265);
	line(110,260,165,265);
	line(165,265,155,245);
	line(110,260,155,245);
	line(155,245,155,225);
	line(155,225,135,200);
	line(135,200,175,210);
	line(175,210,185,185);
	line(175,210,215,220);
	line(155,225,215,220);
	line(185,185,210,185);
	line(215,220,210,185);
	line(190,295,165,265);
	line(190,295,225,290);
	line(260,330,245,300);
	line(245,300,225,290);
	line(260,330,290,310);
	line(290,310,245,275);
	line(245,300,245,275);
	line(225,290,245,275);
	line(155,245,225,290);
	line(245,275,225,240);
	line(225,240,155,245);
	line(225,240,155,225);
	line(225,240,215,220);
	line(245,275,245,225);
	line(245,225,225,240);
	line(245,225,215,220);
	line(245,225,260,195);
	line(215,220,250,190);
	line(260,195,250,190);
	line(250,190,210,185);
	line(260,195,263,175);
	line(250,190,263,175);
	line(250,190,245,170);
	line(210,185,245,170);
	line(263,175,245,170);

settextstyle(0, 0, 1);
setcolor(WHITE);
outtextxy (370,315, "1 Kanya kumari\n");
outtextxy (370,325,"2-Tirunelveli");
outtextxy (370,335, "3-Thoothukudi");
outtextxy (370,345, "4-Tenkasi");
outtextxy (370,355, "5-Virudhunagar");
outtextxy (370,365, "6-Ramanathapuram");
outtextxy (370,375,"7-Theni");
outtextxy (370,385,"8-Madurai");
outtextxy (370,395, "9-Sivaganga");
outtextxy (370,405,"10-Dindigul");
outtextxy (370,415,"11-Pudukkottai");
outtextxy (370,425,"12-Coimbatore");
outtextxy (370,435, "13-Tiruppur");
outtextxy (370,445, "14-Karur");
outtextxy (370,455, "15-Tiruchirappalli");
outtextxy (370,465, "16-Thanjavur");
outtextxy (370,475, "17-Tiruvarur");
outtextxy (370,485, "18-Nagapattinam");
outtextxy (370,495, "19-Nilgiris");
outtextxy (370,505, "20-Erode");
outtextxy (370,515, "21-Namakkal");
outtextxy (370,525, "22-Perambalur");
outtextxy (370,535, "23-Ariyalur");
outtextxy (370,545, "24-mayiladuthurai");
outtextxy (370,555 ,"25-Salem");
outtextxy (370,565, "26-Kallakurichi");
outtextxy (370,575, "27-Cuddalore");
outtextxy (370,585, "28-Dharmapuri");
outtextxy (370,595, "29-Krishnagiri");
outtextxy (370,605, "30-Tirupathur");
outtextxy (370,615, "31-Tiruvannamalai");
outtextxy (370,625,"32-Viluppuram");
outtextxy (370,635, "33-Vellore");
outtextxy (370,645, "34-Ranipet");
outtextxy (370,655, "35-Kanchipuram");
outtextxy (370,665, "36-Chengalpattu");
outtextxy (370,675,"37-Chennai");
outtextxy (370,685, "38-Tiruvallur");

setcolor(GREEN);
  outtextxy (100,482,"1");
  outtextxy (130,458,"2");
  outtextxy (160,452,"3");
  outtextxy (135,420,"4");
  outtextxy (135,392,"5");
  outtextxy (225,392,"6");
  outtextxy (110,362,"7");
  outtextxy (150,352,"8");
  outtextxy (200,357,"9");
  outtextxy (130,352,"10");
  outtextxy (225,352,"11");
  outtextxy (80,302,"12");
  outtextxy (100,302,"13");
  outtextxy (160,302,"14");
  outtextxy (190,295,"15");
  outtextxy (260,330,"16");
  outtextxy (290,332,"17");
  outtextxy (310,332,"18");
  outtextxy (60,262,"19");
  outtextxy (110,262,"20");
  outtextxy (165,267,"21");
  outtextxy (255,292,"22");
  outtextxy (245,302,"23");
  outtextxy (300,312,"24");
  outtextxy (155,247,"25");
  outtextxy (225,242,"26");
  outtextxy (245,277,"27");
  outtextxy (155,227,"28");
  outtextxy (135,202,"29");
  outtextxy (175,212,"30");
  outtextxy (215,222,"31");
  outtextxy (245,227,"32");
  outtextxy (185,187,"33");
  outtextxy (210,187,"34");
  outtextxy (250,192,"35");
  outtextxy (260,197,"36");
  outtextxy (263,177,"37");
  outtextxy (245,172,"38");

	getch();
	closegraph();
}
*/

void mainMenu()
{
    int districts[V][V] = {{0,58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//1
    					   {58,0,50,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//2
    					   {0,50,0,105,113,135,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//3
    					   {0,60,105,0,127,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//4
    					   {0,0,113,127,0,118,100,58,98,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//5
    					   {0,0,135,0,118,0,0,0,87,0,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//6
    					   {0,0,0,0,100,0,0,75,0,74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//7
    					   {0,0,0,0,58,0,75,0,45,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//8
    					   {0,0,0,0,98,87,0,45,0,0,81,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//9
    					   {0,0,0,0,0,0,74,64,0,0,0,0,0,0,117,0,99,77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//10
    					   {0,0,0,0,0,130,0,0,81,0,0,62,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//11
    					   {0,0,0,0,0,0,0,0,0,0,62,0,61,0,0,0,57,0,0,0,0,0,44,75,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//12
    					   {0,0,0,0,0,0,0,0,0,0,0,61,0,25,0,0,0,0,0,0,0,0,0,41,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//13
    					   {0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//14
    					   {0,0,0,0,0,0,0,0,0,117,0,0,0,0,0,55,0,88,0,54,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//15
    					   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,0,0,0,107,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//16
    					   {0,0,0,0,0,0,0,0,0,99,56,57,0,0,0,0,0,82,0,0,90,58,87,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//17
    					   {0,0,0,0,0,0,0,0,0,77,0,0,0,0,88,0,82,0,0,66,34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//18
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,107,0,0,0,165,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//19
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,54,100,0,66,165,0,63,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,0,0},//20
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,34,0,63,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0},//21
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,0,0,31,0,117,133,0,78,0,0,0,0,0,0,0,0,0,0},//22
						   {0,0,0,0,0,0,0,0,0,0,0,44,0,0,0,0,87,0,0,0,0,31,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0},//23
						   {0,0,0,0,0,0,0,0,0,0,0,75,41,0,0,0,0,0,0,0,0,0,0,0,0,86,0,0,0,0,0,0,0,0,0,0,0,0},//24
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,56,117,0,0,0,0,67,102,0,0,0,0,0,0,0,0,0,0},//25
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,133,126,86,0,0,0,99,0,43,0,0,0,0,0,0,0,0},//26
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,0,0,171,50,0,68,116,0,0,0,0,0,0},//27
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,78,0,0,102,99,171,0,0,77,0,68,0,0,0,0,0,0},//28
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,46,0,0,0,0,0,0,0},//29
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43,0,77,0,0,0,64,105,0,0,0,0,0},//30
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,46,0,0,82,0,100,0,0,0,0},//31
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,116,68,0,64,82,0,133,83,93,111,0,0},//32
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,105,0,133,0,0,0,39,63,0},//33
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,83,0,0,29,0,0,0},//34
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,93,0,29,0,50,0,94},//35
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,111,39,0,50,0,76,55},//36
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,76,0,44},//37
						   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,55,44,0}//38
                    };
    do{
	system("cls");
   	int ch;
   	title();
    cout<<"PLEASE ENTER..........."<<endl<<endl;
    cout<<"1. BOOKING "<<endl;
    cout<<"2. EXIT"<<endl;
    cout<<"Enter ur choice :";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    		title();
    		cout<<"HELLO !! Customer Please start your booking !!\n\n";
    		booking(districts);
    		break;

    	case 2:
    		title();
    		cout<<"THANK YOU !! HAVE A GOOD DAY!!\n";
    		exit(1);
	}
    }while(1);

}

int main()
{
   cout<<"hello";
    mainMenu();
}
