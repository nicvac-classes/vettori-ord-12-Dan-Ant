#include <iostream>
using namespace std;

int main() {
int i, j, t, n;
bool scambio;
cout << "Quante cifre devono essere generate?" << endl;
cin n;
vector <int> h[n];
i=0;
scambio=true;
while(i<n)
{
   h[i]= rand()n*10;
   i=i+1;
}
i=0;
while (i<n and scambio=true)
{
   scambio=false;
   j=0;
   while (j<=n-i)
   {
   if(h[j]>h[j+1])
   {
    t=h[j];
    h[j]=h[j+1];
    h[j+1]=t;
    scambio=true;
   }
   j=j+1;
   }
   i=i+1;
}
i=0;
while(i<n)
{
    cout << h[i];
    i=i+1;
}

}


