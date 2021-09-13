enum PeriodType {daily, monthly, yearly);
double computeSimpleYearlyInterestCharge(double principalAmt, double annualRate)
{
	return principalAmt * annualRate;
}
double computeSimpleDailyInterestCharge(double principalAmt, double annualRate)
{
	double annualCharge = computeSimpleYearlyInterestCharge(principalAmt, annualRate);
	return annualCharge / 365;
}
double computeSimpleMonthlyInterestCharge(double principalAmt, double annualRate, int billingDays)
{
	double dailyCharge = computeSimpleDailyInterestCharge(principalAmt, annualRate);
	
	return dailyCharge * billingDays;
}