#include <iostream>
using namespace std;

struct LIST
{
    int dann;
    LIST *next;
};
LIST *head=NULL;
LIST *rear=NULL;

void make(int a)
{
    LIST *ptr;
    ptr=new LIST;
    if(!head) head=ptr;
    else rear->next=ptr;
    ptr->dann=a;
    rear=ptr;
    rear->next=NULL;
}
void print(void)
{
    LIST *ptr=head;
    while (ptr)
    {
        cout<<ptr->dann<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void deletenhead(void)
{
    LIST *ptr = head->next;
    head->next = ptr->next;
    delete ptr;
}

int main()
{
    setlocale(LC_ALL, "");
    int n, i, b;
    cout<<"kilkist: ";
    cin>>n;
    cout<<"element list: "<<endl;
    for(i=0; i<n; i++)
    { cin>>b;
    make(b);}
    cout<<"input list: ";
    print();
    deletenhead();
    cout<<"after delete: ";
    print();
}
