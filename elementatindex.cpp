#include<iostream>
using namespace std;
int pos=5;
class Stack
{
    int arr[10];
    public:
    void Insert()
    {
       int  i,index,elem;
        cout<<"Enter 5 Array Elements: ";
    for(i=0; i<pos; i++)
        cin>>arr[i];
        cout<<"\nEnter Element to Insert: ";
        cin>>elem;
        cout<<"\nEnter index: ";
        cin>>index;
        pos++;
        for(i=pos;i>=index;i--)
            arr[i]=arr[i-1];
        arr[index] = elem;
        cout<<"\nThe New Array is:\n";
    for(i=0; i<6; i++)
        cout<<arr[i];
        cout<<endl;
    }
    void Display()
    {
        if(pos>=0)
        {
            cout<<"Array is:";
            for(int i=0;i<=pos;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
            cout<<"Array is empty"<<endl;
        }
    }
    void Delete()
    {
        int index;
        cout<<"Enter index to delete: ";
        cin>>index;
        for(int i=index;i<pos;i++)
            arr[i]=arr[i+1];

    }
    void Search()
    {
        int value,found=0;
        cout<<"Enter number to be searched:";
        cin>>value;
        for(int i=0;i<=pos;i++)
        {
            if(arr[i]==value)
        {
            found=1;
            break;
        }
        }
        if(found==1)
        {
            cout<<"Element found at "<<pos<<endl;
        }
        else{
            cout<<"Element not found"<<endl;
        }
    }
};
int main()
{
    int n;
    for(int i=0;i<7;i++)
    {
    cout<<"\nEnter the follow:"<<endl;
    cout<<" 1.Insert"<<endl;
    cout<<" 2.Display"<<endl;
    cout<<" 3.Delete"<<endl;
    cout<<" 4.Search"<<endl;
    cout<<" 5.Exit"<<endl;
    cout<<"Enter Choice:";
    cin>>n;
    Stack st;
    if(n==1)
    {
        st.Insert();
    }
    else if(n==2)
    {
        st.Display();
    }
    else if(n==3)
    {
        st.Delete();
    }
    else if(n==4)
    {
        st.Search();
    }
    else if(n==5)
    {
        cout<<".....Code Exited.....";
        break;
    }
    else{
        cout<<"Invalid input";
    }
    }
}
