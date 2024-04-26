//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cstring>
//
//using namespace std;
//
//const int MAXLEN = 255;
//
//struct sproduct
//{
//    char name[MAXLEN];
//    int cost;
//    int quantity;
//    int date;
//};
//
//sproduct arr[MAXLEN];
//
//int product_index = 0;
//
//int menu();
//void readFromFile(const char* fileName);
//void saveToFile(const char* fileName);
//void addNew();
//void del();
//void sortToFile();
//void changeToFile();
//void textToScreen(int product_index);
//void textForAddandSort(int index);
//
////int main()
////{
////    while (true)
////    {
////        switch (menu())
////        {
////        case 1:
////            readFromFile("file.dat");
////            break;
////        case 2:
////            saveToFile("file.dat");
////            break;
////        case 3:
////            addNew();
////            break;
////        case 4:
////            del();
////            break;
////        case 5:
////            sortToFile();
////            break;
////        case 6:
////            changeToFile();
////            break;
////        case 7:
////            return 0;
////        default:
////            cout << "Wrong choice" << endl;
////        }
////    }
////}
//
//int menu()
//{
//    cout << "\n";
//    int ans;
//    cout << "make choice\n" << "1 - reading file\n" << "2 - write file\n" << "3 - adding an entry\n" << "4 - deleting an entry\n" << "5 - sort file\n"
//    << "6 - change file\n" << "7 - leave from program\n";
//    cin >> ans;
//    return ans;
//}
//
//void readFromFile(const char* fileName)
//{
//    ifstream fin;
//    fin.open(fileName, ios::binary);
//    if (!fin)
//    {
//        cout << "File not found";
//    }
//    else
//    {
//        sproduct product;
//        product_index = 0;
//        while (true)
//        {
//           fin.read((char*)&product, sizeof(product));
//           if (fin.eof())
//                break;
//
//           arr[product_index] = product;
//           product_index++;
//        }
//
//        fin.close();
//        cout << "Data read from file\n";
//        textToScreen(product_index);
//    }
//}
//
//void saveToFile(const char* fileName)
//{
//    ofstream fout;
//    fout.open(fileName, ios::binary);
//
//    if (!fout)
//    {
//        cout << "File not found";
//    }
//    else
//    {
//        fout.write((char*)arr, sizeof(sproduct) * product_index);
//        fout.close();
//        cout << "Data saved\n";
//    }
//}
//
//void textForAddandSort(int index)
//{
//    cout << "Nazva productu:  ";
//    cin >> arr[index].name, MAXLEN;
//    cout << "Vvedit vartist:  ";
//    cin >> arr[index].cost;
//    cout << "Vvedite kilkist:  ";
//    cin >> arr[index].quantity;
//    cout << "Vvedite datu:  ";
//    cin >> arr[index].date;
//}
//
//void addNew()
//{
//    cout << "Adding a new entry\n\n";
//    cout << "Writing down the number " << product_index + 1 << "\n";
//    textForAddandSort(product_index);
//    product_index++;
//    cout << "\n";
//    textToScreen(product_index);
//}
//
//void del()
//{
//    int d;
//    cout << "Select the entry number to be deleted ";
//    cin >> d;
//    for (int i = d - 1; i < product_index; i++)
//    {
//        arr[i] = arr[i + 1];
//    }
//    product_index--;
//
//    cout << "\n";
//    textToScreen(product_index);
//}
//
//void sortToFile()
//{
//    char changeChar;
//    int changeInt;
//    for (int j = 0; j < product_index; j++)
//    {
//        for (int i = 0; i < product_index - 1; i++)
//        {
//            if (arr[i].cost > arr[i + 1].cost)
//            {
//                swap(arr[i], arr[i + 1]);
//            }
//        }
//    }
//
//    textToScreen(product_index);
//}
//
//void changeToFile()
//{
//    int c;
//    cout << "Select the entry number to be change ";
//    cin >> c;
//
//    cout << "Change entry\n\n";
//    cout << "Writing down the number " << c << "\n";
//    cout << "Nazva productu:  ";
//    textForAddandSort(c - 1);
//
//    cout << "\n";
//    textToScreen(product_index);
//}
//
//void textToScreen(int product_index)
//{
//    for (int i = 0; i < product_index; i++)
//    {
//        cout << i + 1 << "\t" << arr[i].name << "\t" << arr[i].cost << "\t" << arr[i].quantity << "\t" << arr[i].date << endl;
//    }
//    cout << "\n";
//}
