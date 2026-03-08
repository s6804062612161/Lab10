#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
int BookID; 
char BookTitle[50]; 
} ComputerBook; 
void DisplayData(struct Books *CBook); 

int main() { 
printf("Enter Book ID :");      
scanf("%d",&ComputerBook.BookID); 
printf("Enter Book Title :");   
scanf("%s",ComputerBook.BookTitle); 
DisplayData(&ComputerBook);
return 0; 
} 
void DisplayData(struct Books *CBook){ 
printf("Book ID : %d \n",(*CBook).BookID); 
printf("Book Title : %s \n",CBook->BookTitle); 
} 


 /*(*CBook).BookID คือ
		การเข้าถึงข้อมูลสมาชิก BookID โดยเริ่มจากการทำ Dereference หรือการตามไปยังตำแหน่งที่อยู่ที่ Pointer CBook ชี้อยู่แล้วจึงใช้จุดเพื่อดึงค่าข้อมูลออกมา
CBook->BookTitle คือ
		การเขียนทางเลือกที่สั้นเมื่อตัวแปรเป็น Pointer โดยใช้เครื่องหมาย ลูกศร เพื่อเข้าถึงสมาชิก 
BookTitle จากแอดเดรสนั้นโดยตรง*/

