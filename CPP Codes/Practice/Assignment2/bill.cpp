#include<iostream>
using namespace std;

int main(){
    float pencil,pen,eraser;
    float total,gst;
    cout<<"Enter the price of Pencil\n";
    cin>>pencil;
    cout<<"Enter the price of Pen\n";
    cin>>pen;
    cout<<"Enter the price of Eraser\n";
    cin>>eraser;

    cout<<"\n";
    total=(pencil+pen+eraser);
    cout<<"YOUR BILL\n";
    cout<<"Pencil = "<<pencil << "\n";
    cout<<"Pen ="<<pen<< "\n";
    cout<<"Eraser ="<<eraser<< "\n";
    cout<<"Total = "<< total<< "\n";

    gst= (total*18)/100;

    cout<<"GST --- " << gst << "\n";
    cout<<"BILL TOTAL " << gst+total << endl;

    return 0;

}