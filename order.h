#ifndef ORDER_H
#define ORDER_H


class order: public List//this way we can access the list of options to order
{
    public:
        order();
        int drinks();
        int dessert();
        int soup();
        ~order();

    protected:

    private:
        int ans;
        int *answer = &ans;//we are using a pointer to use the same variable for all costumer options, further we will return all options to a separated class
};

#endif // ORDER_H
