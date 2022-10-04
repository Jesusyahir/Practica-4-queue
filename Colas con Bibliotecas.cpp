#include <cstdlib>
#include <iostream>
#include <queue>

using namespace std;

int main(int argc,char * argv[])
{
	int Opc=0,s=0,j=6,c;
	
	queue<int> b;
	do
	{
		system("cls");
		cout<<"Seleccione una opcion del menu por favor"<<endl;
		cout<<"1- Insertar un Elemento a la cola"<<endl;
		cout<<"2- Eliminar un elemento de la cola"<<endl;
		cout<<"3- Mostrar los Elementos de enfrente"<<endl;
		cout<<"4- Mostrar la cola de los elementos"<<endl;
		cout<<"5- Salir"<<endl;
		cin>>Opc;
		
	switch(Opc)
	{
		case 1: cout<<"Insertar elemento"<<endl;
			{
				cout<<"Que numero desea ingresar"<<endl;
				cin>>c;
				b.push(c);
			}
			break;
		case 2: cout<<"Eliminar elemento"<<endl;
			cout <<  b.front()<<endl;
			b.pop();
			cout<<"\no se ha eliminado el elemento correctamente"<<endl;
			break;
		case 3: cout<<"Mostrar elemento del frente"<<endl;
			cout<<b.front()<<endl;
				
			break;
		case 4: cout<<"Mostrar cola"<<endl;
			while(! b.empty())
			{
				cout << b.front() <<" ";
				b.pop();
			}
			cout<<endl;
			break;
		case 5: cout<<"Salir"<<endl;
			exit (-1);
			break;
		default: cout<<"Seleccione una opcion correcta"<<endl;
	}
		cout<<"¿Desea continuar con el programa?"<<endl;
		cout<<"Si es asi por favor presione el numero 1"<<endl;
		cout<<"No entonces por favor presione cualquier numero"<<endl;
		cin>>s;
	}while (s==1);
	system ("PAUSE");
	return EXIT_SUCCESS;
}
