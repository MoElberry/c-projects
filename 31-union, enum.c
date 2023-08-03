typedef union
{

    struct
    {
        char c1;
        char c2;
        char c3;
        char c4;
        char c5;
        char c6;
        char c7;
        char c8;
    };
    struct
    {
        short s1;
        short s2;
        short s3;
        short s4;
    };
    struct
    {
        int i1;
        int i2;
    };

    long long l;
    char arr[8];

} u_t;


typedef enum {
SUNDAY=1,
MONDAY,
TUESDAY,
WEDNESDAY,
THRUSDAY,
FRIDAY,
SATURDAY
}day_t;

int main()
{
    day_t today=FRIDAY;
    day_t yesterday=today-1;
    day_t week[7];
}