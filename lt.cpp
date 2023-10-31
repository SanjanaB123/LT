#include <bits/stdc++.h>
using namespace std;
bool errorFlag = false;
void s0(string s,int index);
void s1(string s,int index);
void s2(string s,int index);
void s3(string s,int index);
void s4(string s,int index);
void s5(string s,int index);
void s6(string s,int index);
void s7(string s,int index);
void s8(string s,int index);
void s9(string s,int index);
void s10(string s,int index);
void s11(string s,int index);
void s12(string s,int index);
void s13(string s,int index);
void s14(string s,int index);
void s15(string s,int index);
void s16(string s,int index);
void s17(string s,int index);
void s18(string s,int index);
void s19(string s,int index);
void s20(string s,int index);
void s21(string s,int index);
void s22(string s,int index);
void s23(string s,int index);
void s24(string s,int index);
void s25(string s,int index);
void s26(string s,int index);
void s27(string s,int index);
void s28(string s,int index);
void s29(string s,int index);
void s30(string s,int index);
void s0(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'a' : 
 s1(s,index + 1); break;
 case 'k' : 
 s7(s,index + 1); break;
 case 'j' : 
 s16(s,index + 1); break;
 case 'b' :
 s19(s,index + 1); break;
 case 'g' :
 s24(s,index + 1); break;
 case 'd' : 
 s13(s,index + 1); break;
 case '0':
 s30(s,index + 1); break;
 case '1':
 s30(s,index + 1); break;
 case '2':
 s30(s,index + 1); break;
 case '3':
 s30(s,index + 1); break;
 case '4':
 s30(s,index + 1); break;
 case '5':
 s30(s,index + 1); break;
 case '6':
 s30(s,index + 1); break;
 case '7':
 s30(s,index + 1); break;
 case '8':
 s30(s,index + 1); break;
 case '9':
 s30(s,index + 1); break;
 case ' ':
 s0(s,index + 1); break;
 }
}
void s1(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'a' : 
 s2(s,index + 1); break;
 case 'r' : 
 s12(s,index + 1); break;
 case ' ' :
 s1(s,index + 1); break;
 }
}
void s2(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'm' :
 s3(s,index + 1); break;
 case ' ':
 s2(s,index + 1); break;
 }
}
void s3(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'a' :
 s4(s,index + 1); break;
 case ' ' :
 s3(s,index + 1); break;
 }
}
void s4(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'k' : 
 s5(s,index + 1); break;
 case ' ':
 s4(s,index + 1); break;
 }
}
void s5(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'e':
 s6(s,index + 1); break;
 case ' ':
 s5(s,index + 1); break;
 }
}
void s6(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s7(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'o' :
 s8(s,index + 1); break;
 case ' ' :
 s7(s,index + 1); break;
 }
}
void s8(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'r' : 
 s9(s,index + 1); break;
 case ' ' :
 s8(s,index + 1); break;
 }
}
void s9(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'o':
 s10(s,index + 1); break;
 case 'e':
 s11(s,index + 1); break;
 }
}
void s10(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s11(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s12(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s13(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'a' :
 s14(s,index + 1); break;
 case ' ' :
 s13(s,index + 1); break;
 }
}
void s14(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'o' : 
 s15(s,index + 1); break;
 case ' ' :
 s14(s,index + 1); break;
 }
}
void s15(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s16(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'o' : 
 s17(s,index + 1); break;
 case ' ' :
 s16(s,index + 1); break;
 }
}
void s17(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'g' : 
 s18(s,index + 1); break;
 case ' ' :
 s17(s,index + 1); break;
 }
}
void s18(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s19(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'i' : 
 s20(s,index + 1); break;
 case 'h' :
 s27(s,index + 1); break;
 case ' ' :
 s19(s,index + 1); break;
 }
}
void s20(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'y' : 
 s21(s,index + 1); break;
 case ' ' :
 s20(s,index + 1); break;
 }
}
void s21(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'o' : 
 s22(s,index + 1); break;
 case ' ' :
 s21(s,index + 1); break;
 }
}
void s22(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'g' : 
 s23(s,index + 1); break;
 case ' ' :
 s22(s,index + 1); break;
 }
}
void s23(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s24(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'u' : 
 s25(s,index + 1); break;
 case ' ' :
 s24(s,index + 1); break;
 }
}
void s25(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'n' : 
 s26(s,index + 1); break;
 case ' ' :
 s25(s,index + 1); break;
 }
}
void s26(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s27(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'a' : 
 s28(s,index + 1); break;
 case ' ' :
 s27(s,index + 1); break;
 }
}
void s28(string s,int index){
 if(index >= s.size()){
 errorFlag = true;
 return;
 }
 switch(s[index]){
 case 'g' : 
 s29(s,index + 1); break;
 case ' ' :
 s28(s,index + 1); break;
 }
}
void s29(string s,int index){
 cout << s.substr(0,index + 1) << endl;
 return;
}
void s30(string s,int index){
 if(index >= s.size()){
 cout << s << endl;
 return;
 }
 switch(s[index]){
 case '0':
 s30(s,index + 1); break;
 case '1':
 s30(s,index + 1); break;
 case '2':
 s30(s,index + 1); break;
 case '3':
 s30(s,index + 1); break;
 case '4':
 s30(s,index + 1); break;
 case '5':
 s30(s,index + 1); break;
 case '6':
 s30(s,index + 1); break;
 case '7':
 s30(s,index + 1); break;
 case '8':
 s30(s,index + 1); break;
 case '9':
 s30(s,index + 1); break;
 default : 
 errorFlag = true; break;
 }
}
int main(){
 string temp = "aamake";
 s0(temp,0);
 if(errorFlag) cout << "Error" << endl;
 return 0;
}