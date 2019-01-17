#include <iostream>
#include <string>
using namespace std;

string one_ten(int x)
{
    if(x==0)
        return "zero";
    else if(x==1)
        return "one";
    else if(x==2)
        return "two";
    else if(x==3)
        return "three";
    else if(x==4)
        return "four";
    else if(x==5)
        return "five";
    else if(x==6)
        return "six";
    else if(x==7)
        return "seven";
    else if(x==8)
        return "eight";
    else if(x==9)
        return "nine";
    else if(x==10)
        return "ten";
    else if(x==11)
        return "eleven";
    else if(x==12)
        return "twelve";
    else if(x==13)
        return "thirteen";
    else if(x==14)
        return "fourteen";
    else if(x==15)
        return "fifteen";
    else if(x==16)
        return "sixteen";
    else if(x==17)
        return "seventeen";
    else if(x==18)
        return "eighteen";
    else if(x==19)
        return "nineteen";
    else if(x==20)
        return "twenty";

}

string twenty()
{
    return "twenty";
}

string thirty()
{
    return "thirty";
}

string forty()
{
    return "forty";
}

string fifty()
{
    return "fifty";
}

string sixty()
{
    return "sixty";
}

string seventy()
{
    return "seventy";
}

string eighty()
{
    return "eighty";
}

string ninety()
{
    return "ninety";
}

int main()
{
    int x;
    cin>>x;
    if(x<21)
        cout<<one_ten(x);
    else if(x>20&&x<30)
        cout<<twenty()<<"-"<<one_ten(x%10);
    else if(x>30&&x<40)
        cout<<thirty()<<"-"<<one_ten(x%10);
    else if(x>40&&x<50)
        cout<<forty()<<"-"<<one_ten(x%10);
    else if(x>50&&x<60)
        cout<<fifty()<<"-"<<one_ten(x%10);
    else if(x>60&&x<70)
        cout<<sixty()<<"-"<<one_ten(x%10);
    else if(x>70&&x<80)
        cout<<seventy()<<"-"<<one_ten(x%10);
    else if(x>80&&x<90)
        cout<<eighty()<<"-"<<one_ten(x%10);
    else if(x>90&&x<100)
        cout<<ninety()<<"-"<<one_ten(x%10);
    else if(x==30)
        cout<<"thirty";
    else if(x==40)
        cout<<"forty";
    else if(x==50)
        cout<<"fifty";
    else if(x==60)
        cout<<"sixty";
    else if(x==70)
        cout<<"seventy";
    else if(x==80)
        cout<<"eighty";
    else if(x==90)
        cout<<"ninety";
    return 0;
}