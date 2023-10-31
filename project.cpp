#include <bits/stdc++.h>
using namespace std;
bool errorFlag = false;
void s0(string s, int index);
void s1(string s, int index);
void s2(string s, int index);
void s3(string s, int index);
void s4(string s, int index);
void s5(string s, int index);
void s6(string s, int index);
void s7(string s, int index);
void s8(string s, int index);
void s9(string s, int index);
void s10(string s, int index);
void s11(string s, int index);
void s12(string s, int index);
void s13(string s, int index);
void s14(string s, int index);
void s15(string s, int index);
void s16(string s, int index);
void s17(string s, int index);
void s18(string s, int index);
void s19(string s, int index);
void s20(string s, int index);
void s21(string s, int index);
void s22(string s, int index);
void s23(string s, int index);
void s24(string s, int index);
void s25(string s, int index);
void s26(string s, int index);
void s27(string s, int index);
void s28(string s, int index);
void s29(string s, int index);
void s30(string s, int index);
void s31(string s, int index);
void s32(string s, int index);
void s33(string s, int index);
void s34(string s, int index);
void s35(string s, int index);
void s36(string s, int index);
void s37(string s, int index);
void s38(string s, int index);
void s39(string s, int index);
void s40(string s, int index);
void s41(string s, int index);
void s42(string s, int index);
void s43(string s, int index);
void s44(string s, int index);
void s45(string s, int index);



void s0(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'm':
        s1(s, index + 1);
        break;
    case 'k':
        s5(s, index + 1);
        break;
    case 'a':
        s9(s, index + 1);
        break;
    case 's':
        s13(s, index + 1);
        break;
    case 'b':
        s20(s, index + 1);
        break;
    case 'g':
        s34(s, index + 1);
        break;
    case 'h':
        s44(s, index + 1);
        break;
    case '0':
        s41(s, index + 1);
        break;
    case '1':
        s41(s, index + 1);
        break;
    case '2':
        s41(s, index + 1);
        break;
    case '3':
        s41(s, index + 1);
        break;
    case '4':
        s41(s, index + 1);
        break;
    case '5':
        s41(s, index + 1);
        break;
    case '6':
        s41(s, index + 1);
        break;
    case '7':
        s41(s, index + 1);
        break;
    case '8':
        s41(s, index + 1);
        break;
    case '9':
        s41(s, index + 1);
        break;
    case ' ':
        s0(s, index + 1);
        break;
    }
}
void s1(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s2(s, index + 1);
        break;
    
    case ' ':
        s1(s, index + 1);
        break;
    }
}
void s2(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'n':
        s3(s, index + 1);
        break;
    case ' ':
        s2(s, index + 1);
        break;
    }
}
void s3(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'e':
        s4(s, index + 1);
        break;
    case ' ':
        s3(s, index + 1);
        break;
    }
}
void s4(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s5(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s6(s, index + 1);
        break;
    case ' ':
        s5(s, index + 1);
        break;
    }
}
void s6(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'r':
        s7(s, index + 1);
        break;
    case ' ':
        s6(s, index + 1);
        break;
    }
}
void s7(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'i':
        s8(s, index + 1);
        break;
    case ' ':
        s7(s, index + 1);
        break;
    }
}
void s8(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s9(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s10(s, index + 1);
        break;
    case 'n':
        s42(s, index + 1);
        break;
    case ' ':
        s9(s, index + 1);
        break;
    }
}
void s10(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'p':
        s11(s, index + 1);
        break;
    case ' ':
        s10(s, index + 1);
        break;
    }
}
void s11(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'o':
        s12(s, index + 1);
        break;
    case ' ':
        s11(s, index + 1);
        break;
    }
}
void s12(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s13(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s14(s, index + 1);
        break;
    case ' ':
        s13(s, index + 1);
        break;
    }
}
void s14(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'r':
        s15(s, index + 1);
        break;
    case ' ':
        s14(s, index + 1);
        break;
    }
}
void s15(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'v':
        s16(s, index + 1);
        break;
    case ' ':
        s15(s, index + 1);
        break;
    }
}
void s16(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s17(s, index + 1);
        break;
    case ' ':
        s16(s, index + 1);
        break;
    }
}
void s17(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'd':
        s18(s, index + 1);
        break;
    case ' ':
        s17(s, index + 1);
        break;
    }
}
void s18(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'o':
        s19(s, index + 1);
        break;
    case ' ':
        s18(s, index + 1);
        break;
    }
}
void s19(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s20(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s21(s, index + 1);
        break;
    case 'h':
        s27(s, index + 1);
        break;
    case ' ':
        s20(s, index + 1);
        break;
    }
}
void s21(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'd':
        s22(s, index + 1);
        break;
    case ' ':
        s21(s, index + 1);
        break;
    }
}
void s22(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'b':
        s23(s, index + 1);
        break;
    case ' ':
        s22(s, index + 1);
        break;
    }
}
void s23(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s24(s, index + 1);
        break;
    case ' ':
        s23(s, index + 1);
        break;
    }
}
void s24(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'k':
        s25(s, index + 1);
        break;
    case ' ':
        s24(s, index + 1);
        break;
    }
}
void s25(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'i':
        s26(s, index + 1);
        break;
    case ' ':
        s25(s, index + 1);
        break;
    }
}
void s26(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s27(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s28(s, index + 1);
        break;
    case ' ':
        s27(s, index + 1);
        break;
    }
}
void s28(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'g':
        s29(s, index + 1);
        break;
    case ' ':
        s28(s, index + 1);
        break;
    }
}
void s29(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s30(s, index + 1);
        break;
    case ' ':
        s29(s, index + 1);
        break;
    }
}
void s30(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'k':
        s31(s, index + 1);
        break;
    case ' ':
        s30(s, index + 1);
        break;
    }
}
void s31(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s32(s, index + 1);
        break;
    case ' ':
        s31(s, index + 1);
        break;
    }
}
void s32(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'r':
        s33(s, index + 1);
        break;
    case ' ':
        s32(s, index + 1);
        break;
    }
}
void s33(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s34(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'u':
        s35(s, index + 1);
        break;
    case ' ':
        s34(s, index + 1);
        break;
    }
}
void s35(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'n':
        s36(s, index + 1);
        break;
    case ' ':
        s35(s, index + 1);
        break;
    }
}
void s36(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s37(s, index + 1);
        break;
    case ' ':
        s36(s, index + 1);
        break;
    }
}
void s37(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'k':
        s38(s, index + 1);
        break;
    case ' ':
        s37(s, index + 1);
        break;
    }
}
void s38(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'a':
        s39(s, index + 1);
        break;
    case ' ':
        s38(s, index + 1);
        break;
    }
}
void s39(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'r':
        s40(s, index + 1);
        break;
    case ' ':
        s39(s, index + 1);
        break;
    }
}
void s40(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s42(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'e':
        s43(s, index + 1);
        break;
    case ' ':
        s42(s, index + 1);
        break;
    }
}
void s43(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s44(string s, int index)
{
    if (index >= s.size())
    {
        errorFlag = true;
        return;
    }
    switch (s[index])
    {
    case 'o':
        s45(s, index + 1);
        break;
    case ' ':
        s44(s, index + 1);
        break;
    }
}
void s45(string s, int index)
{
    cout << s.substr(0, index + 1) << endl;
    return;
}
void s41(string s, int index)
{
    if (index >= s.size())
    {
        cout << s << endl;
        return;
    }
    switch (s[index])
    {
    case '0':
        s41(s, index + 1);
        break;
    case '1':
        s41(s, index + 1);
        break;
    case '2':
        s41(s, index + 1);
        break;
    case '3':
        s41(s, index + 1);
        break;
    case '4':
        s41(s, index + 1);
        break;
    case '5':
        s41(s, index + 1);
        break;
    case '6':
        s41(s, index + 1);
        break;
    case '7':
        s41(s, index + 1);
        break;
    case '8':
        s41(s, index + 1);
        break;
    case '9':
        s41(s, index + 1);
        break;
    default:
        errorFlag = true;
        break;
    }
}
int main()
{
    string temp = "ame";
    s0(temp, 0);
    if (errorFlag)
        cout << "Error" << endl;
    return 0;
}