#define CAL(a) a * a * a
#define MAGIC_CAL(a, b) CAL(a) + CAL(b)
int main(void) {
    int nums = 1;
    if(16 / CAL(2) == 2) {
        printf("I'm TWO(ﾉ>ω<)ﾉ\n");
    } else {
        int nums = MAGIC_CAL(++nums, 2);//未定义行为
    }//因为块作用域，所以在其中重定义的nums出来后被销毁了，nums的值等于1
    printf("%d\n", nums);
}