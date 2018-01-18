#ifndef LIST_H
#define LIST_H
class List
{
    public:
        List();
        ~List();//the destructor is used to show the order the price and the estimated time to make the order

        /*And yes I could just do a multidimensional array but I think separating all the arrays is better to work with than remembering all data*/

        const float drinkPrice [3]              =   {1.25, 1.60, 1.80}; //first value for small drinks, second for medium and third for large
        const string drinkName [15]             =   {"Cola", "Zero", "Fanta", "Sprite", "IcedTea", "Beer",
                                                    "Bongo Tropical", "Bongo Pessego", "água", "Limonada",
                                                    "Mocha", "Smt Mang", "Smt Verm", "MS Morango", "MS Apple"}; //The Name of all the drinks, here we don't need the price of each drink because they are based on the size value
        const float Tarte                       =   0.80; //value of the apple Pie
        const float Panqueca                    =   1.20; //value of the pancake
        const float dessertPrice [5]            =   {1.40, 1.60, 1.45, 1.85, 2.10};//sundae, xl sundae, mini mcflurry, mcflurry, parfait
        const string dessertName [5]            =   {"sundae", "xlSundae", "miniFlurry", "mcflurry", "parfait"};
        const string toppingName [12]           =   {"Natura", "Chocolate" ,"Morango" ,"Caramelo", "Oreo",
                                                    "KitKat", "MM'S", "Snickers", "Caramelo Salgado", "Cheesecake", "Amendoa", "Brownie"};
        const float soupPrice [2]               =   {1.20,1.60}; //150ml and 300ml
        const string soupName [4]               =   {"Lavrador", "CaldoVerde", "Ervilhas", "Legumes"};

        // for calculation and inputs

    private:
        string order;
        float price;
        string time;

};

#endif // LIST_H
