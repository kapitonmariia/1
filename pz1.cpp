#include <iostream>
#include <cmath>

int main()
 {
  double a,b;
  int a =2;
  int b =12,11
  
  double ln_a = log(a);
  double ln_b = log(b);
  double ln_sum = ln_a + ln_b;
  double ab_squared = pow(a + b, 2);
  double e_to_a = exp(a);
  double ab_squared_plus_e = ab_squared + e_to_a;
  double cos_result = cos(ab_squared_plus_e);
  double pi_over_6 = M_PI / 6;
  double product = cos_result * pi_over_6;
  double result = cbrt(product);
  double five_times_ln_sum = 5 * ln_sum;
   if (result != 0) {
        double final_result = five_times_ln_sum / result;
 std::cout << "Результат: " << final_result << std::endl;
    } else {
        std::cout << "Ділення на нуль неможливе." << std::endl;
    }

    return 0;
}




}
