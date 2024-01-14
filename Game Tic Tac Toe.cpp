#include<iostream>
#include<cstdlib>
using namespace std;

void nama(){
	cout<<"	                               "<<endl;
	cout<<"	                               "<<endl;
    cout<<"	 _____________________________ "<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|         TIC TAC TOE         |"<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|_____________________________|"<<endl;
    cout<<"	|         dibuat oleh:        |"<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|      Alfin Ahmad juniar     |"<<endl;
    cout<<"	|          2300018426         |"<<endl;
    cout<<"	|_____________________________|"<<endl;
}

void menu(){
	cout<<"	                               "<<endl;
	cout<<"	                               "<<endl;
	cout<<"	 _____________________________ "<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|             MENU            |"<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|_____________________________|"<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|       1. Singleplayer       |"<<endl;
    cout<<"	|       2. multiplayer        |"<<endl;
    cout<<"	|                             |"<<endl;
    cout<<"	|_____________________________|"<<endl;
}

string arr[3][3]={{"1","2","3"},{"4","5","6"},{"7","8","9"}};

void tampilan(){
	system("cls");
	cout<<"	 _____________________________ "<<endl;
	cout<<"	|player 1 : x  |  player 2 : o|"<<endl;
	cout<<"	|______________|______________|"<<endl;
    cout<<"	|         |         |         |"<<endl;
    cout<<"	|    "<<arr[0][0]<<"    |    "<<arr[0][1]<<"    |    "<<arr[0][2]<<"    |"<<endl;
    cout<<"	|_________|_________|_________|"<<endl;
    cout<<"	|         |         |         |"<<endl;
    cout<<"	|    "<<arr[1][0]<<"    |    "<<arr[1][1]<<"    |    "<<arr[1][2]<<"    |"<<endl;
    cout<<"	|_________|_________|_________|"<<endl;
    cout<<"	|         |         |         |"<<endl;
    cout<<"	|    "<<arr[2][0]<<"    |    "<<arr[2][1]<<"    |    "<<arr[2][2]<<"    |"<<endl;
    cout<<"	|_________|_________|_________|"<<endl;
}

int hasil(){
	
	if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
		return 1;
	}
	else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
		return 1;
	}
	else if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
		return 1;
	}
	else if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]){
		return 1;
	}
	else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
		return 1;
	}
	else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
		return 1;
	}
	else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
		return 1;
	}
	else if(arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2]){
		return 1;
	}
	else if(arr[0][0] !="1" && arr[0][1] !="2" && arr[0][2] !="3" && arr[1][0] !="4" && arr[1][1] !="5" && arr[1][2] !="6" && arr[2][0] !="7" && arr[2][1] !="8" && arr[2][2] !="9"){
		return -1;
	}
	else{
		return 0;
	}
}

int main(){
	
//	tampilan();
    nama();
    cin.get();
    system("cls");
    
    menu();
    int pilihan;
    cout<<"	    Pilih mode permainan : ";
    cin>>pilihan;

    if(pilihan==1){
		
		int play = 1;
		int nilaikembalian,pilihan;
		string player[2] = {"kamu","komputer"};
        string karakter;
        
        do{
        		tampilan();
        		
        		play = (play % 2) ? 1:2;
        		
        		if(play==1 && player[0]=="kamu"){
        			cout<<"	Giliran "<<player[0]<<" , Masukkan pilihan : ";
        			cin>>pilihan;
        			
        			karakter = "\033[1;32mX\033[0m";
        			
        			if(pilihan==1 && arr[0][0]=="1"){
        				arr[0][0]=karakter;
					}else if(pilihan==2 && arr[0][1]=="2"){
						arr[0][1]=karakter;
					}else if(pilihan==3 && arr[0][2]=="3"){
						arr[0][2]=karakter;
					}else if(pilihan==4 && arr[1][0]=="4"){
						arr[1][0]=karakter;
					}else if(pilihan==5 && arr[1][1]=="5"){
						arr[1][1]=karakter;
					}else if(pilihan==6 && arr[1][2]=="6"){
						arr[1][2]=karakter;
					}else if(pilihan==7 && arr[2][0]=="7"){
						arr[2][0]=karakter;
					}else if(pilihan==8 && arr[2][1]=="8"){
						arr[2][1]=karakter;
					}else if(pilihan==9 && arr[2][2]=="9"){
						arr[2][2]=karakter;
					}else{
						play--;
					}
				}
				else if(play==2 && player[1]=="komputer"){
					
					int nilaiacak = rand() % 9;
					
					karakter = "\033[1;31mO\033[0m";
					
					if(nilaiacak==0 && arr[0][0]=="1"){
        				arr[0][0]=karakter;
					}else if(nilaiacak==1 && arr[0][1]=="2"){
						arr[0][1]=karakter;
					}else if(nilaiacak==2 && arr[0][2]=="3"){
						arr[0][2]=karakter;
					}else if(nilaiacak==3 && arr[1][0]=="4"){
						arr[1][0]=karakter;
					}else if(nilaiacak==4 && arr[1][1]=="5"){
						arr[1][1]=karakter;
					}else if(nilaiacak==5 && arr[1][2]=="6"){
						arr[1][2]=karakter;
					}else if(nilaiacak==6 && arr[2][0]=="7"){
						arr[2][0]=karakter;
					}else if(nilaiacak==7 && arr[2][1]=="8"){
						arr[2][1]=karakter;
					}else if(nilaiacak==8 && arr[2][2]=="9"){
						arr[2][2]=karakter;
					}else{
						play--;
					}
				}
				nilaikembalian = hasil();
				play++;
		}
		while(nilaikembalian == 0);
			tampilan();
			if(nilaikembalian == 1){
				play--;
				if(play == 1){
					cout<<"\n\t\t"<<player[0]<<"     MENANG\n\n";
				}
				else{
					cout<<"\n\t\t"<<player[0]<<"     KALAH\n\n";
				}
			}
			else if(nilaikembalian == -1){
				cout<<"\n\t\tPermainan SERI \n\n";
			}
		
    }
	else if(pilihan==2){

        int play = 1;
		int nilaikembalian,pilihan;
		string player[2] = {"Player 1","Player 2"};
        string karakter;
        
        do{
        		tampilan();
        		
        		play = (play % 2) ? 1:2;
        		
        		if(play==1 && player[0]=="Player 1"){
        			cout<<"	Giliran "<<player[0]<<" , Masukkan pilihan : ";
        			cin>>pilihan;
        			
        			karakter = "\033[1;32mX\033[0m";
        			
        			if(pilihan==1 && arr[0][0]=="1"){
        				arr[0][0]=karakter;
					}else if(pilihan==2 && arr[0][1]=="2"){
						arr[0][1]=karakter;
					}else if(pilihan==3 && arr[0][2]=="3"){
						arr[0][2]=karakter;
					}else if(pilihan==4 && arr[1][0]=="4"){
						arr[1][0]=karakter;
					}else if(pilihan==5 && arr[1][1]=="5"){
						arr[1][1]=karakter;
					}else if(pilihan==6 && arr[1][2]=="6"){
						arr[1][2]=karakter;
					}else if(pilihan==7 && arr[2][0]=="7"){
						arr[2][0]=karakter;
					}else if(pilihan==8 && arr[2][1]=="8"){
						arr[2][1]=karakter;
					}else if(pilihan==9 && arr[2][2]=="9"){
						arr[2][2]=karakter;
					}else{
						play--;
					}
				}
				else if(play==2 && player[1]=="Player 2"){
					int nilaiacak;
					cout<<"	Giliran "<<player[1]<<" , Masukkan pilihan : ";
        			cin>>nilaiacak;
					
					karakter = "\033[1;31mO\033[0m";
					
					if(nilaiacak==1 && arr[0][0]=="1"){
        				arr[0][0]=karakter;
					}else if(nilaiacak==2 && arr[0][1]=="2"){
						arr[0][1]=karakter;
					}else if(nilaiacak==3 && arr[0][2]=="3"){
						arr[0][2]=karakter;
					}else if(nilaiacak==4 && arr[1][0]=="4"){
						arr[1][0]=karakter;
					}else if(nilaiacak==5 && arr[1][1]=="5"){
						arr[1][1]=karakter;
					}else if(nilaiacak==6 && arr[1][2]=="6"){
						arr[1][2]=karakter;
					}else if(nilaiacak==7 && arr[2][0]=="7"){
						arr[2][0]=karakter;
					}else if(nilaiacak==8 && arr[2][1]=="8"){
						arr[2][1]=karakter;
					}else if(nilaiacak==9 && arr[2][2]=="9"){
						arr[2][2]=karakter;
					}else{
						play--;
					}
				}
				nilaikembalian = hasil();
				play++;
		}
		while(nilaikembalian == 0);
			tampilan();
			if(nilaikembalian == 1){
				play--;
				if(play == 1){
					cout<<"\n\t\t"<<player[0]<<"     MENANG\n\n";
				}
				else{
					cout<<"\n\t\t"<<player[1]<<"     MENANG\n\n";
				}
			}
			else if(nilaikembalian == -1){
				cout<<"\n\t\tPermainan SERI \n\n";
			}  
    }
	else{
		cout<<endl;
        cout<<"\t\tPilihan tidak valid";
        cout<<endl;
    }
	return 0;
}
