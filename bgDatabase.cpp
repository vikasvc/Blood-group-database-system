#include<iostream>
#include<fstream>
#include<string>
#include"count.h"
using namespace std;
class Blood
{
   public:
    string id;
    string name;
    string bloodGroup;
    string locality;
    string age;
    string gender;
    string contact;
    int rows;

 public:
   void SearchName(string ch) //search by name function
    {
        ifstream in("data1.csv");
        int i=0,pos=0;
        int rows=0,counter=0;
        string comma=",";
        string line,tok;
        string buffer;
        while(getline(in,buffer,'\n'))
            {rows++;}
        Blood b[rows];
        in.seekg(0,ios::beg); //to send cursor to the beginning of the csv file
        in.close();
        in.open("data1.csv");

        while(in.good() && counter<rows )//to create arrays of name gender,age,locality ,bloodgroup and contact.
        {
            getline(in,line);
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].name=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].gender=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].age=tok;
			line.erase(0,pos+comma.length());
			pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].locality=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].bloodGroup=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].contact=tok;
            line.erase(0,pos+comma.length());


            if((b[i].name)==ch) //checking name equality
            {
                cout<<"*******************************************"<<endl;
                cout<<"Name: "<<b[i].name<<endl<<"Blood Group: "<<b[i].bloodGroup<<endl<<"Locality: "<<b[i].locality<<endl<<"Gender: "<<b[i].gender<<endl<<"Age: "<<b[i].age<<endl<<"Contact No: "<<b[i].contact<<endl;
            }counter++;
            i++;

        }
    }

public:     void searchbloodGroup(string ch)//search by blood group
    {
        ifstream in("data1.csv");
        int i=0,pos=0;
        int rows=0,counter=0;
        string comma=",";
        string line,tok;
        string buffer;
        while(getline(in,buffer,'\n'))
            {rows++;}
        Blood b[rows];
        in.seekg(0,ios::beg);
        in.close();
        in.open("data1.csv");

        while(in.good() && counter<rows)
        {
           getline(in,line);
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].name=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].gender=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].age=tok;
			line.erase(0,pos+comma.length());
			pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].locality=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].bloodGroup=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].contact=tok;
            line.erase(0,pos+comma.length());

            if((b[i].bloodGroup)==ch)
            {
                cout<<"********************************************"<<endl;
                cout<<"Name: "<<b[i].name<<endl<<"Blood Group: "<<b[i].bloodGroup<<endl<<"Locality: "<<b[i].locality<<endl<<"Gender: "<<b[i].gender<<endl<<"Age: "<<b[i].age<<endl<<"Contact No.: "<<b[i].contact<<endl;
            }counter++;
            i++;
        }

    }
public:     void searchloc(string ch)//search by location
     {
        ifstream in("data1.csv");
        int i=0,pos=0;
        int rows=0,counter=0;
        string comma=",";
        string line,tok;
        string buffer;
        while(getline(in,buffer,'\n'))
            {rows++;}
        Blood b[rows];
        in.seekg(0,ios::beg);
        in.close();
        in.open("data1.csv");

        while(in.good() && counter<rows)
        {
           getline(in,line);
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].name=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].gender=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].age=tok;
			line.erase(0,pos+comma.length());
			pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].locality=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].bloodGroup=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].contact=tok;
            line.erase(0,pos+comma.length());

                if((b[i].locality)==ch)
            {
                cout<<"*******************************************"<<endl;
                cout<<"Name: "<<b[i].name<<endl<<"Blood Group: "<<b[i].bloodGroup<<endl<<"Locality: "<<b[i].locality<<endl<<"Gender: "<<b[i].gender<<endl<<"Age: "<<b[i].age<<endl<<"Contact No.: "<<b[i].contact<<endl;
           }
            counter++;
            i++;
        }
}
public:     void searchloc(string ch,string ch2)//function overloading is used to search by blood group and locality
     {
        ifstream in("data1.csv");
        int i=0,pos=0;
        int rows=0,counter=0;
        string comma=",";
        string line,tok;
        string buffer;
        while(getline(in,buffer,'\n'))
            {rows++;}
        Blood b[rows];
        in.seekg(0,ios::beg);
        in.close();
        in.open("data1.csv");

        while(in.good() && counter<rows)
        {
            getline(in,line);
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].name=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].gender=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].age=tok;
			line.erase(0,pos+comma.length());
			pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].locality=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].bloodGroup=tok;
            line.erase(0,pos+comma.length());

            b[i].contact=tok;
              line.erase(0,pos+comma.length());


            if((b[i].locality)==ch && b[i].bloodGroup==ch2)
            {
                cout<<"*******************************************"<<endl;
                cout<<"Name: "<<b[i].name<<endl<<"Blood Group: "<<b[i].bloodGroup<<endl<<"Locality: "<<b[i].locality<<endl<<"Gender: "<<b[i].gender<<endl<<"Age: "<<b[i].age<<endl<<"Contact No.: "<<b[i].contact<<endl;
            }counter++;
            i++;
        }
}
};
class bloodDisplay:public Blood  //class inheritance where blooddisplay is derived class
 {
	 public:
	   void displaydata()   //to display entire data
    {
        ifstream in("data1.csv");
        int i=0,pos=0;
        int rows=0,counter=0;
        string comma=",";
        string line,tok;
        string buffer;
        while(getline(in,buffer,'\n'))
            {rows++;}
        Blood b[rows];
        in.seekg(0,ios::beg);
        in.close();
        in.open("data1.csv");

        while(in.good() && counter<rows)
        {
            getline(in,line);
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].name=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].gender=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].age=tok;
			line.erase(0,pos+comma.length());
			pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].locality=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].bloodGroup=tok;
            line.erase(0,pos+comma.length());
            pos=line.find(comma);
            tok=line.substr(0,pos);
            b[i].contact=tok;
            line.erase(0,pos+comma.length());

            cout<<"Name: "<<b[i].name<<endl<<"Blood Group: "<<b[i].bloodGroup<<endl<<"Locality: "<<b[i].locality<<endl<<"Gender: "<<b[i].gender<<endl<<"Age: "<<b[i].age<<endl<<"Contact No.: "<<b[i].contact<<endl;
            counter++;
            i++;
        }

        }
 public:       void insertdata()    //function used to register a new donor
    {
            ofstream out("data1.csv",ios::app);
            string p;
            string nm;
            string loc;
            string bg;
            string ag;
            string gnd;
            string cntct;
           getline(cin,p);
            cout<<"Name: "<<endl;
            cin>>nm;
			cout<<"Gender: "<<endl;
            cin>> gnd;
             cout<<"Enter your age: "<<endl;
            cin>>ag;
			cout<<"Loacality: "<<endl;
            cin>>loc;
            cout<<"Your Blood group: "<<endl;
            cin>>bg;
            cout<<"Your contact number: "<<endl;
            cin>>cntct;
            out<<nm<<","<<gnd<<","<<ag<<","<<loc<<","<<bg<<","<<cntct<<endl;
            cout<<nm<<","<<gnd<<","<<ag<<","<<loc<<","<<bg<<","<<cntct<<endl;
            cout<<"***********************************************************************************"<<endl;
            cout<<"Thank you for registering as a Donor. Your record has been added to the Database."<<endl;
            cout<<"***********************************************************************************"<<endl;
            cout<<" "<<endl;
            cout<<" "<<endl;
            out.close();
        }

};


    int main()
{bloodDisplay bd;
    Blood bg;
    int choice,choice2,choice3,x,y;
    string adminID,password;
    cout<<"        ********************************************************************************************************************************************************"<<endl;
    cout<<"                                              ----------------------------------------------------------------------------               "<<endl;
    cout<<"                                              ******************WELCOME TO DATABASE OF BLOOD GROUPS**********************               "<<endl;
    cout<<"                                              --------------------------------------------------------------------------               "<<endl;
    cout<<"                                              ****************DATABASE OF BLOOD GROUPS IN ODISHA STATE*******************               "<<endl;
    cout<<"        ********************************************************************************************************************************************************"<<endl;
    cout<<"        --------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                            "<<endl;
    cout<<"                                            "<<endl;
    cout<<"        Choose one of the options given below : "<<endl;
    cout<<"  "<<endl;
    do{

    cout<<" 1. Enter as Guest "<<endl;
    cout<<" 2. Login as Admin "<<endl;
    cout<<" 3. Exit\n " <<endl;
    cin>>choice;

    switch(choice)     //to select to enter as guest or admin
    {
    case 1:
            do
            {
            cout<<" "<<endl;
            cout<<" Choose any one from the following options "<<endl;
            cout<<" "<<endl;
            cout<<" 1. Display the full database "<<endl;
            cout<<" 2. Search for a particular Blood group "<<endl;
            cout<<" 3. Register a new Donor "<<endl;
            cout<<" 4. Search for donors in a particular locality "<<endl;
            cout<<" 5. Search for a particular Blood group in a particular locality "<<endl;
            cout<<" 6. Search for a particular Donor by name "<<endl;
            cout<<" 7. Exit "<<endl;
            cout<<" "<<endl;
            cin>>x;

    if(x==1)
    {
        cout<<" "<<endl;
        cout<<"The Database is :"<<endl;
        cout<<" "<<endl;
        bd.displaydata();
    }
    if(x==2)
    {string ch;
        cout<<"Enter the required Blood group: ";
        cin>>ch;
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.searchbloodGroup(ch);

    }
    if(x==3)
    {cout<<" "<<endl;
        cout<<"Please enter the following details :"<<endl;
        cout<<" "<<endl;
        bd.insertdata();

    }
    if(x==4)
    {
        string ch;
        cout<<"Enter locality: ";
        cin>>ch;
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.searchloc(ch);
    }
    if(x==5)
    {
        string ch,ch2;
        cout<<"Enter locality: ";
        cin>>ch;
        cout<<"Enter blood group:";
        cin>>ch2;
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.searchloc(ch,ch2);
    }

    if(x==6)
    {


        string ch,ch2,ch3;
        cout<<"Enter name: ";
        getline(cin,ch2);
        getline(cin,ch);
        getline(cin,ch3);
        cout<<" "<<endl;

        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.SearchName(ch);
    }

            }
            while(x !=7);
            break;

    case 2:
                cout<<"Admin ID: "<<endl;
                cin>>adminID;
                cout<<"Password: "<<endl;
                cin>>password;
                if(adminID == "group7" && password == "admin_1234")
                {
                do{
                cout<<" "<<endl;
                cout<<" "<<endl;
                cout<<"                  1. Display database of Blood Groups "<<endl;
                cout<<"                  2. Register a new Donor "<<endl;
                cout<<"                  3. Search for a particular Blood group "<<endl;
                cout<<"                  4. Search for donors in a particular locality "<<endl;
                cout<<"                  5. Search for a particular Blood group in a particular locality "<<endl;

                cout<<"                  6. Search for a particular Donor by name "<<endl;
                cout<<"                  7. Exit"<<endl;
                cin>>y;


    if(y==1)
    {
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bd.displaydata();
    }
    if(y==2)
    {
        cout<<" "<<endl;
        cout<<"Please enter the following details :"<<endl;
        cout<<" "<<endl;
        bd.insertdata();
    }
    if(y==3)
    {
        string ch;
        cout<<"Enter the required Blood group: ";
        cin>>ch;
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.searchbloodGroup(ch);
    }
    if(y==4)
    {
        string ch;
        cout<<"Enter locality: ";
        cin>>ch;
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.searchloc(ch);
    }
    if(y==5)
    {
        string ch,ch2;
        cout<<"Enter locality: ";
        cin>>ch;
        cout<<"Enter blood group:";
        cin>>ch2;
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.searchloc(ch,ch2);
    }

    if(y==6)
    {
        string ch,ch2;
        cout<<"Enter name: ";
        getline(cin,ch2);
        getline(cin,ch);
        cout<<" "<<endl;
        cout<<"The Data you're looking for is :"<<endl;
        cout<<" "<<endl;
        bg.SearchName(ch);
    }
}while(y!=7);
}
                else{
                    cout<<" "<<endl;
                    cout<<" "<<endl;
                    cout<<"Invalid User ID or Password."<<endl;
                   }break;
    case 3  :
            cout<<" "<<endl;
            cout<<" "<<endl;
            cout<<"*****************************************************"<<endl;
            cout<<"You have chosen to exit.\nThank you for visiting us\n"<<endl;
            cout<<"*****************************************************"<<endl;
            break;
    default : cout<<"Invalid Entry\n"<<endl;
            break;
    }
 }
 while(choice==1||choice==2||choice==3);
    return 0;
}






