#include <bits/stdc++.h>

using namespace std;

class END{
private:
public:
    void First(){
        int numbers[6] = {5,6,4,2,3,1};
        int fnum, fnum1;
        cout << "Первое испытание!" << endl;
        cout << "Вам нужно угадать код от двери в замок(диапазон от 1 до 6)!" << endl;
        while(true){
            while(true){
                cout << "Введите первое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[0]){
                    break;
                }
                cout << "Введите второе число:" << endl;
                cin >> fnum;
                if(fnum != numbers[1]){
                    break;
                }
                cout << "Введите третье число:" << endl;
                cin >> fnum;
                if(fnum != numbers[2]){
                    break;
                }
                cout << "Введите четвертое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[3]){
                    break;
                }
                cout << "Введите пятое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[4]){
                    break;
                }
                cout << "Введите шестое число:" << endl;
                cin >> fnum1;
                if(fnum != numbers[5]){
                    break;
                }
                if(fnum1 == numbers[5]){
                    cout << "Вы угадали! Первый уровень пройден!" << endl;
                    break;
                }
            }
            if(fnum1 == numbers[5]){
                break;
            }
            cout << " " << endl;
            cout << "Не верно! Введите заново!"<< endl;
        }
    }

    void Second(){
        int N1, N2, randnum,randnum1,randnum2;
        N1 = 0;
        N2 = 0;
        string otvet, otvet1;
        string array1[20] = {"Вопрос1?","Вопрос2?","Вопрос3?","Вопрос4?","Вопрос5?","Вопрос6?","Вопрос7?","Вопрос8?","Вопрос9?","Вопрос10?",
        "Вопрос11?","Вопрос12?","Вопрос13?","Вопрос14?","Вопрос15?","Вопрос16?","Вопрос17?","Вопрос18?","Вопрос19?","Вопрос20?"};
        string array2[20]= {"Ответ1","Ответ2","Ответ3","Ответ4","Ответ5","Ответ6","Ответ7","Ответ8","Ответ9","Ответ10",
        "Ответ11","Ответ12","Ответ13","Ответ14","Ответ15","Ответ16","Ответ17","Ответ18","Ответ19","Ответ20",};


        cout << "Во втором испытании будет небольшая гонка!" << endl;
        cout << "Нужно будет подбрасывать кубики, после будет задан вопрос, если ответ будет верный, то ход будет зафиксирован" << endl;

        while(true){
            while(true){
                cout << "Игрок 1 подбрасывает кубик:" << endl;
                randnum = rand() % 6+1;
                cout << "Выпало число:" << randnum << "Передвижение"<< endl;
                randnum1 = rand() % 20+1;
                cout << array1[randnum1] << endl;
                cout << "Ответ:";
                cin >> otvet;
                if(otvet == "N21"){
                    N1 = 21;
                }
                if(array2[randnum1] == otvet){
                    cout << "Ответ верный, ход зафиксирован!!!" << endl;
                    N1 = N1 + randnum;
                }
                else if(array2[randnum1] != otvet){
                    cout << "Ответ не верный, ход не зафиксирован" << endl;
                }
                if(N1 > 20){
                    cout << "Первый игрок победил!!!";
                    break;
                }

                cout << "Игрок 2 подбрасывает кубик:" << endl;
                randnum2 = rand() % 6+1;
                cout << "Выпало число:" << randnum << "Передвижение"<< endl;
                randnum1 = rand() % 20+1;
                cout << array1[randnum1] << endl;
                cout << "Ответ:";
                otvet1 = array2[rand() % 20+1];
                cout << otvet1 << endl;

                if(array2[randnum1] == otvet1){
                    cout << "Ответ верный, ход зафиксирован!!!" << endl;
                    N2 = N2 + randnum2;

                }
                else if(array2[randnum1] != otvet1){
                    cout << "Ответ не верный, ход не зафиксирован" << endl;
                }
                if(N2 > 20){
                    cout << "Второй игрок победил!!!" << endl;
                    break;
                }
            }
            if(N1 > 20){
                    break;
                }
        }
    }

    void Third(){
        int numbers[6] = {5,2,4,3,6,1};
        int fnum, fnum1;
        cout << "Третье испытание похоже на первое, но с небольшим отличием)" << endl;
        cout << "Вам нужно угадать код от сундука(диапазон от 1 до 6)!" << endl;
        cout << "НО первым числом вы вводите 6 число от сундука" << endl;
        cout << "Вторым числом вводите первое число от сундука" << endl;
        cout << "Третьим числом вводите 5 число и так далее" << endl;
        while(true){
            while(true){
                cout << "Введите шестое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[5]){
                    break;
                }
                cout << "Введите первое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[0]){
                    break;
                }
                cout << "Введите пятое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[4]){
                    break;
                }
                cout << "Введите второе число:" << endl;
                cin >> fnum;
                if(fnum != numbers[1]){
                    break;
                }
                cout << "Введите четвертое число:" << endl;
                cin >> fnum;
                if(fnum != numbers[3]){
                    break;
                }
                cout << "Введите третье число:" << endl;
                cin >> fnum1;
                if(fnum1 != numbers[2]){
                    break;
                }
                if(fnum1 == numbers[2]){
                    cout << "Вы угадали! Третий уровень пройден!" << endl;
                    break;
                }
            }
            if(fnum1 == numbers[2]){
                cout << "Вы прошли все три испытания!!!" << endl;
                cout << "Вы открыли сундук!" << endl;
                cout << "Там пусто!" << endl;
                break;
            }
        }
    }
};
int main()
{
    setlocale(LC_ALL,"Russian");
    END end1;
    end1.First();
    end1.Second();
    end1.Third();
}

