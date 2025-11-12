#include <iostream>,<math.h>

using namespace std;

//1 task
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int f_st, s_nd, t_rd; // Задаю длинну, ширину и высоту кирпича
//    cout << "Введите первую сторону: ";
//    cin >> f_st;
//    cout << "Введите вторую сторону: ";
//    cin >> s_nd;
//    cout << "Введите третью сторону: ";
//    cin >> t_rd;
//    float res = pow(f_st * f_st + s_nd * s_nd + t_rd * t_rd,0.5); // Произвожу вычисление диагонали кирпича
//    cout.precision(3); // Задаю кол-во символов после запятой
//    cout << "The diagonal of the brick with edges " << f_st << ", " << s_nd << " and " << t_rd << " is " << res << endl; // Вывожу ответ
//    return 0;
//}

//2 task
//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//    int L, t, v; // Задаю длинну круга, время и скорость
//    cout << "Введите длинну круга: ";
//    cin >> L;
//    cout << "Введите время пути: ";
//    cin >> t;
//    cout << "Введите скорость автомобиля: ";
//    cin >> v;
//    double dist = v * t; // Считаю пройденный путь
//    double offset = fmod(dist, L); // Считаю частное от деления пути на длинну круга
//    int mark = static_cast<int>(fmod(offset + L, L)); // Превожу всё к типу int и привожу к диапазону от нуля до длинны круга, далее считаю точную отметку
//    cout << "В конце своего пути машина оказалась на отметке: " << mark << endl;
//    return 0;
//}

//3 task
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    double x, y, z; // Задаю переменные
//    cout << "Введите x: ";
//    cin >> x;
//    cout << "Введите у: ";
//    cin >> y;
//    cout << "Введите z: ";
//    cin >> z;
//    double res = log((y - pow(abs(x),0.5))*(x-y/(z+(pow(x,2))/4))); // Произвожу вычисления согласно формуле
//    cout << "Значение выражения: " << res << endl; // Вывожу ответ
//    return 0;
//}

//lab 2
// 1 task
//int main() {
//    int a, b, c, d;
//    cout << "Введите четыре целых длины отрезков: ";
//    cin >> a >> b >> c >> d;
//
//    cout << "Тройки отрезков, из которых можно составить треугольник:" << endl;
//
//    // Проверяем все возможные комбинации из 3 отрезков из 4
//    // Комбинация 1: a, b, c
//    if (a + b > c && a + c > b && b + c > a) {
//        // Выводим в отсортированном порядке для уникальности
//        int min1 = min(a, min(b, c));
//        int max1 = max(a, max(b, c));
//        int mid1 = a + b + c - min1 - max1;
//        cout << min1 << " " << mid1 << " " << max1 << endl;
//    }
//
//    // Комбинация 2: a, b, d
//    if (a + b > d && a + d > b && b + d > a) {
//        int min2 = min(a, min(b, d));
//        int max2 = max(a, max(b, d));
//        int mid2 = a + b + d - min2 - max2;
//        cout << min2 << " " << mid2 << " " << max2 << endl;
//    }
//
//    // Комбинация 3: a, c, d
//    if (a + c > d && a + d > c && c + d > a) {
//        int min3 = min(a, min(c, d));
//        int max3 = max(a, max(c, d));
//        int mid3 = a + c + d - min3 - max3;
//        cout << min3 << " " << mid3 << " " << max3 << endl;
//    }
//
//    // Комбинация 4: b, c, d
//    if (b + c > d && b + d > c && c + d > b) {
//        int min4 = min(b, min(c, d));
//        int max4 = max(b, max(c, d));
//        int mid4 = b + c + d - min4 - max4;
//        cout << min4 << " " << mid4 << " " << max4 << endl;
//    }
//
//    return 0;
//}

//2 task
//int main() {
//    setlocale(LC_ALL, "Russian");
//    double x,y,res;
//    cout << "Введите x: ";
//    cin >> x;
//    cout << "Введите y: ";
//    cin >> y;
//
//    if (x > 0 && (x - 2 * y) > 0) {
//        res = (1 - pow(x - 2 * y, 0.5)) / log(abs(x - y));
//        cout << "Значение выражения: " << res << endl;
//    }
//    else if (x <= 0){
//        res = exp(y) + log(1 - x);
//        cout << "Значение выражения: " << res << endl;
//    }
//    else {
//        res = (x - y) / (exp(x + y));
//        cout << "Значение выражения: " << res << endl;
//    }
//    return 0;
//}

//3 task
int main() {
    setlocale(LC_ALL, "Russian");
    double x,y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    if ((pow(x, 2) - 6) > 0 && x > 0 && y < 0 && pow((16 - pow(x, 2), 0.5) < 0) {
        cout << "Значение выражения: F" << endl;
    }
    /*else if (x <= 0){
        res = exp(y) + log(1 - x);
        cout << "Значение выражения: " << res << endl;
    }
    else {
        res = (x - y) / (exp(x + y));
        cout << "Значение выражения: " << res << endl;
    }*/
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.