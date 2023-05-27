
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int info;
    Node*link;
};
int mergeLL(Node **head1,Node **head2,int N){
    Node*temp1=*head1;
    Node*temp2=*head2;
    Node*temp3;
    while(temp2!=NULL){
       temp3=temp2;
       temp2=temp2->link;
       temp3->link=temp1->link;
       temp1->link=temp3;
       temp1=temp1->link->link;
    }
    *head2=NULL;
    return N+N;
}
void display(Node*head){
    while(head!=NULL){
        cout<<head->info<<"->";
        head=head->link;
    }
    cout<<endl;
}
int main() {
    // Write C++ code here
    Node*head1=NULL;
    Node*head2=NULL;
    Node n1,n2,n3,n4,n5,n6;
    n1.info=1;
    n2.info=2;
    n3.info=3;
    n4.info=4;
    n5.info=5;
    n6.info=6;
    n1.link=&n2;
    n2.link=&n3;
    n3.link=NULL;
    n4.link=&n5;
    n5.link=&n6;
    n6.link=NULL;
    head1=&n1;
    head2=&n4;
    display (head1);
    display (head2);
    int N=3;
    N=mergeLL(&head1,&head2,N);
    display (head1);
    display (head2);
    cout<<N<<endl;
    return 0;
}
