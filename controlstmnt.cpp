#include<iostream>

using namespace std;

int sum(int n1, int n2)
{
    return (n1 + n2);
}

int sub(int n1, int n2)
{
    return (n1 - n2);
}

int mul(int n1, int n2)
{
    return (n1 * n2);
}

float divi(int n1, int n2)
{
    return ((float)(n1 / n2));
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    char op;
    cout << "Enter the arithmetic operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum = " << sum(n1, n2) << endl;
        break;
    case '-':
        cout << "Difference = " << sub(n1, n2) << endl;
        break;
    case '*':
        cout << "Product = " << mul(n1, n2) << endl;
        break;
    case '/':
        cout << "Result = " << divi(n1, n2) << endl;
        break;

    default:
        cout << "Invalid opertor!" <<endl;
        break;
    }

    // Same code with if statements. 
    // Curly braces are optional if the body of if has only one statment.
    // if (op == '+')
    //     cout << "Sum = " << sum(n1, n2) << endl;
    // else if(op == '-')
    //     cout << "Difference = " << sub(n1, n2) << endl;
    // else if(op == '*')
    //     cout << "Product = " << mul(n1, n2) << endl;
    // else if(op == '/')
    //     cout << "Result = " << divi(n1, n2) << endl;
    // else
    //     cout << "Invalid opertor!" <<endl;
    

    // int semester;
    // cout<<"Input semester: ";
    // cin>>semester;

    // switch (semester)
    // {
    // case 1:
    //     cout<<"9 credits, 3 courses"<<endl;
    //     break;
    // case 2:
    //     cout<<"10 credits, 3 courses of 3 and 1 of 1 credit"<<endl;
    //     break;
    // case 3:
    //     cout<<"9 credits, 2 courses and 1 thesis"<<endl;
    //     break;
    // case 4:
    //     cout<<"9 credits, 2 courses and 1 thesis"<<endl;
    //     break;
    // default:
    //     cout<<"Invalid Semester"<<endl;
    //     break;
    // }
    
}
