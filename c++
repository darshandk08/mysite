#include<iostream.h>
#include<conio.h>
class frequency
{
    private
    int a[10];,n,ele,count;
    public
    void frequency
    void readdata
    void display
};
voidfrequency::readdata()
{
    cout<<"entre the size of array."<<endl:
    cin>>n;
    cout<<"entre the elements"<<endl;
    for(int=0; i<n; i++)
    cin>>ele;
}
void frequency::findfreq()
{
    count=0;
    for(int i=0; i<n; i++)
    if (ele== a[i])
    count++;
}
voidfrequency::display()
{
    count=0;
    for(int i=0; i<n; i++)
    if(ele== a[i])
    count++;
}
void main()
{
    frequency f;
    clrscr();
    f.readdata();
    f.findfreq();
    f.display();
    getch();
    } 