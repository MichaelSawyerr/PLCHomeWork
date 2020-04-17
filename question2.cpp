#include <iostream>
using namespace std;
enum EnumBits
{
a = 1,
b = 2,
c = 3,
d = 4,
};
int main()
{
enum food{pork=1,chicken,beef,brocolli,orange,apple,bread};
enum food lunch;
lunch = orange;
cout<<"Food number : "<<lunch<<endl;
cout<<a+b<<" ";
cout<<a-b<<" ";
cout<<c*d<<" ";
cout<<d/b<<" ";
cout<<(a^b)<<" ";
cout<<(a & b)<<" ";
cout<<(a|b)<<" ";
cout<<(c >> 1)<<" ";
cout<<(a << 3)<<" ";
return 0;
}
