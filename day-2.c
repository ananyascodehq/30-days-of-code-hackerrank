void solve(double meal_cost, int tip_percent, int tax_percent) {
    float tip_amt = tip_percent * meal_cost/100;
    float tax_amt = tax_percent * meal_cost/100;
    
    float total = meal_cost + tip_amt + tax_amt;
    int round_total = (int)round(total);
    printf("%d", round_total);
}
