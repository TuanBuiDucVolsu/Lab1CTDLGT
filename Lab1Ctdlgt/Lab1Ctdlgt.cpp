#include <iostream>
#include <exception>

using namespace std;
template <typename T>
T testarray(const T* array, int n)
{
	
	for (int i = 0; i < n; i++)
		cout << array[i] << "   ";
	cout << endl;
    bool f(0), s(0);
    for (int i = 0; i < n - 1; ++i) {
        if (array[i] < array[i + 1]) {
            if (f)
            {
                cout << "No increase or decrease\n";
                return 0;
            }
            else s = 1;
        }
        if (array[i] > array[i + 1]) {
            if (s) {
                cout << "No increase or decrease\n";
                return 0;
            }
            else f = 1;
        }
    }
    if (!f && !s) cout << "The elements in the array are equal";
    else if (f) cout << "decrease";
    else cout << "increase";

    cout << endl;
}

int main()
{
    const int x = 4, y = 5, z = 6,t = 3;
    char arr1[x] = { 'A','A','A','A' };
    double arr2[y] = { 7.5,6.34,3.1,2.4,1.56 };
    float arr3[z] = { 4.4,5.6,4.5,7.8,8.9,3.47 };
    int arr4[t] = { 5,6,7 };
    cout << "Test arr1 : ";
    testarray(arr1, x);
    cout << "\nTest arr2 : ";
    testarray(arr2, y);
    cout << "\nTest arr3 : ";
    testarray(arr3, z);
    cout << "\nTest arr4 : ";
    testarray(arr4, t);
	return 0;
}
