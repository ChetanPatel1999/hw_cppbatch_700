#include <iostream>
using namespace std;
class emp
{

};
int main()
{
    emp e1;
    int x = -12;
    printf("programm is start ...\n");
    try
    {
        printf("inside try\n");
        if (x < 0)
        {
            throw e1;
        }
        
    }
    catch (int x)
    {
        cout << "int catch block is exicute" << endl;
    }
    catch (double d)
    {
        cout << "doubel catch block is exicute" << endl;
    }
    catch (char d)
    {
        cout << "char catch block is exicute" << endl;
    }
    catch (emp e1)
    {
        cout<<"emp catch block is exicuted"<<endl;
    }
    catch (double d)
    {
       cout<<"doubel catch block is exicute"<<endl; 
    }
    printf("after catch block 1\n");
    printf("after catch block 2\n");
    return 0;
}