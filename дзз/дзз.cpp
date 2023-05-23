//дз этой пары
// 
// 
//NAMBER 1
// 
// 
//#include <iostream>
//#include <time.h>
//using namespace std;
//
//int main(void)
//{
//    setlocale(LC_ALL, "Rus"); 
//    srand(time(NULL));
//    int const arraySize = 10;
//    int const numberLimit = 10;
//    int array10[arraySize];
//    int array5_1[arraySize / 2];
//    int array5_2[arraySize / 2];
//    int i;
//
//    cout << "Массив 10\n";
//    
//    for (i = 0; i < arraySize; i++)
//    {
//        array10[i] = rand() % (numberLimit + 1);
//        if (i < 5)
//        {
//            array5_1[i] = array10[i];
//        }
//        else
//        {
//            array5_2[i - arraySize / 2] = array10[i];
//        }
//
//        cout << "Массив10[" << i << "] = " << array10[i] << "\n";
//    }
//    cout << endl << "Массив5.1\t\t" << "Массив 5.2\n";
//
//    for (i = 0; i < arraySize / 2; i++)
//    {
//        cout << "Массив5.1[" << i << "] = " << array5_1[i] <<
//            "\t\tМассив5.2[" << i << "] = " << array5_2[i] << "\n";
//    }
//}
//}
// 
// 
//namber 2
// 
// 
//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    const int size = 10;
//    int arr1[size];
//    int arr2[size];
//    int arrs[size];
//    cout << "Введите рандомные числа для первого массива:\n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << "ar[" << i << "] = ";
//        cin >> arr1[i];
//    }
//    cout << "\nВведите рандомные числа для второго массива:\n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << "ar1[" << i << "] = ";
//        cin >> arr2[i];
//    }
//    cout << "\nТретий массив с суммой двух массивов:\n";
//    for (int i = 0; i < size; i++)
//    {
//        arrs[i] = arr1[i] + arr2[i];
//        cout << "ar2[" << i << "] = ";
//        cout << arrs[i] << "\n";
//    }
//}


//namber 3


//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//		int a;
//	double day, sum = 0;
//	const char* Wday[] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота","Воскресенье" };
//
//	for (int i = 0; i < 7; i++)
//	{
//	cout << Wday[i] << " = ";
//	cin >> day;
//	sum += day;
//
//	if (day >= 100)
//	{
//	if (day > 100)
//	cout << Wday[i]; "  ";
//	}
//	}
//
//	cout << "Средняя за неделю потраченная сумма = " << sum/7 << "\n";
//
//	cout << "Общая сумма, потраченная пользователем за неделю = " << sum << "\n";
//
//	cout << "Сумма расходов в день не превысила 100$" << " " << "\n";
//
//	return 0;
//	}



//дз прошлых пар
// 
// 
//задание 1 16.05
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[20];
//     for(int i = 0; i < 20; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for(int i = 0; i < 20; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << endl << "Max: " << max << endl << "Min: " << min;
//     system("pause");
//     return 0;
// }


// задание 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[9] {11, 22, 31, 42, 52, 61, 27, 18, 19};
//     int tmp = 0, sum;
//     std::cin >> tmp;
//     for(int i = 0; i < 9; i++){
//         if(arr[i] < tmp) sum += arr[i];    
//         }
//     return 0;
// }
// 
// 
// 11.05
// задание 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     setlocale(LC_ALL, "Russian");

//     int action, line, chooseaction;
//     char symbol, speed;
//     uint32_t millisecs;


//     cout << "Введите символ : ";
//     cin >> symbol;
//     cout << " Введите длину линии : ";
//     cin >> line;
//     cout << "\n 1 - Горизонтальная \n 2 - Вертикальная линия \n\n Выберите вариант : ";
//     cin >> chooseaction;
//     cout << "\n f - Быстрая \n n - Нормальная \n s - Медленная \n\n Выберите вариант : ";
//     cin >> speed;

//     switch (speed)
//     {
//     case 'f': millisecs = 20; break;
//     case 'n': millisecs = 400; break;
//     default:  millisecs = 1000;
//     }

//     for (int j = 0; j < line; j++)
//     {
//         cout << symbol;
//         if (chooseaction != 1) cout << endl;
//     }

//     system("pause");
// }



//задание 2
//#include <iostream>
//
//#include <time.h>
//using namespace std;
//
//void main()
//{
//    srand(time(NULL));
//    int Dice, comp, igrok, answer;
//    cin >> Dice;
//
//
//
//
//
//
//
//            case 1:
//
//            {
//                cout << "===========" << endl;
//                cout << "|         |" << endl;
//                cout << "|         |" << endl;
//                cout << "|    *    |" << endl;
//                cout << "|         |" << endl;
//                cout << "|         |" << endl;
//                cout << "===========" << endl;
//            }break;
//            case 2:
//            {
//                cout << "===========" << endl;
//                cout << "|         |" << endl;
//                cout << "|    *    |" << endl;
//                cout << "|         |" << endl;
//                cout << "|    *    |" << endl;
//                cout << "|         |" << endl;
//                cout << "===========" << endl;
//
//            }break;
//            case 3:
//            {
//                cout << "===========" << endl;
//                cout << "|         |" << endl;
//                cout << "|  *      |" << endl;
//                cout << "|    *    |" << endl;
//                cout << "|      *  |" << endl;
//                cout << "|         |" << endl;
//                cout << "===========" << endl;
//
//            }break;
//            case 4:
//            {
//                cout << "===========" << endl;
//                cout << "|         |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|         |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|         |" << endl;
//                cout << "===========" << endl;
//
//            }break;
//            case 5:
//            {
//                cout << "===========" << endl;
//                cout << "|         |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|    *    |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|         |" << endl;
//                cout << "===========" << endl;
//
//            }break;
//            case 6:
//            {
//                cout << "===========" << endl;
//                cout << "|         |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|  *   *  |" << endl;
//                cout << "|         |" << endl;
//                cout << "===========" << endl;
//
//            }break;
//}
//
//
//
//system("pause");
//    }