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
	}

	return 0;
}