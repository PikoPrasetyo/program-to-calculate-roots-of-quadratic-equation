#include<iostream> //1. deklarasi library yang digunakan dalam program
#include<math.h>

using namespace std;

class root_akar{ //2. deklarasi kelas yang akan digunakan dalam program
    float a, b, c; //3. berikut ini adalah data yang akan menjadi tempat penyimpanan sehingga dibuat dalam private
    float D, x1, x2; // tujuan dari data ditaruh dalam private adalah menjadikan data hanya dapat diakses oleh fungsinya saja.
    float real_part;
public:
    void input_fx() //4. deklarasi fungsi dilakukan dalam public untuk mempermudah pengkodingan.
    {
        cout<<"masukan nilai a :";cin>>a;
        cout<<"masukan nilai b :";cin>>b;
        cout<<"masukan nilai c :";cin>>c;
        cout<<"\n";
    }
    void fx()
    {
        if(b<0&&c<0){
                cout<<a<<"x^2"<<b<<"x"<<c<<endl;
        }
        if(b>0&&c>0){
                cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
        }
        if(b==0&&c==0){
                cout<<a<<"x^2"<<endl;
        }
        if(b>0&&c<0){
                cout<<a<<"x^2+"<<b<<"x"<<c<<endl;
        }
        if(b<0&&c>0){
                cout<<a<<"x^2"<<b<<"x+"<<c<<endl;
        }
        if(b<0&&c==0){
                cout<<a<<"x^2"<<b<<"x"<<endl;
        }
        if(b>0&&c==0){
                cout<<a<<"x^2+"<<b<<"x"<<endl;
        }
        if(b==0&&c<0){
                cout<<a<<"x^2"<<c<<endl;
        }
        if(b==0&&c>0){
                cout<<a<<"x^2+"<<c<<endl;
        }
        D=b*b-(4*a*c);
        real_part=-b/(2*a);
        cout<<"\n";
        cout<<"Diskriminannya adalah "<<D;
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        real_part = -b/(2*a);
        cout<<"\n\n";
        if(D==0){
            cout<<"akar-akarnya real kembar"<<endl;
            cout<<" x1="<<"x2="<<x1<<endl;
        }
        if(D>0){
            cout<<"akar-akarnya real berbeda"<<endl;
            cout<<"x1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;
        }
        if(D<0){
            cout<<"akar-akarnya imajiner berbeda"<<endl;
            cout<<"x1="<<" "<<real_part<<" + "<<sqrt(-1*D)/(2*a)<<"i"<<endl;
            cout<<"x2="<<" "<<real_part<<" - "<<sqrt(-1*D)/(2*a)<<"i"<<endl;
        }
    }
};

main() //5. pendeklarasian panggilan terhadap fungsi.
{
    root_akar root;
    root.input_fx();
    root.fx();
    cout<<"\tPIKO 1110171058\t"<<"\n"<<"\t\tSince 1999\t\t";
}
