#include <iostream>
#include <vector>
using namespace std;
int main(){
    string wybor;
    srand(time(NULL));
    vector <string> vec ={"камень","ножницы","бумага"};
    int i=0,j=0;
    while(true){

        cout<<"\nВвод: ";
        cin>>wybor;
        int number = rand()%3+1;

        switch (number) {
            case 1:{
                if( wybor == vec[0] ){
                    cout<<"\nРобот выбрал "<<vec[0]<<" Ничья\n";
                    break;
                }
                else if( wybor == "бумага" ){
                    cout<<"Вы выйграли Робот выбрал "<<vec[0];
                    i++;
                    break;
                }
                else{
                    cout<<"\nВы проиграли Робо выбрал "<<vec[0];
                    j++;
                    break;
                }
            }
            case 2:{
                if( wybor == vec[1] ){
                    cout<<"Робот выбрал "<<vec[1]<<" Ничья\n";
                    break;
                }
                else if( wybor == "камень" ){
                    cout<<"Вы выйграли Робот выбрал "<<vec[1];
                    i++;
                    break;
                }
                else{
                    cout<<"\nВы проиграли Робо выбрал "<<vec[1];
                    j++;
                    break;
                }
            }
            case 3:{
                if(wybor == vec[2]) {cout<<"Робот выбрал "<<vec[2]<<" Ничья\n";break;}
                else if(wybor == "ножницы"){cout<<"Вы выйграли Робот выбрал "<<vec[2];i++;break;}
                else{cout<<"\nВы проиграли Робо выбрал "<<vec[2];j++;break;}
            }
        }
        if (i == 3 || j == 3 ){break;}
    }
}