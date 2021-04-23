#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int menu=0;
	while(menu!=4) {
		cout<<"Escoja una Opcion "<<endl<<"1. Ejercisio 1"<<endl<<"2. Ejercisio 2"<<endl<<"3. Ejercisio 3"<<endl<<"4.Salirse"<<endl;
		cin>>menu;
		if(menu==1) {
			int num;
			int n1=1;
			int n2=0;
			cout<<"Ingrese numero: "<<endl;
			cin>> num;
			if(num<0) {
				cout<<"NO INGRESE NEGATIVOS"<<endl;
			}
			for (int m = 0; m < num; ++m) {
				for (int i = 0; i < num; ++i)  {
					if(m%2==0 && i%2==0) {
						cout<<n2;
					}
					else {
						if(m%2!= 0 && i%2!=0) {
							cout<<n2;

						} else {
							cout<<n1;
						}
					}
				}
				cout << endl;
			}
		}
		if(menu==2){
			int num;
			cout<<"Ingrese numero: "<<endl;
			cin>> num;
			if(num<0) {
				cout<<"NO INGRESE NEGATIVOS"<<endl;
			}
			float acum=0;
			for(int i=1;i<=num;i++){
				float ac=0;
				ac+=i-1;
				acum+=(2*i)*ac;	
			}
			cout<<"La respuesta es : "<<acum<<endl;
		}
		if(menu==3){
			double n=0;
			int t=0;
			cout<<"Ingrese n: "<<endl;
			cin>>n;
			cout<<"Ingrese t: "<<endl;
			cin>>t;
			if(t<10){
				cout<<" T tiene que ser mayor a 10"<<endl;
			}
			double resp=0;
			float inicio=0;
			float mitad=0;
			float final=n;
			double cc=0;
			double gg=0;
			double acum=0;	
			for(int i=1;i<n+1;i++){
				cout<<"Iteracion  "<<i<<"  final : "<<final<<" inicio: "<<inicio;
				mitad=(inicio+final)/2;
				gg=mitad*mitad;
				cout<<" mitad por :  "<<gg<<endl;
				if(gg>n){
					inicio=inicio;
					final=mitad;
				}
				if(gg<n){
					inicio=mitad;
					final=final;
				}
				if((mitad*mitad)==n){
				resp=mitad;
				break;
			}
				 resp=mitad;
			}
			cout<<"respuesta: "<<mitad<<endl;
			
	
	    }
   } 
	return 0;
}
