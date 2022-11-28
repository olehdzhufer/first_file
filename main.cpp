#include "Ellipse.h"
ostream& operator<<(ostream& out, const Ellipse& d)
{
    return out << d.Rx << " " << d.Ry << endl;
}
istream& operator>>(istream& in, const Ellipse& id)
{
    in >> id.Rx;
    in >> id.Ry;
    return in;
}
int main() {


    Ellipse a(3,1);
    cout<< a.area()<<endl;
    Ellipse b(3);
    cout<< b.area()<<endl;


    bool result = a==b;
    bool result2 = a<b;
    bool result3 = a>b;

    Ellipse c(4,5);
    cout<< c.perimetr()<<endl;
    Ellipse d(7,7);
    cout<< d.perimetr()<<endl;

    bool result4 = c==d;
    bool result5 = c<d;
    bool result6 = c>d;


    cout << a;
    cin >> a;

    c *= 2;
    cout<<c;



    (c *= 2) *= 3;
    cout<<c;
    return 0;
}

