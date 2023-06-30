#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    //1
    const int size = 10;
    const int size1 = 5;
    int ar[size] = {};
    for (int i = 0; i < size; i++) {
        ar[i] = rand();
        cout << ar[i] << " ";
    }
    cout << "\n";
    int ar1[size1] = {};
    int ar2[size1] = {};
    for (int j = 0; j < size; j++) {
        if (j < 5) {
            ar1[j] = ar[j];
            cout << ar1[j] << " ";
        }
    }
    cout << "\n";
    for (int k = 0; k < size; k++) {
        if (k >= 5) {
            ar2[k]= ar[k];
            cout << ar2[k] << " ";
        }
    }
    cout << "\n\n";
    

    //2
    const int size2 = 5;
    int nums1[size2] = {};
    int nums2[size2] = {};
    int nums[size2] = {};
    for (int i = 0; i < size2; i++) {
        nums1[i] = rand();
        nums2[i] = rand();
        nums[i] = nums1[i] + nums2[i];
        cout << nums1[i] << " + " << nums2[i] << " = " << nums[i] << "\n";
    }
    cout << "\n\n";
    

    //3
    int const days = 7;
    int exp[days] = {};
    int sum = 0, count = 0;
    for (int i = 0; i < days; i++) {
        cout << "Enter the expense for " << i+1 << " day: ";
        cin >> exp[i];
    }
    for (int j = 0; j < days; j++) {
        sum += exp[j];
        if (exp[j] > 100) {
            count += 1;
            switch (j + 1) {
            case 1:
                cout << "Spending in Monday = " << exp[j] << "\n";
                break;
            case 2:
                cout << "Spending in Tuesday = " << exp[j] << "\n";
                break;
            case 3:
                cout << "Spending in Wednesday = " << exp[j] << "\n";
                break;
            case 4:
                cout << "Spending in Thursday = " << exp[j] << "\n";
                break;
            case 5:
                cout << "Spending in Friday = " << exp[j] << "\n";
                break;
            case 6:
                cout << "Spending in Saturday = " << exp[j] << "\n";
                break;
            case 7:
                cout << "Spending in Sunday = " << exp[j] << "\n";
                break;

            default:
                cout << "Incorrect day!";
                break;
            }
        }
    }
    cout << "Consumption over 100$ in " << count << " days\n";
    cout << "Sum = " << sum << "$\n";
    cout << "Average = " << sum / days << "$\n\n";
}
