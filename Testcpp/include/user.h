#ifndef USER_H
#define USER_H


class user
{
    public:
        char *first, *last, *sex;
        int age, salary;

        user(char *First, char *Last);
        getDetail();
        printDetail();
        virtual ~user();

    protected:

    private:
};

#endif // USER_H
