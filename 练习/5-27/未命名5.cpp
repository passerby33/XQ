#include<stdio.h> 
#include<iostream> 
#include <stdlib.h> 
#include<time.h> 
using namespace std;
struct aa{ 
int page; 
int count; 
aa* next; 
}; 
int main() 
{ 
time_t t; 
srand(unsigned(time(&t))); 
int i,n,j,ii,m,answer,ffalse,count,fangfa,temp1,min,nn,mm; 
double sum; 
aa *head,*tail,*temp,*table,*first,*ti; 
/* nn=4;mm=1; 
for(nn=4;nn>32;nn++) 
{ 
for(mm=1;mm>5;mm++) 
{*/ 
cin>>m; 
//m=nn; 
cout<<endl; 
cout<<"fangfa: 1-FIFO;2-LRR;3-OPT;4-LFR;5-NUR"<<endl; 
cout<<"Mothed:"; 
cin>>fangfa; 
//fangfa=mm; 
ffalse=0; 
answer=0; 
table=new(aa); 
temp=table; 
table->page=-1; 
table->count=0; 
head=table; 
for(ii=2;ii<=m;ii++) 
{ 
table=new(aa); 
table->page=-1; 
table->count=0; 
temp->next=table; 
temp=table; 
if (ii==m){table->next=NULL;} 
} 
tail=table; 
temp=head; 
first=head; 
count=0; 
i=0; 
while(i<320) 
{ 
min=400; 
if (count==0) {n=(rand()%320+1)%320; j=n/10;} 
if (count==1) {n=rand()%(n+1);j=n/10;} 
if(count==2) {j=((n+1)%320)/10;} 
if(count==3) {j=((rand()%(320-n-2))+n+2)/10;} 
table=head; 
temp=head; 
answer=0; 
min=400; 
if (fangfa==5) 
{ 
while(table!=NULL) 
{ 
if (table->page==j){answer=1;table->count=2;} 
table=table->next; 
} 
if (answer!=1) 
{ 
table=head; 
while (table!=NULL) 
{ 
if (table->count<min){temp=table;min=table->count;} 
table=table->next; 
} 
if (temp->page!=-1) ++ffalse; 
temp->page=j; 
temp->count=1; 
} 
table=head; 
if ((i%32)==0) 
{ 
while(table!=NULL) 
{ 
if (table->page!=-1) table->count=1; 
// if (table->page==j){answer=1;++(table->count);} 
table=table->next; 
} 
} 
} 
if ((fangfa==4)||(fangfa==3)) 
{ 
while(table!=NULL) 
{ 
if (table->page==j){answer=1;++(table->count);} 
table=table->next; 
} 
if(answer!=1) 
{ table=head; 
while (table!=NULL) 
{ 
if (table->count<min){temp=table;min=table->count;} 
table=table->next; 
} 
if (temp->page!=-1){ 
++ffalse; 
temp->page=j; 
table=head; 
while(table){ 
table->count=1; 
table=table->next; 
} 
} 
else{ 
temp->page=j; 
++(temp->count); 
} 
} 
} 
if (fangfa==2){ 
while((table!=NULL)&&(fangfa==2)) 
{ 
if (table->page==j){answer=1;temp=table;} 
table=table->next; 
} 
if((fangfa==2)&&(answer==1)) 
{ 
//table=temp; 
temp1=temp->page; 
while (temp!=NULL) 
{ 
temp->page=temp->next->page; 
temp=temp->next; 
} 
tail->page=temp1; 
} 
if((answer!=1)&&(fangfa==2)) 
{ 
if (first->page!=-1) 
ffalse=ffalse+1; 
first->page=j; 
temp=head; 
while (temp!=NULL) 
{ 
temp->page=temp->next->page; 
temp=temp->next; 
} 
tail->page=j; 
} 
} 
table=head; 
while((table!=NULL)&&(fangfa==1)) 
{ 
if (table->page==j){answer=1;} 
table=table->next; 
} 
if ((answer!=1)&&(fangfa==1)) 
{ 
if (first->page!=-1) ffalse=ffalse+1; 
first->page=j; 
if (first->next!=NULL) { first=first->next;} 
else {first=head;} 
} 
++i; 
++count; 
if (count==4){count=0;} 
} 
sum=1.0-ffalse/320.0; 
/*cout<<nn<<" "; 
if (fangfa==1) cout<<"FIFO:"<<sum<<" "; 
if (fangfa==2) cout<<" LRR:"<<sum<<" "; 
if (fangfa==3) cout<<" OPT:"<<sum<<" "; 
if (fangfa==4) cout<<" LFR:"<<sum<<" "; 
if (fangfa==5) cout<<" NUR:"<<sum<<" "; 
if(mm==5) cout<<endl;*/ 
cout<<sum<<endl; 
for(ti=head;ti!=NULL;ti=ti->next)cout<<ti->page<<" "; 
cout<<endl; 
} 
