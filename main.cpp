#include <iostream>
#include <string>

using namespace std;

class CountingCards
{
private:

    int cardInGame; // колода
    int otherPlayers; // игроков

    string dealerCard; // диллер

    string myFirstCard; // руки
    string mySecondCard; // руки

    string longPlay;

    string otherCard; // карты Игр
    string playersOut; // Вышли?
    int dropCard; // Карт Выш


public:

    void enter()
    {
        cout << "Welcome!" << endl;
        cout << "Cards in the deck: " << endl;
        cin >> cardInGame;

        // Расклад на 36 карт(!)
        if(cardInGame == 36)
        {
            while(longPlay != "over") {

                cout << endl << "///// The layout of 36 cards /////" << endl;

                const int T_SUITS = 36;
                int j = 0;
                string allCards[T_SUITS] = {"6c", "7c", "8c", "9c", "10c", "Jc", "Qc", "Kc", "Ac",
                                            "6s", "7s", "8s", "9s", "10s", "Js", "Qs", "Ks", "As",
                                            "6h", "7h", "8h", "9h", "10h", "Jh", "Qh", "Kh", "Ah",
                                            "6d", "7d", "8d", "9d", "10d", "Jd", "Qd", "Kd", "Ad"};

                cout << "My cards: " << endl;
                cin >> myFirstCard >> mySecondCard;

                cout << "First dealer card: " << endl;
                cin >> dealerCard;


                for (int i = 0; i < T_SUITS; i++) // Удаление схожей карты
                {
                    if (dealerCard == allCards[i]) {
                        allCards[i].erase();
                    }
                    if (myFirstCard == allCards[i]) {
                        allCards[i].erase();
                    }
                    if (mySecondCard == allCards[i]) {
                        allCards[i].erase();
                    }
                }

                cout << "///////// In the deck /////////" << endl;

                for(int i = 0; i < T_SUITS; i++)
                {
                    cout << allCards[i] << " ";
                    j++;
                    if(j == 9){
                        cout << endl;
                        j = 0;
                    }
                }

                do {

                    cout << endl;

                    cout << "Player(s) out?" << endl;
                    cin >> playersOut;

                    if (playersOut == "y") {
                        cout << "How many cards have been discarded: " << endl;
                        cin >> dropCard;

                        cout << "Which cards came out: " << endl;
                        for (int i = 0; i < dropCard; i++) {
                            cin >> otherCard;
                            for (int i = 0; i < T_SUITS; i++) {
                                if (otherCard == allCards[i]) {
                                    allCards[i].erase();
                                }
                            }
                        }
                        cout << "///////// In the deck /////////" << endl;

                        for(int i = 0; i < T_SUITS; i++)
                        {
                            cout << allCards[i] << " ";
                            j++;
                            if(j == 9){
                                cout << endl;
                                j = 0;
                            }
                        }
                        cout << endl;
                    }

                    cout << "More?" << endl;
                    cin >> longPlay;
                    for (int i = 0; i < T_SUITS; i++) {
                        if (longPlay == allCards[i]) {
                            allCards[i].erase();
                        }
                    }
                    cout << "///////// In the deck /////////" << endl;
                    for(int i = 0; i < T_SUITS; i++)
                    {
                        cout << allCards[i] << " ";
                        j++;
                        if(j == 9){
                            cout << endl;
                            j = 0;
                        }
                    }
                } while (longPlay != "exit");
            }
        }

        // Расклад на 52 карты(!)
        else if(cardInGame == 52)
        {
            cout << "///// The layout of 52 cards /////" << endl;

            const int T_SUITS = 52;
            int j = 0;
            string allCards[T_SUITS] = {"2c","3c","4c","5c","6c", "7c", "8c", "9c", "10c", "Jc", "Qc","Kc", "Ac",
                                        "2s","3s","4s","5s","6s", "7s", "8s", "9s", "10s", "Js", "Qs","Ks", "As",
                                        "2h","3h","4h","5h","6h", "7h", "8h", "9h", "10h", "Jh", "Qh","Kh", "Ah",
                                        "2d","3d","4d","5d","6d", "7d", "8d", "9d", "10d", "Jd", "Qd","Kd", "Ad"};

            cout << "My cards: " << endl;
            cin >> myFirstCard >> mySecondCard;

            cout << "First dealer card: " << endl;
            cin >> dealerCard;

            for(int i = 0; i < T_SUITS; i++) // Удаление схожей карты
            {
                if(dealerCard == allCards[i]){
                    allCards[i].erase();
                }
                if(myFirstCard == allCards[i]){
                    allCards[i].erase();
                }
                if(mySecondCard == allCards[i]){
                    allCards[i].erase();
                }
            }

            cout << "///////// In the deck /////////" << endl;

            for(int i = 0; i < T_SUITS; i++)
            {
                cout << allCards[i] << " ";
                j++;
                if(j == 13){
                    cout << endl;
                    j = 0;
                }
            }

            do {

                cout << endl;

                cout << "Player(s) out?" << endl;
                cin >> playersOut;

                if(playersOut == "y")
                {
                    cout << "How many cards have been discarded: " << endl;
                    cin >> dropCard;

                    cout << "Which cards came out: " << endl;
                    for(int i = 0; i < dropCard; i++)
                    {
                        cin >> otherCard;
                        for(int i = 0; i < T_SUITS; i++)
                        {
                            if(otherCard == allCards[i]){
                                allCards[i].erase();
                            }
                        }
                    }
                    cout << "///////// In the deck /////////" << endl;

                    for(int i = 0; i < T_SUITS; i++)
                    {
                        cout << allCards[i] << " ";
                        j++;
                        if(j == 13){
                            cout << endl;
                            j = 0;
                        }
                    }
                    cout << endl;
                }

                cout << "More?" << endl;
                cin >> longPlay;
                for(int i = 0; i < T_SUITS; i++)
                {
                    if(longPlay == allCards[i])
                    {
                        allCards[i].erase();
                    }
                }
                cout << "///////// In the deck /////////" << endl;

                for(int i = 0; i < T_SUITS; i++)
                {
                    cout << allCards[i] << " ";
                    j++;
                    if(j == 13){
                        cout << endl;
                        j = 0;
                    }
                }
            } while(longPlay != "exit");

        }

        else
        {
            cout << "Something went wrong..." << endl;
        }
    }

};

int main() {

    CountingCards play;
    play.enter();


    return 0;
}