#include<iostream>
using namespace std;

class rajavi;
class kervi{
	
	private :
		
	
		int hh=4;
		int mm=120;
	        int ss=20;
		friend void jiya(kervi,rajavi);
};

class rajavi{
	
	private :
		
	
		int hh=2;
		int mm=25;
	        int ss=120;
	
		
		friend void jiya(kervi,rajavi);
};

void jiya(kervi a, rajavi b){
	
    
    int hour=a.hh+b.hh;
	int minute=a.mm+b.mm;
	hour=minute/60;
	minute=minute%60;
        int second=a.ss+b.ss;
        minute=second/60;
	second=second%60;
	
    cout<<hour<<" hour "<<endl;
    cout<<hour<<" hour and "<< minute << " minute "<<endl;
    cout<<minute<<" minute and "<< second <<" second ";

    }

int main(){

    kervi obj1;
    rajavi obj2;
         
	jiya(obj1, obj2);
	
}
