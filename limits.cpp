#include <iostream>

using namespace std;

void limitInt(int iL)
{
    cout << "Limit test of Int Start." << endl;
    for (int i = 0; i < iL + 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    printf("The Number Used for this : %d", iL);
};

void limitDouble(double dL)
{
    cout << "Limit Max of Double" << endl;
    printf("The Number used for this : %.0f", dL);
};

int main()
{
    limitInt(100000000);
}