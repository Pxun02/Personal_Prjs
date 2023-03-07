#include <iostream>

using namespace std;

void ch1(){
    int rental; //SGD
    cout << "\nRental Fee:\t\t\t"; cin >> rental;

    int needByOwn = rental - 300;
    const int salarySG = 1500; //SGD
    const int workMSG = 5;

    int addAsset = salarySG * workMSG;

    int salaryJP, workH; //yen
    cout << "JP Internship Salary:\t\t"; cin >> salaryJP;
    cout << "JP Internship Work Hours:\t"; cin >> workH;

    int JPSpend; //yen
    cout << "JP Expectation of Spending:\t"; cin >> JPSpend; cout << endl;

    const int JPWeeks = 12;
    const int JPMonth = 3;
    const int prevAsset = 250000; //yen

    int asset = prevAsset + salaryJP * workH * JPWeeks - JPMonth * JPSpend;

    int totalAsset = asset/100 + addAsset;
    int possibleRentalMonth = totalAsset / needByOwn - workMSG;

    cout << "-------------" << endl;
    cout << "You can rent: " << possibleRentalMonth << " months" << endl;
    if(possibleRentalMonth>=9){
        int residueAsset = totalAsset - (workMSG + 9) * needByOwn;
        cout << "Residue Asset: " << residueAsset << endl;
        cout << "Can Gradaute!\n" << endl;
    }
    else    cout << "Need Summer Work!\n" << endl; 
}

void ch2(){
    const int salarySG = 1500; //SGD
    const int workMSG = 5;

    int addAsset = salarySG * workMSG;

    int salaryJP, workH; //yen
    cout << "\nJP Internship Salary:\t\t"; cin >> salaryJP;
    cout << "JP Internship Work Hours:\t"; cin >> workH;

    int JPSpend; //yen
    cout << "JP Expectation of Spending:\t"; cin >> JPSpend; cout << endl;

    const int JPWeeks = 12;
    const int JPMonth = 3;
    const int prevAsset = 250000; //yen
    const int needMonth = 14;

    int asset = prevAsset + salaryJP * workH * JPWeeks - JPMonth * JPSpend;

    int totalAsset = asset/100 + addAsset;

    int maxRent = totalAsset / needMonth;

    cout << "---------" << endl;
    cout << "You can rent maximum: $" << maxRent << "\n" << endl;
}

int main(){
    cout << "\n---Rental Program---" << endl;
    int choice;
    while(1){
        cout << "Please choose..." << endl;
        cout << "(1): If the asset is enough" << endl;
        cout << "(2): How much rental fee is possible" << endl;
        cout << "(3): exit" << endl;
        cout << "Input... "; cin >> choice;

        switch(choice){
            case(1):
                ch1();
                break;
            case(2):
                ch2();
                break;
            default:
                cout << "Thank you!\n" << endl;
                return 0;
        }
    }
}