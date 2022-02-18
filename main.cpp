#include <iostream>

using namespace std;

const int MaxSize = 1000;

class Stack
{
private:
    int item[MaxSize];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if(top < MaxSize)
        {
            top++;
            item[top] = value;
            cout<<"the Push is successfully"<<endl;
        }
        else
        {
            cout<<"The stack full on push"<<endl;
        }
    }

    bool empty()
    {
        return top < 0;
    }

    void pop()
    {
        if(empty())
            cout<<"The Stack empty on pop"<<endl;
        else
        {
            top--;
            cout<<"the pop is successfully"<<endl;
        }
}

    bool full()
    {
        return top == 999;
    }

    void clear()
    {
        top = -1;
        cout<<"The Stack content has been cleared successfully"<<endl;
    }

    int size()
    {
        return top+1;
    }

    void display()
    {
        if(!empty())
        {
            cout<<"the Stack elements is: ";
            for(int i=0; i<=top; i++)
            {
                cout<<item[i]<<"\t";
            }
            cout<<endl;
        }
        else
            cout<<"the stack is empty on Display"<<endl;
    }
};

int main()
{
    Stack sta;
    int option, value;
    cout<<"\t\t<<{Welcome to the stack program}>>"<<endl;
    system("color 3");
    while(true)
    {
        cout<<"Option:"<<endl;
        cout<<"\t1- Push."<<endl
            <<"\t2- Pop."<<endl
            <<"\t3- Clear."<<endl
            <<"\t4- Display."<<endl
            <<"\t5- Size."<<endl
            <<"\t6- is it Full?."<<endl
            <<"\t7- is it Empty?."<<endl
            <<"\t8- Exit"<<endl;
        cout<<"Choose the desired option number(1, 2, 3, 4, 5, 6, 7 or 8):"<<endl<<">>";
        cin>>option;
        switch(option)
        {
        case 1:
            system("cls");
            system("color a");
            cout<<"enter the number: ";
            cin>>value;
            sta.push(value);
            cout<<endl<<endl;
            break;
        case 2:
            system("cls");
            system("color 5");
            sta.pop();
            cout<<endl<<endl;
            break;
        case 3:
            system("cls");
            system("color 4");
            sta.clear();
            cout<<endl<<endl;
            break;
        case 4:
            system("cls");
            system("color E");
            sta.display();
            cout<<endl<<endl;
            break;
        case 5:
            system("cls");
            system("color F");
            cout<<"the stack size is: "<<sta.size()<<endl;
            cout<<endl<<endl;
            break;
        case 6:
            system("cls");
            if(sta.full())
                cout<<"the stack is full";
            else
                cout<<"the stack is not full";
            cout<<endl<<endl;
            break;
        case 7:
            system("cls");
            if(sta.empty())
                cout<<"the stack is empty";
            else
                cout<<"the stack is not empty";
            cout<<endl<<endl;
            break;
        case 8:
            system("color 7");
            return 0;
            break;
        default:
            system("cls");
            system("color 7");
            cout<<"the option is not fount.. try again."<<endl;
            cout<<endl<<endl;
            break;
        }
    }
}
